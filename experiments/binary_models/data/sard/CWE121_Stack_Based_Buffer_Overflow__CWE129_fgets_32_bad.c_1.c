#VAR1 ""
#define FUN1 (3 * sizeof(VAR2) + 2)
void FUN2()
{
    int VAR2;
    int *VAR3 = &VAR2;
    int *VAR4 = &VAR2;
    VAR2 = -1;
    {
        int VAR2 = *VAR3;
        {
            char VAR5[VAR6] = "";
            if (fgets(VAR5, VAR6, stdin) != NULL)
            {
                VAR2 = FUN3(VAR5);
            }
            else
            {
            }
        }
        *VAR3 = VAR2;
    }
    {
        int VAR2 = *VAR4;
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
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN2();
    return 0;
}