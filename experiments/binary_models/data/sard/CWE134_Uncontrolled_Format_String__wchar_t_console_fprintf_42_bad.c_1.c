#VAR1 ""
#VAR1 <VAR2.VAR3>
wchar_t * FUN1(wchar_t * VAR4)
{
    {
        size_t VAR5 = wcslen(VAR4);
        if (100-VAR5 > 1)
        {
            if (FUN2(VAR4+VAR5, (int)(100-VAR5), stdin) != NULL)
            {
                VAR5 = wcslen(VAR4);
                if (VAR5 > 0 && VAR4[VAR5-1] == VAR6'')
                {
                    VAR4[VAR5-1] = VAR6'';
                }
            }
            else
            {
                VAR4[VAR5] = VAR6'';
            }
        }
    }
    return VAR4;
}
void FUN3()
{
    wchar_t * VAR4;
    wchar_t VAR7[100] = VAR6"";
    VAR4 = VAR7;
    VAR4 = FUN1(VAR4);
    fwprintf(VAR8, VAR4);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN3();
    return 0;
}