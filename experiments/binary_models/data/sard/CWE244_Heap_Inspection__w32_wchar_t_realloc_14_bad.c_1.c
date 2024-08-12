#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
#VAR5 FUN1(VAR6, "")
void FUN2()
{
    if(VAR7==5)
    {
        {
            wchar_t * VAR8 = (wchar_t *)malloc(100*sizeof(wchar_t));
            if (VAR8 == NULL) {FUN3(-1);}
            size_t VAR9 = 0;
            HANDLE VAR10;
            wchar_t * VAR11 = VAR12"";
            wchar_t * VAR13 = VAR12"";
            VAR8[0] = VAR12'';
            if (FUN4(VAR8, 100, stdin) == NULL)
            {
                VAR8[0] = VAR12'';
            }
            VAR9 = wcslen(VAR8);
            if (VAR9 > 0)
            {
                VAR8[VAR9-1] = VAR12'';
            }
            if (FUN5(
                        VAR11,
                        VAR13,
                        VAR8,
                        VAR14,
                        VAR15,
                        &VAR10) != 0)
            {
                FUN6(VAR10);
            }
            else
            {
            }
            VAR8 = realloc(VAR8, 200 * sizeof(wchar_t));
            if (VAR8 == NULL) {FUN3(-1);}
            FUN7(VAR8, 200 * sizeof(wchar_t));
            wcscpy(VAR8, VAR12"");
            FUN8(VAR8);
            free(VAR8);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN9(NULL) );
    FUN2();
    return 0;
}