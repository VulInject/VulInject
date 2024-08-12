#VAR1 ""
#VAR1 <VAR2.VAR3>
#define NEW_PATH VAR4""
#define PUTENV VAR5
#define NEW_PATH VAR4""
#define PUTENV VAR6
void FUN1()
{
    wchar_t * VAR7;
    wchar_t VAR8[250] = VAR4"";
    VAR7 = VAR8;
    if(VAR9)
    {
        {
            size_t VAR10 = wcslen(VAR7);
            if (250-VAR10 > 1)
            {
                if (FUN2(VAR7+VAR10, (int)(250-VAR10), stdin) != NULL)
                {
                    VAR10 = wcslen(VAR7);
                    if (VAR10 > 0 && VAR7[VAR10-1] == VAR4'')
                    {
                        VAR7[VAR10-1] = VAR4'';
                    }
                }
                else
                {
                    VAR7[VAR10] = VAR4'';
                }
            }
        }
    }
    FUN3(VAR7);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}