#include <stdio.h>
#include <string.h>

struct student {
           int ID;
           char name[10];
           float grade;
};
    
int main(int argc, char *argv[])
{
    struct student s1 = {2210922, "seoyeon", 3.9};
    
    s1.ID = 2222; 
    s1.name[0] = 'S';
    s1.grade = 4.2;
    
    printf("ID: %d\nname: %s\ngrade: %.2f\n", s1.ID, s1.name, s1.grade);
    
    strcpy(s1.name, "SY");
    printf("name2: %s\n", s1.name);
  
  system("PAUSE");	
  return 0;
}


