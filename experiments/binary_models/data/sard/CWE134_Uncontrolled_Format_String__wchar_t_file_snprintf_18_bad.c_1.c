#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
#define VAR4 ""
#define SNPRINTF _snwprintf
#define SNPRINTF swprintf
void FUN1()
{
    wchar_t * VAR5;
    wchar_t VAR6[100] = VAR7"";
    VAR5 = VAR6;
    goto VAR8;
VAR8:
    {
        size_t VAR9 = wcslen(VAR5);
        VAR10 * VAR11;
        if (100-VAR9 > 1)
        {
            VAR11 = fopen(VAR4, "");
            if (VAR11 != NULL)
            {
                if (FUN2(VAR5+VAR9, (int)(100-VAR9), VAR11) == NULL)
                {
                    VAR5[VAR9] = VAR7'';
                }
                fclose(VAR11);
            }
        }
    }
    goto VAR12;
VAR12:
    {
        wchar_t VAR13[100] = VAR7"";
        FUN3(VAR13, 100-1, VAR5);
        FUN4(VAR13);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN1();
    return 0;
}