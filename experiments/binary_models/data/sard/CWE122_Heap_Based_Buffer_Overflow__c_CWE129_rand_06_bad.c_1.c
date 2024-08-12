#VAR1 ""
static const int VAR2 = 5;
void FUN1()
{
    int VAR3;
    VAR3 = -1;
    if(VAR2==5)
    {
        VAR3 = FUN2();
    }
    if(VAR2==5)
    {
        {
            int VAR4;
            int * VAR5 = (int *)malloc(10 * sizeof(int));
            if (VAR5 == NULL) {FUN3(-1);}
            for (VAR4 = 0; VAR4 < 10; VAR4++)
            {
                VAR5[VAR4] = 0;
            }
            if (VAR3 >= 0)
            {
                VAR5[VAR3] = 1;
                for(VAR4 = 0; VAR4 < 10; VAR4++)
                {
                    FUN4(VAR5[VAR4]);
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
    srand( (unsigned)FUN5(NULL) );
    FUN1();
    return 0;
}