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
    else
    {
        VAR2 = 100-1;
    }
    {
        char VAR5[100];
        char VAR6[100] = "";
        memset(VAR5, '', 100-1);
        VAR5[100-1] = '';
        if (VAR2 < 100)
        {
            strncpy(VAR6, VAR5, VAR2);
            VAR6[VAR2] = ''; 
        }
        FUN5(VAR6);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN2();
    return 0;
}