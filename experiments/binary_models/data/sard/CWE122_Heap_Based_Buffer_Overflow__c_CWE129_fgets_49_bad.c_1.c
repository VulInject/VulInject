#VAR1 ""
#define FUN1 (3 * sizeof(VAR2) + 2)
void FUN2()
{
    int VAR2;
    VAR2 = -1;
    if(VAR3==5)
    {
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
    }
    if(VAR3==5)
    {
        {
            int VAR6;
            int * VAR7 = (int *)malloc(10 * sizeof(int));
            if (VAR7 == NULL) {FUN4(-1);}
            for (VAR6 = 0; VAR6 < 10; VAR6++)
            {
                VAR7[VAR6] = 0;
            }
            if (VAR2 >= 0)
            {
                VAR7[VAR2] = 1;
                for(VAR6 = 0; VAR6 < 10; VAR6++)
                {
                    FUN5(VAR7[VAR6]);
                }
            }
            else
            {
            }
            free(VAR7);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN2();
    return 0;
}