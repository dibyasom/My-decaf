import math
import numpy as np

ways = 0
uniqueWays = 0
allSolutions = []
baseSolutions = []


def rotateClockwise(board):
    size= len(board)
    boardR = np.full((size, size), ' ')
    for j in range(size):
        for i in range(size-1, -1, -1):
            boardR[j][size-1-i] = str(board[i][j])
    return boardR

def isUnique(placementA, placementB):
    for r1,r2 in zip(placementA, placementB):
        for c1,c2 in zip(r1, r2):
            if c1 != c2:
                return True
    return False

def existsInAnyCluster(board):
    for cluster in allSolutions:
        for placement in cluster:
            if not isUnique(placement, board):
                return True
    return False

def attachRot(board):
    if  len(allSolutions)==0 or (not existsInAnyCluster(board)):
        cluster= []
        boardT = [[board[j][i] for j in range(len(board))] for i in range(len(board[0]))] 
        boardT = np.array(boardT)
        cluster.append(boardT)
        cluster.append(board)

        for _ in range (3):
            board =  rotateClockwise(board)
            boardT = [[board[j][i] for j in range(len(board))] for i in range(len(board[0]))]
            boardT = np.array(boardT)
            cluster.append(boardT)
            cluster.append(board)

        allSolutions.append(cluster)

def printBoard(board):
    for row in board:
        print(row)
    print()

def solveBoard(board, row, rowmask, ldmask, rdmask):
    n = len(board)
    all_rows_filled = (1 << n) - 1
    if (rowmask == all_rows_filled):
        global ways
        ways = ways + 1
        baseSolutions.append(np.array(board)) #Attach to base solutions.
        attachRot(np.array(board))            #Check for fundamental solution.

    safe = all_rows_filled & (~(rowmask | ldmask | rdmask))
    while (safe > 0):
        p = safe & (-safe)
        col = (int)(math.log(p)/math.log(2))
        board[row][col] = 'Q'
        solveBoard(board, row+1, rowmask|p, (ldmask|p) << 1, (rdmask|p) >> 1)
        safe = safe & (safe-1)
        board[row][col] = ' '

def printCluster(clusterNode):
    for cluster in clusterNode:
        for placement in cluster:
            printBoard(placement)
        print("*"*30)

def printClusterUnique(clusterNode):
    for cluster in clusterNode:
        printBoard(cluster[0])

def displayResults(allSolutions, baseSolutions, ways, size):
    print("All Solutions ~")
    printCluster([baseSolutions])
    print("*"*20)
    print("Unique Solutions")
    printClusterUnique(allSolutions)
    print("Board size- {}\nPossible Queen Placements- {}\nUnique Placements- {}".format(size, ways, len(allSolutions)))

# Driver Code        
def main():
   
    n = int(input("Board size? "))
    board = np.full((n,n), ' ')
    rowmask = 0
    ldmask = 0
    rdmask = 0
    row = 0
     
    solveBoard(board, row, rowmask, ldmask, rdmask)
    displayResults(allSolutions, baseSolutions, ways, n)

if __name__== "__main__":
    main()