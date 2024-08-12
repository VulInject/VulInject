#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
#VAR5 FUN1(VAR6, "")
void FUN2()
{
    if(FUN3())
    {
        {
            wchar_t VAR7[100] = VAR8"";
            size_t VAR9 = 0;
            HANDLE VAR10;
            wchar_t * VAR11 = VAR8"";
            wchar_t * VAR12 = VAR8"";
            if (FUN4(VAR7, 100, stdin) == NULL)
            {
                VAR7[0] = VAR8'';
            }
            VAR9 = wcslen(VAR7);
            if (VAR9 > 0)
            {
                VAR7[VAR9-1] = VAR8'';
            }
            if (FUN5(
                        VAR11,
                        VAR12,
                        VAR7,
                        VAR13,
                        VAR14,
                        &VAR10) != 0)
            {
                FUN6(VAR10);
            }
            else
            {
            }
        }
    }
    else
    {
        {
            wchar_t VAR7[100] = VAR8"";
            size_t VAR9 = 0;
            HANDLE VAR10;
            wchar_t * VAR11 = VAR8"";
            wchar_t * VAR12 = VAR8"";
            if (FUN4(VAR7, 100, stdin) == NULL)
            {
                VAR7[0] = VAR8'';
            }
            VAR9 = wcslen(VAR7);
            if (VAR9 > 0)
            {
                VAR7[VAR9-1] = VAR8'';
            }
            if (FUN5(
                        VAR11,
                        VAR12,
                        VAR7,
                        VAR13,
                        VAR14,
                        &VAR10) != 0)
            {
                FUN6(VAR10);
            }
            else
            {
            }
            VAR9 = wcslen(VAR7);
            FUN7(VAR7, VAR9 * sizeof(wchar_t));
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN8(NULL) );
    FUN2();
    return 0;
}