#VAR1 <VAR2.VAR3>
#VAR1 ""
#VAR1 <VAR4.VAR3>
#define VAR5 ""
#define VAR5 ""
int VAR6 = 1; 
int VAR7 = 0; 
void FUN1(wchar_t * VAR8, ...)
{
    {
        wchar_t VAR9[100] = VAR10"";
        va_list VAR11;
        FUN2(VAR11, VAR8);
        _vsnwprintf(VAR9, 100-1, VAR8, VAR11);
        FUN3(VAR11);
        FUN4(VAR9);
    }
}
void FUN5()
{
    wchar_t * VAR8;
    wchar_t VAR12[100] = VAR10"";
    VAR8 = VAR12;
    if(VAR6)
    {
        {
            size_t VAR13 = wcslen(VAR8);
            VAR14 * VAR15;
            if (100-VAR13 > 1)
            {
                VAR15 = fopen(VAR5, "");
                if (VAR15 != NULL)
                {
                    if (FUN6(VAR8+VAR13, (int)(100-VAR13), VAR15) == NULL)
                    {
                        VAR8[VAR13] = VAR10'';
                    }
                    fclose(VAR15);
                }
            }
        }
    }
    if(VAR6)
    {
        FUN1(VAR8, VAR8);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN7(NULL) );
    FUN5();
    return 0;
}