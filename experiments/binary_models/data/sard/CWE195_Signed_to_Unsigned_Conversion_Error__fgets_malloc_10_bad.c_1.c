#VAR1 ""
#define FUN1 (3 * sizeof(VAR2) + 2)
void FUN2()
{
    int VAR2;
    VAR2 = -1;
    if(VAR3)
    {
        {
            char VAR4[VAR5] = "";
            if (fgets(VAR4, VAR5, stdin) != NULL)
            {
                VAR2 = FUN3(VAR4);
            }
            else
            {
            }
        }
    }
    if (VAR2 < 100)
    {
        char * VAR6 = (char *)malloc(VAR2);
        if (VAR6 == NULL) {FUN4(-1);}
        memset(VAR6, '', VAR2-1);
        VAR6[VAR2-1] = '';
        FUN5(VAR6);
        free(VAR6);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN2();
    return 0;
}