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
    CWE124_Buffer_Underwrite__malloc_char_memmove_34_unionType VAR8;
    VAR7 = NULL;
    {
        char * VAR9 = (char *)malloc(100*sizeof(char));
        if (VAR9 == NULL) {FUN2(-1);}
        memset(VAR9, '', 100-1);
        VAR9[100-1] = '';
        VAR7 = VAR9 - 8;
    }
    VAR8.VAR4 = VAR7;
    {
        char * VAR7 = VAR8.VAR5;
        {
            char VAR10[100];
            memset(VAR10, '', 100-1); 
            VAR10[100-1] = ''; 
            memmove(VAR7, VAR10, 100*sizeof(char));
            VAR7[100-1] = '';
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