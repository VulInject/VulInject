#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
#VAR5 FUN1(VAR6, "")
void FUN2()
{
    if(FUN3())
    {
        {
            wchar_t * VAR7 = (wchar_t *)malloc(100*sizeof(wchar_t));
            if (VAR7 == NULL) {FUN4(-1);}
            size_t VAR8 = 0;
            HANDLE VAR9;
            wchar_t * VAR10 = VAR11"";
            wchar_t * VAR12 = VAR11"";
            VAR7[0] = VAR11'';
            if (FUN5(VAR7, 100, stdin) == NULL)
            {
                VAR7[0] = VAR11'';
            }
            VAR8 = wcslen(VAR7);
            if (VAR8 > 0)
            {
                VAR7[VAR8-1] = VAR11'';
            }
            if (FUN6(
                        VAR10,
                        VAR12,
                        VAR7,
                        VAR13,
                        VAR14,
                        &VAR9) != 0)
            {
                FUN7(VAR9);
            }
            else
            {
            }
            VAR7 = realloc(VAR7, 200 * sizeof(wchar_t));
            if (VAR7 == NULL) {FUN4(-1);}
            FUN8(VAR7, 200 * sizeof(wchar_t));
            wcscpy(VAR7, VAR11"");
            FUN9(VAR7);
            free(VAR7);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN10(NULL) );
    FUN2();
    return 0;
}