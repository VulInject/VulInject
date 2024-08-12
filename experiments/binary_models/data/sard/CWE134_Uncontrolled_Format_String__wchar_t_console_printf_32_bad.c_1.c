#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    wchar_t * VAR4;
    wchar_t * *VAR5 = &VAR4;
    wchar_t * *VAR6 = &VAR4;
    wchar_t VAR7[100] = VAR8"";
    VAR4 = VAR7;
    {
        wchar_t * VAR4 = *VAR5;
        {
            size_t VAR9 = wcslen(VAR4);
            if (100-VAR9 > 1)
            {
                if (FUN2(VAR4+VAR9, (int)(100-VAR9), stdin) != NULL)
                {
                    VAR9 = wcslen(VAR4);
                    if (VAR9 > 0 && VAR4[VAR9-1] == VAR8'')
                    {
                        VAR4[VAR9-1] = VAR8'';
                    }
                }
                else
                {
                    VAR4[VAR9] = VAR8'';
                }
            }
        }
        *VAR5 = VAR4;
    }
    {
        wchar_t * VAR4 = *VAR6;
        FUN3(VAR4);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}