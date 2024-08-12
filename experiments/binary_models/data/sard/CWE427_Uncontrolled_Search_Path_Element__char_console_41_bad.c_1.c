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
    char VAR8[250] = "";
    VAR7 = VAR8;
    {
        size_t VAR9 = strlen(VAR7);
        if (250-VAR9 > 1)
        {
            if (fgets(VAR7+VAR9, (int)(250-VAR9), stdin) != NULL)
            {
                VAR9 = strlen(VAR7);
                if (VAR9 > 0 && VAR7[VAR9-1] == '')
                {
                    VAR7[VAR9-1] = '';
                }
            }
            else
            {
                VAR7[VAR9] = '';
            }
        }
    }
    FUN1(VAR7);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN3();
    return 0;
}