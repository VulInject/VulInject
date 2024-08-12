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
    if (VAR2 < 100)
    {
        char * VAR7 = (char *)malloc(VAR2);
        if (VAR7 == NULL) {FUN4(-1);}
        memset(VAR7, '', VAR2-1);
        VAR7[VAR2-1] = '';
        FUN5(VAR7);
        free(VAR7);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN2();
    return 0;
}