#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
#define VAR4 ""
void FUN1(wchar_t * VAR5)
{
    fwprintf(VAR6, VAR5);
}
void FUN2()
{
    wchar_t * VAR5;
    wchar_t VAR7[100] = VAR8"";
    VAR5 = VAR7;
    {
        size_t VAR9 = wcslen(VAR5);
        VAR10 * VAR11;
        if (100-VAR9 > 1)
        {
            VAR11 = fopen(VAR4, "");
            if (VAR11 != NULL)
            {
                if (FUN3(VAR5+VAR9, (int)(100-VAR9), VAR11) == NULL)
                {
                    VAR5[VAR9] = VAR8'';
                }
                fclose(VAR11);
            }
        }
    }
    FUN1(VAR5);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN2();
    return 0;
}