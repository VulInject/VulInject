#VAR1 ""
void FUN1()
{
    int VAR2;
    VAR2 = -1;
    fscanf(stdin, "", &VAR2);
    {
        int VAR3 = VAR2;
        int VAR2 = VAR3;
        {
            int VAR4;
            int * VAR5 = (int *)malloc(10 * sizeof(int));
            if (VAR5 == NULL) {FUN2(-1);}
            for (VAR4 = 0; VAR4 < 10; VAR4++)
            {
                VAR5[VAR4] = 0;
            }
            if (VAR2 >= 0)
            {
                VAR5[VAR2] = 1;
                for(VAR4 = 0; VAR4 < 10; VAR4++)
                {
                    FUN3(VAR5[VAR4]);
                }
            }
            else
            {
            }
            free(VAR5);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}