#VAR1 ""
void FUN1(int VAR2)
{
    {
        int VAR3;
        int * VAR4 = (int *)malloc(10 * sizeof(int));
        if (VAR4 == NULL) {FUN2(-1);}
        for (VAR3 = 0; VAR3 < 10; VAR3++)
        {
            VAR4[VAR3] = 0;
        }
        if (VAR2 >= 0)
        {
            VAR4[VAR2] = 1;
            for(VAR3 = 0; VAR3 < 10; VAR3++)
            {
                FUN3(VAR4[VAR3]);
            }
        }
        else
        {
        }
        free(VAR4);
    }
}
void FUN4()
{
    int VAR2;
    void (*VAR5) (int) = VAR6;
    VAR2 = -1;
    fscanf(stdin, "", &VAR2);
    FUN5(VAR2);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN4();
    return 0;
}