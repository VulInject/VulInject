#VAR1 ""
#define FUN1 (3 * sizeof(VAR2) + 2)
void FUN2(int VAR2)
{
    FUN3(100 % VAR2);
}
void FUN4()
{
    int VAR2;
    void (*VAR3) (int) = VAR4;
    VAR2 = -1;
    {
        char VAR5[VAR6] = "";
        if (fgets(VAR5, VAR6, stdin) != NULL)
        {
            VAR2 = FUN5(VAR5);
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