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
    CWE121_Stack_Based_Buffer_Overflow__CWE129_fgets_34_unionType VAR6;
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
            int VAR9;
            int VAR10[10] = { 0 };
            if (VAR2 >= 0)
            {
                VAR10[VAR2] = 1;
                for(VAR9 = 0; VAR9 < 10; VAR9++)
                {
                    FUN4(VAR10[VAR9]);
                }
            }
            else
            {
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN2();
    return 0;
}