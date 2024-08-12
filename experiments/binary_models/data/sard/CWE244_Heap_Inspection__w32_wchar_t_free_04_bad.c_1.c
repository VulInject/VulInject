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
            wchar_t * VAR9 = (wchar_t *)malloc(100*sizeof(wchar_t));
            if (VAR9 == NULL) {FUN3(-1);}
            size_t VAR10 = 0;
            HANDLE VAR11;
            wchar_t * VAR12 = VAR13"";
            wchar_t * VAR14 = VAR13"";
            VAR9[0] = VAR13'';
            if (FUN4(VAR9, 100, stdin) == NULL)
            {
                VAR9[0] = VAR13'';
            }
            VAR10 = wcslen(VAR9);
            if (VAR10 > 0)
            {
                VAR9[VAR10-1] = VAR13'';
            }
            if (FUN5(
                        VAR12,
                        VAR14,
                        VAR9,
                        VAR15,
                        VAR16,
                        &VAR11) != 0)
            {
                FUN6(VAR11);
            }
            else
            {
            }
            free(VAR9);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN7(NULL) );
    FUN2();
    return 0;
}