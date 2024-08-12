#VAR1 ""
#define FUN1 (3 * sizeof(VAR2) + 2)
void FUN2()
{
    int VAR2;
    VAR2 = -1;
    if(FUN3())
    {
        {
            char VAR3[VAR4] = "";
            if (fgets(VAR3, VAR4, stdin) != NULL)
            {
                VAR2 = FUN4(VAR3);
            }
            else
            {
            }
        }
    }
    if(FUN3())
    {
        {
            int VAR5;
            int * VAR6 = (int *)malloc(10 * sizeof(int));
            if (VAR6 == NULL) {FUN5(-1);}
            for (VAR5 = 0; VAR5 < 10; VAR5++)
            {
                VAR6[VAR5] = 0;
            }
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
            free(VAR6);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN7(NULL) );
    FUN2();
    return 0;
}