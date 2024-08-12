#VAR1 ""
#VAR1 <VAR2.VAR3>
#define NEW_PATH VAR4""
#define PUTENV VAR5
#define NEW_PATH VAR4""
#define PUTENV VAR6
int FUN1()
{
    return 1;
}
int FUN2()
{
    return 0;
}
void FUN3()
{
    wchar_t * VAR7;
    wchar_t VAR8[250] = VAR4"";
    VAR7 = VAR8;
    if(FUN1())
    {
        {
            size_t VAR9 = wcslen(VAR7);
            if (250-VAR9 > 1)
            {
                if (FUN4(VAR7+VAR9, (int)(250-VAR9), stdin) != NULL)
                {
                    VAR9 = wcslen(VAR7);
                    if (VAR9 > 0 && VAR7[VAR9-1] == VAR4'')
                    {
                        VAR7[VAR9-1] = VAR4'';
                    }
                }
                else
                {
                    VAR7[VAR9] = VAR4'';
                }
            }
        }
    }
    FUN5(VAR7);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN3();
    return 0;
}