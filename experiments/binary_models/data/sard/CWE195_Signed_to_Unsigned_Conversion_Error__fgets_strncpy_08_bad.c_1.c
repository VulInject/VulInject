#VAR1 ""
#define FUN1 (3 * sizeof(VAR2) + 2)
int FUN2()
{
    return 1;
}
int FUN3()
{
    return 0;
}
void FUN4()
{
    int VAR2;
    VAR2 = -1;
    if(FUN2())
    {
        {
            char VAR3[VAR4] = "";
            if (fgets(VAR3, VAR4, stdin) != NULL)
            {
                VAR2 = FUN5(VAR3);
            }
            else
            {
            }
        }
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
        FUN6(VAR6);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN7(NULL) );
    FUN4();
    return 0;
}