#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
#define VAR4 ""
#define SNPRINTF _snwprintf
#define SNPRINTF swprintf
void FUN1(wchar_t * VAR5)
{
    {
        wchar_t VAR6[100] = VAR7"";
        FUN2(VAR6, 100-1, VAR5);
        FUN3(VAR6);
    }
}
void FUN4()
{
    wchar_t * VAR5;
    wchar_t VAR8[100] = VAR7"";
    VAR5 = VAR8;
    {
        size_t VAR9 = wcslen(VAR5);
        VAR10 * VAR11;
        if (100-VAR9 > 1)
        {
            VAR11 = fopen(VAR4, "");
            if (VAR11 != NULL)
            {
                if (FUN5(VAR5+VAR9, (int)(100-VAR9), VAR11) == NULL)
                {
                    VAR5[VAR9] = VAR7'';
                }
                fclose(VAR11);
            }
        }
    }
    FUN1(VAR5);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN4();
    return 0;
}