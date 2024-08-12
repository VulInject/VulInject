#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
#VAR1 <VAR5.VAR3>
#VAR6 FUN1(VAR7, "")
#VAR6 FUN1(VAR7, "")
#define VAR8 "" 
void FUN2(wchar_t * VAR9)
{
    {
        HANDLE VAR10;
        wchar_t * VAR11 = VAR12"";
        wchar_t * VAR13 = VAR12"";
        if (FUN3(
                    VAR11,
                    VAR13,
                    VAR9,
                    VAR14,
                    VAR15,
                    &VAR10) != 0)
        {
            FUN4(VAR10);
        }
        else
        {
        }
    }
}
void FUN5()
{
    wchar_t * VAR9;
    wchar_t VAR16[100] = VAR12"";
    VAR9 = VAR16;
    {
        VAR17 *VAR18;
        VAR18 = fopen("", "");
        if (VAR18 != NULL)
        {
            if (FUN6(VAR9, 100, VAR18) == NULL)
            {
                VAR9[0] = VAR12'';
            }
            fclose(VAR18);
        }
        else
        {
            VAR9[0] = VAR12'';
        }
    }
    FUN2(VAR9);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN7(NULL) );
    FUN5();
    return 0;
}