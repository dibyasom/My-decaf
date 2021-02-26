import sys 
  
class Graph(): 
  
    def __init__(self, vertices): 
        self.V = vertices 
        self.graph = [[0 for column in range(vertices)]  
                    for row in range(vertices)] 
  
    def printSolution(self, dist): 
        print("Vertex \tDistance from Source")
        for node in range(self.V): 
            print (node, "\t", dist[node])

    def minDistance(self, dist, sptSet): 
  
        min = 999999999
  
        for v in range(self.V): 
            if dist[v] < min and sptSet[v] == False: 
                min = dist[v] 
                min_index = v 
  
        return min_index 
  
    def dijkstra(self, src, solMat): 
  
        dist = [999999999] * self.V 
        dist[src] = 0
        sptSet = [False] * self.V 
  
        for cout in range(self.V): 
  
            u = self.minDistance(dist, sptSet) 
  
            sptSet[u] = True
  
            for v in range(self.V): 
                if self.graph[u][v] > 0 and sptSet[v] == False and dist[v] > dist[u] + self.graph[u][v]: 
                        dist[v] = dist[u] + self.graph[u][v] 
  
        solMat.append(dist) 

V = 4
answer = [] 
  
def tsp(graph, v, currPos, n, count, cost): 
    if (count == n and graph[currPos][0]): 
        answer.append(cost + graph[currPos][0]) 
        return
  
    for i in range(n): 
        if (v[i] == False and graph[currPos][i]): 
              
            v[i] = True
            tsp(graph, v, i, n, count + 1,  
                cost + graph[currPos][i]) 
              
            v[i] = False 

def printMinDistMat(solMat):
    for row in solMat:
        print(row)

if __name__ == '__main__': 

    nodes, source = 9, 0

    g = Graph(nodes) 
    g.graph = [
            [0, 4, 0, 0, 0, 0, 0, 8, 0], 
            [4, 0, 8, 0, 0, 0, 0, 11, 0], 
            [0, 8, 0, 7, 0, 4, 0, 0, 2], 
            [0, 0, 7, 0, 9, 14, 0, 0, 0], 
            [0, 0, 0, 9, 0, 10, 0, 0, 0], 
            [0, 0, 4, 14, 10, 0, 2, 0, 0], 
            [0, 0, 0, 0, 0, 2, 0, 1, 6], 
            [8, 11, 0, 0, 0, 0, 1, 0, 7], 
            [0, 0, 2, 0, 0, 0, 6, 7, 0] 
            ]
    
    minDistMatrix = []
    for node in range(nodes):
        g.dijkstra(node, minDistMatrix); 
    
    print("<Minimum Distane Matrix>")
    printMinDistMat(minDistMatrix)

    #Travelling Salesman Problem.
    nodeIsVisited = [False for _ in range(nodes)] 
    nodeIsVisited[0] = True
    tsp(g.graph, nodeIsVisited, 0, nodes, 1, 0) 
    print(min(answer)) 
  

  