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
        char VAR7[100];
        char VAR8[100] = "";
        memset(VAR7, '', 100-1);
        VAR7[100-1] = '';
        if (VAR2 < 100)
        {
            memcpy(VAR8, VAR7, VAR2);
            VAR8[VAR2] = ''; 
        }
        FUN4(VAR8);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN2();
    return 0;
}