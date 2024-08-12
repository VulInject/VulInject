#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
#VAR1 <VAR5.VAR3>
#VAR6 FUN1(VAR7, "")
#VAR6 FUN1(VAR7, "")
#define VAR8 "" 
wchar_t * FUN2(wchar_t * VAR9)
{
    {
        VAR10 *VAR11;
        VAR11 = fopen("", "");
        if (VAR11 != NULL)
        {
            if (FUN3(VAR9, 100, VAR11) == NULL)
            {
                VAR9[0] = VAR12'';
            }
            fclose(VAR11);
        }
        else
        {
            VAR9[0] = VAR12'';
        }
    }
    return VAR9;
}
void FUN4()
{
    wchar_t * VAR9;
    wchar_t VAR13[100] = VAR12"";
    VAR9 = VAR13;
    VAR9 = FUN2(VAR9);
    {
        HANDLE VAR14;
        wchar_t * VAR15 = VAR12"";
        wchar_t * VAR16 = VAR12"";
        if (FUN5(
                    VAR15,
                    VAR16,
                    VAR9,
                    VAR17,
                    VAR18,
                    &VAR14) != 0)
        {
            FUN6(VAR14);
        }
        else
        {
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN7(NULL) );
    FUN4();
    return 0;
}