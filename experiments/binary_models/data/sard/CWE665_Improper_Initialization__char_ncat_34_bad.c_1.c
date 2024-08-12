#VAR1 ""
#VAR1 <VAR2.VAR3>
typedef union
{
    char * VAR4;
    char * VAR5;
} VAR6;
void FUN1()
{
    char * VAR7;
    CWE665_Improper_Initialization__char_ncat_34_unionType VAR8;
    char VAR9[100];
    VAR7 = VAR9;
    ; 
    VAR8.VAR4 = VAR7;
    {
        char * VAR7 = VAR8.VAR5;
        {
            size_t VAR10;
            char VAR11[100];
            memset(VAR11, '', 100-1); 
            VAR11[100-1] = ''; 
            VAR10 = strlen(VAR11);
            strncat(VAR7, VAR11, VAR10);
            FUN2(VAR7);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}