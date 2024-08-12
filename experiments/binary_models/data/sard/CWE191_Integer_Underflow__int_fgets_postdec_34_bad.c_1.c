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
    CWE191_Integer_Underflow__int_fgets_postdec_34_unionType VAR6;
    VAR2 = 0;
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
            VAR2--;
            int VAR9 = VAR2;
            FUN4(VAR9);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN2();
    return 0;
}