#VAR1 ""
void FUN1()
{
    int VAR2;
    int *VAR3 = &VAR2;
    int *VAR4 = &VAR2;
    VAR2 = -1;
    {
        int VAR2 = *VAR3;
        VAR2 = FUN2();
        *VAR3 = VAR2;
    }
    {
        int VAR2 = *VAR4;
        {
            int VAR5;
            int * VAR6 = (int *)malloc(10 * sizeof(int));
            if (VAR6 == NULL) {FUN3(-1);}
            for (VAR5 = 0; VAR5 < 10; VAR5++)
            {
                VAR6[VAR5] = 0;
            }
            if (VAR2 >= 0)
            {
                VAR6[VAR2] = 1;
                for(VAR5 = 0; VAR5 < 10; VAR5++)
                {
                    FUN4(VAR6[VAR5]);
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
    srand( (unsigned)FUN5(NULL) );
    FUN1();
    return 0;
}