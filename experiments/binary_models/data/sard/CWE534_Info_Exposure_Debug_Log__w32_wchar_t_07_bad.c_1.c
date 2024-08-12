#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
#VAR5 FUN1(VAR6, "")
int VAR7 = 5;
void FUN2()
{
    if(VAR7==5)
    {
        {
            wchar_t VAR8[100] = VAR9"";
            size_t VAR10 = 0;
            HANDLE VAR11;
            wchar_t * VAR12 = VAR9"";
            wchar_t * VAR13 = VAR9"";
            VAR14 * VAR15 = fopen("", "");
            if (FUN3(VAR8, 100, stdin) == NULL)
            {
                VAR8[0] = VAR9'';
            }
            VAR10 = wcslen(VAR8);
            if (VAR10 > 0)
            {
                VAR8[VAR10-1] = VAR9'';
            }
            if (FUN4(
                        VAR12,
                        VAR13,
                        VAR8,
                        VAR16,
                        VAR17,
                        &VAR11) != 0)
            {
                FUN5(VAR11);
            }
            else
            {
            }
            fwprintf(VAR15, VAR9"", VAR8);
            if (VAR15)
            {
                fclose(VAR15);
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN2();
    return 0;
}