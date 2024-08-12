#VAR1 ""
#define FUN1 (3 * sizeof(VAR2) + 2)
#VAR1 <VAR3.VAR4>
#define SLEEP VAR5
#VAR1 <VAR6.VAR4>
#define SLEEP VAR7
void FUN2(int VAR2)
{
    FUN3(VAR2);
}
void FUN4()
{
    int VAR2;
    void (*VAR8) (int) = VAR9;
    VAR2 = -1;
    {
        char VAR10[VAR11] = "";
        if (fgets(VAR10, VAR11, stdin) != NULL)
        {
            VAR2 = FUN5(VAR10);
        }
        else
        {
        }
    }
    FUN6(VAR2);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN7(NULL) );
    FUN4();
    return 0;
}