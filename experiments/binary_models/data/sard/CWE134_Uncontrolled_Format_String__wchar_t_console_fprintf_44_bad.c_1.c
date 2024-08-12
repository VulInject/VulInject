#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1(wchar_t * VAR4)
{
    fwprintf(VAR5, VAR4);
}
void FUN2()
{
    wchar_t * VAR4;
    void (*VAR6) (wchar_t *) = VAR7;
    wchar_t VAR8[100] = VAR9"";
    VAR4 = VAR8;
    {
        size_t VAR10 = wcslen(VAR4);
        if (100-VAR10 > 1)
        {
            if (FUN3(VAR4+VAR10, (int)(100-VAR10), stdin) != NULL)
            {
                VAR10 = wcslen(VAR4);
                if (VAR10 > 0 && VAR4[VAR10-1] == VAR9'')
                {
                    VAR4[VAR10-1] = VAR9'';
                }
            }
            else
            {
                VAR4[VAR10] = VAR9'';
            }
        }
    }
    FUN4(VAR4);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN2();
    return 0;
}