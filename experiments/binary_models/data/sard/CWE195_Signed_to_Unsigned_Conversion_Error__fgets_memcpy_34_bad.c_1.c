#VAR1 ""
#define FUN1 (3 * sizeof(VAR2) + 2)
typedef union
{
    int VAR3;
    int VAR4;
} VAR5;
void FUN2()
{
    int VAR2;
    CWE195_Signed_to_Unsigned_Conversion_Error__fgets_memcpy_34_unionType VAR6;
    VAR2 = -1;
    {
        char VAR7[VAR8] = "";
        if (fgets(VAR7, VAR8, stdin) != NULL)
        {
            VAR2 = FUN3(VAR7);
        }
        else
        {
        }
    }
    VAR6.VAR3 = VAR2;
    {
        int VAR2 = VAR6.VAR4;
        {
            char VAR9[100];
            char VAR10[100] = "";
            memset(VAR9, '', 100-1);
            VAR9[100-1] = '';
            if (VAR2 < 100)
            {
                memcpy(VAR10, VAR9, VAR2);
                VAR10[VAR2] = ''; 
            }
            FUN4(VAR10);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN2();
    return 0;
}