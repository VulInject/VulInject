#VAR1 ""
#define FUN1 (3 * sizeof(VAR2) + 2)
int FUN2()
{
    return 1;
}
int FUN3()
{
    return 0;
}
void FUN4()
{
    int VAR2;
    VAR2 = -1;
    if(FUN2())
    {
        {
            char VAR3[VAR4] = "";
            if (fgets(VAR3, VAR4, stdin) != NULL)
            {
                VAR2 = FUN5(VAR3);
            }
            else
            {
            }
        }
    }
    if(FUN2())
    {
        {
            int VAR5;
            int VAR6[10] = { 0 };
            if (VAR2 >= 0)
            {
                VAR6[VAR2] = 1;
                for(VAR5 = 0; VAR5 < 10; VAR5++)
                {
                    FUN6(VAR6[VAR5]);
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
    srand( (unsigned)FUN7(NULL) );
    FUN4();
    return 0;
}