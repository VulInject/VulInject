#VAR1 ""
#define CHAR_ARRAY_SIZE 8
typedef union
{
    short VAR2;
    short VAR3;
} VAR4;
void FUN1()
{
    short VAR5;
    CWE194_Unexpected_Sign_Extension__fgets_memcpy_34_unionType VAR6;
    VAR5 = 0;
    {
        char VAR7[VAR8] = "";
        if (fgets(VAR7, VAR8, stdin) != NULL)
        {
            VAR5 = (short)FUN2(VAR7);
        }
        else
        {
        }
    }
    VAR6.VAR2 = VAR5;
    {
        short VAR5 = VAR6.VAR3;
        {
            char VAR9[100];
            char VAR10[100] = "";
            memset(VAR9, '', 100-1);
            VAR9[100-1] = '';
            if (VAR5 < 100)
            {
                memcpy(VAR10, VAR9, VAR5);
                VAR10[VAR5] = ''; 
            }
            FUN3(VAR10);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}