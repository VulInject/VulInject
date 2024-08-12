#VAR1 ""
#define FUN1 (3 * sizeof(VAR2) + 2)
#VAR1 <VAR3.VAR4>
#define SLEEP VAR5
#VAR1 <VAR6.VAR4>
#define SLEEP VAR7
int FUN2(int VAR2)
{
    {
        char VAR8[VAR9] = "";
        if (fgets(VAR8, VAR9, stdin) != NULL)
        {
            VAR2 = FUN3(VAR8);
        }
        else
        {
        }
    }
    return VAR2;
}
void FUN4()
{
    int VAR2;
    VAR2 = -1;
    VAR2 = FUN2(VAR2);
    FUN5(VAR2);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN4();
    return 0;
}