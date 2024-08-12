#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
#VAR5 FUN1(VAR6, "")
int FUN2()
{
    return 1;
}
int FUN3()
{
    return 0;
}
void FUN4()
{
    if(FUN2())
    {
        {
            wchar_t VAR7[100] = VAR8"";
            size_t VAR9 = 0;
            HANDLE VAR10;
            wchar_t * VAR11 = VAR8"";
            wchar_t * VAR12 = VAR8"";
            VAR13 * VAR14 = fopen("", "");
            if (FUN5(VAR7, 100, stdin) == NULL)
            {
                VAR7[0] = VAR8'';
            }
            VAR9 = wcslen(VAR7);
            if (VAR9 > 0)
            {
                VAR7[VAR9-1] = VAR8'';
            }
            if (FUN6(
                        VAR11,
                        VAR12,
                        VAR7,
                        VAR15,
                        VAR16,
                        &VAR10) != 0)
            {
                FUN7(VAR10);
            }
            else
            {
            }
            fwprintf(VAR14, VAR8"", VAR7);
            if (VAR14)
            {
                fclose(VAR14);
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN8(NULL) );
    FUN4();
    return 0;
}