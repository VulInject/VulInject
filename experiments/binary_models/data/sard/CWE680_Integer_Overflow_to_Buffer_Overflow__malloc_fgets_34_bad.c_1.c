#VAR1 ""
#define FUN1 (3 * sizeof(VAR2) + 2)
typedef union
{
    int VAR3;
    int VAR4;
} VAR5;
void FUN2()
{
    int VAR2;
    CWE680_Integer_Overflow_to_Buffer_Overflow__malloc_fgets_34_unionType VAR6;
    VAR2 = -1;
    {
        char VAR7[VAR8] = "";
        if (fgets(VAR7, VAR8, stdin) != NULL)
        {
            VAR2 = FUN3(VAR7);
        }
        else
        {
        }
    }
    VAR6.VAR3 = VAR2;
    {
        int VAR2 = VAR6.VAR4;
        {
            size_t VAR9;
            int *VAR10;
            VAR10 = (int*)malloc(VAR2 * sizeof(int));
            if (VAR10 == NULL) {FUN4(-1);}
            for (VAR9 = 0; VAR9 < (VAR11)VAR2; VAR9++)
            {
                VAR10[VAR9] = 0; 
            }
            FUN5(VAR10[0]);
            free(VAR10);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN2();
    return 0;
}