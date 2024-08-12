#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
#define VAR4 ""
void FUN1()
{
    wchar_t * VAR5;
    wchar_t * *VAR6 = &VAR5;
    wchar_t * *VAR7 = &VAR5;
    wchar_t VAR8[100] = VAR9"";
    VAR5 = VAR8;
    {
        wchar_t * VAR5 = *VAR6;
        {
            size_t VAR10 = wcslen(VAR5);
            VAR11 * VAR12;
            if (100-VAR10 > 1)
            {
                VAR12 = fopen(VAR4, "");
                if (VAR12 != NULL)
                {
                    if (FUN2(VAR5+VAR10, (int)(100-VAR10), VAR12) == NULL)
                    {
                        VAR5[VAR10] = VAR9'';
                    }
                    fclose(VAR12);
                }
            }
        }
        *VAR6 = VAR5;
    }
    {
        wchar_t * VAR5 = *VAR7;
        fwprintf(VAR13, VAR5);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}