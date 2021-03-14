class access

    {

        public int x;

            private int y;

        void cal(int a, int b)

        {

            x =  a + 1;

            y =  b;

        }       

    }   

    class midtermQ1

    {

        public static void main(String args[])

        {

            access obj = new access();  

            obj.cal(2, 3);

            System.out.println(obj.x + " " + obj.y);    

        }

   }