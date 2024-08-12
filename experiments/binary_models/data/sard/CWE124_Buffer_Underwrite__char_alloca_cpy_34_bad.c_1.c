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
    CWE124_Buffer_Underwrite__char_alloca_cpy_34_unionType VAR8;
    char * VAR9 = (char *)FUN2(100*sizeof(char));
    memset(VAR9, '', 100-1);
    VAR9[100-1] = '';
    VAR7 = VAR9 - 8;
    VAR8.VAR4 = VAR7;
    {
        char * VAR7 = VAR8.VAR5;
        {
            char VAR10[100];
            memset(VAR10, '', 100-1); 
            VAR10[100-1] = ''; 
            strcpy(VAR7, VAR10);
            FUN3(VAR7);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}