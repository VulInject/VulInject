#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
#VAR5 FUN1(VAR6, "")
static const int VAR7 = 1; 
static const int VAR8 = 0; 
void FUN2()
{
    if(VAR7)
    {
        {
            wchar_t VAR9[100] = VAR10"";
            size_t VAR11 = 0;
            HANDLE VAR12;
            wchar_t * VAR13 = VAR10"";
            wchar_t * VAR14 = VAR10"";
            if (FUN3(VAR9, 100, stdin) == NULL)
            {
                VAR9[0] = VAR10'';
            }
            VAR11 = wcslen(VAR9);
            if (VAR11 > 0)
            {
                VAR9[VAR11-1] = VAR10'';
            }
            if (FUN4(
                        VAR13,
                        VAR14,
                        VAR9,
                        VAR15,
                        VAR16,
                        &VAR12) != 0)
            {
                FUN5(VAR12);
            }
            else
            {
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