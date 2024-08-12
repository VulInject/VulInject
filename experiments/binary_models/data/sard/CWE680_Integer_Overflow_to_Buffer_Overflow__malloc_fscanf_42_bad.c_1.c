#VAR1 ""
int FUN1(int VAR2)
{
    fscanf(stdin, "", &VAR2);
    return VAR2;
}
void FUN2()
{
    int VAR2;
    VAR2 = -1;
    VAR2 = FUN1(VAR2);
    {
        size_t VAR3;
        int *VAR4;
        VAR4 = (int*)malloc(VAR2 * sizeof(int));
        if (VAR4 == NULL) {FUN3(-1);}
        for (VAR3 = 0; VAR3 < (VAR5)VAR2; VAR3++)
        {
            VAR4[VAR3] = 0; 
        }
        FUN4(VAR4[0]);
        free(VAR4);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN2();
    return 0;
}