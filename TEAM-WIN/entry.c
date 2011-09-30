/*
 * Author: Anthony Lipscomb
 * Email: anthony.lipscomb@gmail.com
 */
 
 #include <stdio.h>
 #include <stdlib.h>
 
 int main(int argc, char *argv[])
 {
   int four = 0;
   
   if(argc == 2)
   {
      int value = atoi(argv[1]);
      
      do
      {
         printf("%d --> ", value);
         
         switch(value)
         {
            /*All numbers whose name has three letters*/
            case 1:
            case 2:
            case 6:
            case 10:
               value = 3;
               break;
              
            /*All numbers whose name has four letters*/ 
            case 4:
            case 5:
            case 9:
               value = 4;
               four++;
               break;

            /*All numbers whose name has five letters*/               
            case 3:
            case 7:
            case 8:
            
            case 40:
            
            case 50:
            
            case 60:
               value = 5;
               break;
               
            /*All numbers whose name has six letters*/
            case 11:
            case 12:
            
            case 20:
            
            case 30:
            
            case 80:
            case 90:
               value = 6;
               break;
            
            /*All numbers whose name has seven letters*/
            case 15:
            case 16:
            
            case 70:
               value = 7;
            
            /*All numbers whose name has eight letters*/
            case 13:
            case 14:
            case 19:
            
            case 41:
            case 42:
            case 46:
            
            case 51:
            case 52:
            case 56:
            
            case 61:
            case 62:
            case 66:
               value = 8;
               break;
            
            /*All numbers whose name has nine letters*/
            case 17:
            case 18:
            
            case 21:
            case 22:
            case 26:
            
            case 31:
            case 32:
            case 36:
            
            case 44:
            case 45:
            case 49:
            
            case 54:
            case 55:
            case 59:
            
            case 64:
            case 65:
            case 69:
            
            case 81:
            case 82:
            case 86:
            
            case 91:
            case 92:
            case 96:
               value = 9;
               break;
               
            /*All numbers whose name has ten letters*/
            case 24:
            case 25:
            case 29:
            
            case 34:
            case 35:
            case 39:
            
            case 43:
            case 47:
            case 48:
            
            case 53:
            case 57:
            case 58:
            
            case 71:
            case 72:
            case 76:
            
            case 84:
            case 85:
            case 89:
            
            case 94:
            case 95:
            case 99:
               value = 10;
               break;
            
            /*All numbers whose name has eleven letters*/
            case 23:
            case 27:
            case 28:
            
            case 33:
            case 37:
            case 38:
            
            case 74:
            case 75:
            case 79:
            
            case 83:
            case 87:
            case 88:
            
            case 93:
            case 97:
            case 98:
               value = 11;
               break;
            
            /*All numbers whose name has twelve letters*/
            case 73:
            case 77:
            case 78:
               value = 12;
               break;
               
            default:
               printf("Initial Value out of Range!\n");
               return 0;
         }
      } while(four != 2);
      
      printf("4\n");
   }
   else 
   {
      printf("usage: entry <initial value>\n");
   } 
   
   return 0;
 }
