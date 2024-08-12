#VAR1 ""
#define FUN1 (3 * sizeof(VAR2) + 2)
#VAR1 <VAR3.VAR4>
#define SLEEP VAR5
#VAR1 <VAR6.VAR4>
#define SLEEP VAR7
typedef union
{
    int VAR8;
    int VAR9;
} VAR10;
void FUN2()
{
    int VAR2;
    CWE400_Resource_Exhaustion__fgets_sleep_34_unionType VAR11;
    VAR2 = -1;
    {
        char VAR12[VAR13] = "";
        if (fgets(VAR12, VAR13, stdin) != NULL)
        {
            VAR2 = FUN3(VAR12);
        }
        else
        {
        }
    }
    VAR11.VAR8 = VAR2;
    {
        int VAR2 = VAR11.VAR9;
        FUN4(VAR2);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN2();
    return 0;
}