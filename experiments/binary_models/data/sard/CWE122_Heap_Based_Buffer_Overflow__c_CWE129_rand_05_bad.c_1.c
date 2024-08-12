#VAR1 ""
int VAR2 = 1; 
int VAR3 = 0; 
void FUN1()
{
    int VAR4;
    VAR4 = -1;
    if(VAR2)
    {
        VAR4 = FUN2();
    }
    if(VAR2)
    {
        {
            int VAR5;
            int * VAR6 = (int *)malloc(10 * sizeof(int));
            if (VAR6 == NULL) {FUN3(-1);}
            for (VAR5 = 0; VAR5 < 10; VAR5++)
            {
                VAR6[VAR5] = 0;
            }
            if (VAR4 >= 0)
            {
                VAR6[VAR4] = 1;
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