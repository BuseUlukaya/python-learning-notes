#include<stdio.h>
void plural(char *s1, char *s2);

int main(){
	char string1[80],string2[80];	
	scanf("%s", string1);
	
	plural(string1,string2);
	
	printf("%s %s\n", string1, string2);
	
	
	return 0;
}

void plural(char *s1, char *s2){
	int j=0;
	while(s1[j] != '\0'){
		s2[j] = s1[j];
		j++;
	}
	int len;
	len=0;
    int flag = 1;
    
    while(flag){
        if(s1[len] == '\0'){
	    flag = 0;
        }
        else{
            len++;
        }
    }
    
	if(s2[len -1 ] =='y'){
    		s2[len -1] = 'i';
    		s2[len ]= 'e';
    		s2[len + 1]= 's';
    		s2[len +2]='\0';    		
	}
	else if(s2[len -1] == 's' || (s2[len -1] == 'h' && s2[len -2] == 'c' ) || (s2[len -1] == 'h' ) && s2[len -2] == 's'  ){
		s2[len] ='e';
		s2[len + 1] ='s';
	}
		
	else{
		s2[len] = 's';
		s2[len + 1] = '\0';
	}    	
	
    
}
