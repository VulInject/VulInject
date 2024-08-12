#VAR1 ""
void FUN1(int VAR2)
{
    {
        size_t VAR3;
        int *VAR4;
        VAR4 = (int*)malloc(VAR2 * sizeof(int));
        if (VAR4 == NULL) {FUN2(-1);}
        for (VAR3 = 0; VAR3 < (VAR5)VAR2; VAR3++)
        {
            VAR4[VAR3] = 0; 
        }
        FUN3(VAR4[0]);
        free(VAR4);
    }
}
void FUN4()
{
    int VAR2;
    VAR2 = -1;
    fscanf(stdin, "", &VAR2);
    FUN1(VAR2);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN4();
    return 0;
}