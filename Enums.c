#include<stdio.h>
#include<stdbool.h>

int main()
{
    enum gender {Male, Female};                
    enum gender my_gen;
    my_gen = Male;                
    enum gender another_gen = Female;                
    bool isMale = (my_gen == another_gen); 
    
    printf("%d", isMale); 
    return 0;
}
