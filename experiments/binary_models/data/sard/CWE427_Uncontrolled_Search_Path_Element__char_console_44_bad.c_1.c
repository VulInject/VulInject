#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
#define PUTENV VAR5
#define VAR4 ""
#define PUTENV VAR6
void FUN1(char * VAR7)
{
    FUN2(VAR7);
}
void FUN3()
{
    char * VAR7;
    void (*VAR8) (char *) = VAR9;
    char VAR10[250] = "";
    VAR7 = VAR10;
    {
        size_t VAR11 = strlen(VAR7);
        if (250-VAR11 > 1)
        {
            if (fgets(VAR7+VAR11, (int)(250-VAR11), stdin) != NULL)
            {
                VAR11 = strlen(VAR7);
                if (VAR11 > 0 && VAR7[VAR11-1] == '')
                {
                    VAR7[VAR11-1] = '';
                }
            }
            else
            {
                VAR7[VAR11] = '';
            }
        }
    }
    FUN4(VAR7);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}