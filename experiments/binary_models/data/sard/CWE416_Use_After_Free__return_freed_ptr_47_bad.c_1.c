#VAR1 ""
char * FUN1(char * VAR2)
{
    size_t VAR3 = 0;
    size_t VAR4;
    char * VAR5 = NULL;
    if (VAR2 != NULL)
    {
        VAR3 = strlen(VAR2);
        VAR5 = (char *) malloc(VAR3+1);
        if (VAR5 == NULL) {FUN2(-1);}
        for (VAR4 = 0; VAR4 < VAR3; VAR4++)
        {
            VAR5[VAR4] = VAR2[VAR3-VAR4-1];
        }
        VAR5[VAR3] = '';
        free(VAR5);
        return VAR5;
    }
    else
    {
        return NULL;
    }
}
char * FUN3(char * VAR2)
{
    size_t VAR3 = 0;
    size_t VAR4;
    char * VAR5 = NULL;
    if (VAR2 != NULL)
    {
        VAR3 = strlen(VAR2);
        VAR5 = (char *) malloc(VAR3+1);
        if (VAR5 == NULL) {FUN2(-1);}
        for (VAR4 = 0; VAR4 < VAR3; VAR4++)
        {
            VAR5[VAR4] = VAR2[VAR3-VAR4-1];
        }
        VAR5[VAR3] = '';
        return VAR5;
    }
    else
    {
        return NULL;
    }
}
void FUN4()
{
    if(FUN5())
    {
        {
            char * VAR5 = FUN1("");
            FUN6(VAR5);
        }
    }
    else
    {
        {
            char * VAR5 = FUN3("");
            FUN6(VAR5);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN7(NULL) );
    FUN4();
    return 0;
}