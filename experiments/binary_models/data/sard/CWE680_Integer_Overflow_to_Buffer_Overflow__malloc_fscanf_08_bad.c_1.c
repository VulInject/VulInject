#VAR1 ""
int FUN1()
{
    return 1;
}
int FUN2()
{
    return 0;
}
void FUN3()
{
    int VAR2;
    VAR2 = -1;
    if(FUN1())
    {
        fscanf(stdin, "", &VAR2);
    }
    {
        size_t VAR3;
        int *VAR4;
        VAR4 = (int*)malloc(VAR2 * sizeof(int));
        if (VAR4 == NULL) {FUN4(-1);}
        for (VAR3 = 0; VAR3 < (VAR5)VAR2; VAR3++)
        {
            VAR4[VAR3] = 0; 
        }
        FUN5(VAR4[0]);
        free(VAR4);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN3();
    return 0;
}