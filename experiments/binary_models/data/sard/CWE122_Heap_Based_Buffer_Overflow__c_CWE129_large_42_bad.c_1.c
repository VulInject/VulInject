#VAR1 ""
int FUN1(int VAR2)
{
    VAR2 = 10;
    return VAR2;
}
void FUN2()
{
    int VAR2;
    VAR2 = -1;
    VAR2 = FUN1(VAR2);
    {
        int VAR3;
        int * VAR4 = (int *)malloc(10 * sizeof(int));
        if (VAR4 == NULL) {FUN3(-1);}
        for (VAR3 = 0; VAR3 < 10; VAR3++)
        {
            VAR4[VAR3] = 0;
        }
        if (VAR2 >= 0)
        {
            VAR4[VAR2] = 1;
            for(VAR3 = 0; VAR3 < 10; VAR3++)
            {
                FUN4(VAR4[VAR3]);
            }
        }
        else
        {
        }
        free(VAR4);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN2();
    return 0;
}