#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
#define PUTENV VAR5
#define VAR4 ""
#define PUTENV VAR6
static const int VAR7 = 1; 
static const int VAR8 = 0; 
void FUN1()
{
    char * VAR9;
    char VAR10[250] = "";
    VAR9 = VAR10;
    if(VAR7)
    {
        {
            size_t VAR11 = strlen(VAR9);
            if (250-VAR11 > 1)
            {
                if (fgets(VAR9+VAR11, (int)(250-VAR11), stdin) != NULL)
                {
                    VAR11 = strlen(VAR9);
                    if (VAR11 > 0 && VAR9[VAR11-1] == '')
                    {
                        VAR9[VAR11-1] = '';
                    }
                }
                else
                {
                    VAR9[VAR11] = '';
                }
            }
        }
    }
    FUN2(VAR9);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}