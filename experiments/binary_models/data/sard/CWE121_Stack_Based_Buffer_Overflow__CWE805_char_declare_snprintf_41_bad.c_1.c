#VAR1 ""
#VAR1 <VAR2.VAR3>
#define SNPRINTF _snprintf
#define SNPRINTF snprintf
void FUN1(char * VAR4)
{
    {
        char VAR5[100];
        memset(VAR5, '', 100-1); 
        VAR5[100-1] = ''; 
        FUN2(VAR4, 100, "", VAR5);
        FUN3(VAR4);
    }
}
void FUN4()
{
    char * VAR4;
    char VAR6[50];
    char VAR7[100];
    VAR4 = VAR6;
    VAR4[0] = ''; 
    FUN1(VAR4);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN4();
    return 0;
}