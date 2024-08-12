#VAR1 ""
#define FUN1 (3 * sizeof(VAR2) + 2)
static const int VAR3 = 1; 
static const int VAR4 = 0; 
void FUN2()
{
    int VAR2;
    VAR2 = -1;
    if(VAR3)
    {
        {
            char VAR5[VAR6] = "";
            if (fgets(VAR5, VAR6, stdin) != NULL)
            {
                VAR2 = FUN3(VAR5);
            }
            else
            {
            }
        }
    }
    {
        size_t VAR7;
        int *VAR8;
        VAR8 = (int*)malloc(VAR2 * sizeof(int));
        if (VAR8 == NULL) {FUN4(-1);}
        for (VAR7 = 0; VAR7 < (VAR9)VAR2; VAR7++)
        {
            VAR8[VAR7] = 0; 
        }
        FUN5(VAR8[0]);
        free(VAR8);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN2();
    return 0;
}