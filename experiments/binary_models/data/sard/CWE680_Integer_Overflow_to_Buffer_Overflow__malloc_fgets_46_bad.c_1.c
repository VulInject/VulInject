#VAR1 ""
#define FUN1 (3 * sizeof(VAR2) + 2)
void FUN2()
{
    int VAR2;
    VAR2 = -1;
    if(FUN3())
    {
        {
            char VAR3[VAR4] = "";
            if (fgets(VAR3, VAR4, stdin) != NULL)
            {
                VAR2 = FUN4(VAR3);
            }
            else
            {
            }
        }
    }
    {
        size_t VAR5;
        int *VAR6;
        VAR6 = (int*)malloc(VAR2 * sizeof(int));
        if (VAR6 == NULL) {FUN5(-1);}
        for (VAR5 = 0; VAR5 < (VAR7)VAR2; VAR5++)
        {
            VAR6[VAR5] = 0; 
        }
        FUN6(VAR6[0]);
        free(VAR6);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN7(NULL) );
    FUN2();
    return 0;
}