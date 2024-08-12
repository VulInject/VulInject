#VAR1 ""
#VAR1 <VAR2.VAR3>
#define SNPRINTF _snprintf
#define SNPRINTF snprintf
void FUN1()
{
    char * VAR4;
    char * *VAR5 = &VAR4;
    char * *VAR6 = &VAR4;
    char * VAR7 = (char *)FUN2(50*sizeof(char));
    char * VAR8 = (char *)FUN2(100*sizeof(char));
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
            FUN3(VAR4, 100, "", VAR9);
            FUN4(VAR4);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN1();
    return 0;
}