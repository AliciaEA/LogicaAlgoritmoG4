#define MAX_STR 60
#define MAX_REG 1000



typedef struct PERSON
{
    char cif[MAX_STR];
    char name[MAX_STR];
    char lastname[MAX_STR];
    int year;
};

PERSON people[MAX_REG]; 
int pos = 0;

