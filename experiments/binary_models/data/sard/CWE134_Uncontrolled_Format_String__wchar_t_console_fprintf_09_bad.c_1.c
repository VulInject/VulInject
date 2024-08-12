#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    wchar_t * VAR4;
    wchar_t VAR5[100] = VAR6"";
    VAR4 = VAR5;
    if(VAR7)
    {
        {
            size_t VAR8 = wcslen(VAR4);
            if (100-VAR8 > 1)
            {
                if (FUN2(VAR4+VAR8, (int)(100-VAR8), stdin) != NULL)
                {
                    VAR8 = wcslen(VAR4);
                    if (VAR8 > 0 && VAR4[VAR8-1] == VAR6'')
                    {
                        VAR4[VAR8-1] = VAR6'';
                    }
                }
                else
                {
                    VAR4[VAR8] = VAR6'';
                }
            }
        }
    }
    if(VAR7)
    {
        fwprintf(VAR9, VAR4);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}