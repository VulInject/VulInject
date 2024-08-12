#VAR1 ""
#define FUN1 (3 * sizeof(VAR2) + 2)
int VAR3 = 5;
void FUN2()
{
    int VAR2;
    VAR2 = -1;
    if(VAR3==5)
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
    {
        char VAR6[100];
        char VAR7[100] = "";
        memset(VAR6, '', 100-1);
        VAR6[100-1] = '';
        if (VAR2 < 100)
        {
            memmove(VAR7, VAR6, VAR2);
            VAR7[VAR2] = ''; 
        }
        FUN4(VAR7);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN2();
    return 0;
}