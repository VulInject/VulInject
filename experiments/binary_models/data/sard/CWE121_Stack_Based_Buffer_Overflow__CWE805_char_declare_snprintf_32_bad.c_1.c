#VAR1 ""
#VAR1 <VAR2.VAR3>
#define SNPRINTF _snprintf
#define SNPRINTF snprintf
void FUN1()
{
    char * VAR4;
    char * *VAR5 = &VAR4;
    char * *VAR6 = &VAR4;
    char VAR7[50];
    char VAR8[100];
    {
        char * VAR4 = *VAR5;
        VAR4 = VAR7;
        VAR4[0] = ''; 
        *VAR5 = VAR4;
    }
    {
        char * VAR4 = *VAR6;
        {
            char VAR9[100];
            memset(VAR9, '', 100-1); 
            VAR9[100-1] = ''; 
            FUN2(VAR4, 100, "", VAR9);
            FUN3(VAR4);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}