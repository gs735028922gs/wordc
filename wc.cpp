#include<stdio.h>
#include<string.h>

void countc(char a2[100])	    
{    
    char temp;
    int c = 0;
    FILE *fp = fopen(a2,"r");   
    temp = fgetc(fp);
    while(temp != EOF)                                                 
    {
        if((temp >= 'a'&&temp <= 'z') || (temp >= 'A'&&temp <= 'Z'))
        c++;        
        temp = fgetc(fp);
            
    }
    printf("字符共:  %d 个\n",c);

} 
         
				
void countw(char a2[100])		
{			
    char temp;
    int w = 0;
    FILE *fp = fopen(a2,"r");
    temp = fgetc(fp);
    while (temp != EOF)     
    {
        if ((temp >= 'a'&&temp <= 'z') || (temp >= 'A'&&temp <= 'Z') || (temp >= '0'&&temp <= '9'))
        {
            while ((temp >= 'a'&&temp <= 'z') || (temp >= 'A'&&temp <= 'Z') || (temp >= '0'&&temp <= '9'))
            {
            temp = fgetc(fp);    
            }
            w++;
         temp = fgetc(fp);
        }
        else
            temp = fgetc(fp);
    }
    printf("单词总共：%d 个\n",w);


} 
   
         
void countl(char a2[100])
{
  char temp;
    int l = 0;
    FILE *fp = fopen(a2,"r");
    temp = fgetc(fp);
    while(temp != EOF)
    {       
        if(temp == '\n')              
            l++;
        temp = fgetc(fp);        
    }
    l++; 
    printf("行数总共： %d 个\n",l);

}




int main(int argc,char *argv[])
{    
    char a[100];
    strcpy(a,argv[2]); 
    
	if(!strcmp(argv[1],"-c"))
	countc(a);
	
	else if(!strcmp(argv[1],"-w"))
	countw(a);
	
	else if(!strcmp(argv[1],"-l"))
	countl(a);

    getchar();
    return 0;
} 



         

