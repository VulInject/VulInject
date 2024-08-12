#VAR1 ""
#define FUN1 (3 * sizeof(VAR2) + 2)
void FUN2(int VAR2)
{
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
void FUN5()
{
    int VAR2;
    VAR2 = -1;
    {
        char VAR6[VAR7] = "";
        if (fgets(VAR6, VAR7, stdin) != NULL)
        {
            VAR2 = FUN6(VAR6);
        }
        else
        {
        }
    }
    FUN2(VAR2);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN7(NULL) );
    FUN5();
    return 0;
}