#VAR1 ""
#VAR1 <VAR2.VAR3>
#define NEW_PATH VAR4""
#define PUTENV VAR5
#define NEW_PATH VAR4""
#define PUTENV VAR6
static const int VAR7 = 1; 
static const int VAR8 = 0; 
void FUN1()
{
    wchar_t * VAR9;
    wchar_t VAR10[250] = VAR4"";
    VAR9 = VAR10;
    if(VAR7)
    {
        {
            size_t VAR11 = wcslen(VAR9);
            if (250-VAR11 > 1)
            {
                if (FUN2(VAR9+VAR11, (int)(250-VAR11), stdin) != NULL)
                {
                    VAR11 = wcslen(VAR9);
                    if (VAR11 > 0 && VAR9[VAR11-1] == VAR4'')
                    {
                        VAR9[VAR11-1] = VAR4'';
                    }
                }
                else
                {
                    VAR9[VAR11] = VAR4'';
                }
            }
        }
    }
    FUN3(VAR9);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}