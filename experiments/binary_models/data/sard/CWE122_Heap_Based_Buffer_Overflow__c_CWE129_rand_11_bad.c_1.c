#VAR1 ""
void FUN1()
{
    int VAR2;
    VAR2 = -1;
    if(FUN2())
    {
        VAR2 = FUN3();
    }
    if(FUN2())
    {
        {
            int VAR3;
            int * VAR4 = (int *)malloc(10 * sizeof(int));
            if (VAR4 == NULL) {FUN4(-1);}
            for (VAR3 = 0; VAR3 < 10; VAR3++)
            {
                VAR4[VAR3] = 0;
            }
            if (VAR2 >= 0)
            {
                VAR4[VAR2] = 1;
                for(VAR3 = 0; VAR3 < 10; VAR3++)
                {
                    FUN5(VAR4[VAR3]);
                }
            }
            else
            {
            }
            free(VAR4);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN1();
    return 0;
}