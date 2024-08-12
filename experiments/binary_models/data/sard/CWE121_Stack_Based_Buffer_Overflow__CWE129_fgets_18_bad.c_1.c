#VAR1 ""
#define FUN1 (3 * sizeof(VAR2) + 2)
void FUN2()
{
    int VAR2;
    VAR2 = -1;
    goto VAR3;
VAR3:
    {
        char VAR4[VAR5] = "";
        if (fgets(VAR4, VAR5, stdin) != NULL)
        {
            VAR2 = FUN3(VAR4);
        }
        else
        {
        }
    }
    goto VAR6;
VAR6:
    {
        int VAR7;
        int VAR8[10] = { 0 };
        if (VAR2 >= 0)
        {
            VAR8[VAR2] = 1;
            for(VAR7 = 0; VAR7 < 10; VAR7++)
            {
                FUN4(VAR8[VAR7]);
            }
        }
        else
        {
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN2();
    return 0;
}