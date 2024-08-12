#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1(wchar_t * VAR4)
{
    fwprintf(VAR5, VAR4);
}
void FUN2()
{
    wchar_t * VAR4;
    wchar_t VAR6[100] = VAR7"";
    VAR4 = VAR6;
    {
        size_t VAR8 = wcslen(VAR4);
        if (100-VAR8 > 1)
        {
            if (FUN3(VAR4+VAR8, (int)(100-VAR8), stdin) != NULL)
            {
                VAR8 = wcslen(VAR4);
                if (VAR8 > 0 && VAR4[VAR8-1] == VAR7'')
                {
                    VAR4[VAR8-1] = VAR7'';
                }
            }
            else
            {
                VAR4[VAR8] = VAR7'';
            }
        }
    }
    FUN1(VAR4);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN2();
    return 0;
}