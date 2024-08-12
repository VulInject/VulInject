#VAR1 ""
#define FUN1 (3 * sizeof(VAR2) + 2)
void FUN2()
{
    int VAR2;
    VAR2 = -1;
    goto VAR3;
VAR3:
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
    {
        char VAR3[100];
        char VAR6[100] = "";
        memset(VAR3, '', 100-1);
        VAR3[100-1] = '';
        if (VAR2 < 100)
        {
            memcpy(VAR6, VAR3, VAR2);
            VAR6[VAR2] = ''; 
        }
        FUN4(VAR6);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN2();
    return 0;
}