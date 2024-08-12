int main ()
{
struct VAR1 {
int VAR2;
}; 

struct VAR3 { 
struct base VAR4;
char VAR5;
};

struct derived VAR6;
struct VAR1 *VAR7;

VAR7 = (struct VAR1 *)&VAR6;

VAR7->VAR2 = 10;
((struct VAR3 *)VAR7)->VAR5 = '';
return 0;
}