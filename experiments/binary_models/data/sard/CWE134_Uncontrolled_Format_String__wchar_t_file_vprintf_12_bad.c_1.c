#VAR1 <VAR2.VAR3>
#VAR1 ""
#VAR1 <VAR4.VAR3>
#define VAR5 ""
#define VAR5 ""
void FUN1(wchar_t * VAR6, ...)
{
    {
        va_list VAR7;
        FUN2(VAR7, VAR6);
        FUN3(VAR6, VAR7);
        FUN4(VAR7);
    }
}
void FUN5(wchar_t * VAR6, ...)
{
    {
        va_list VAR7;
        FUN2(VAR7, VAR6);
        FUN3(VAR8"", VAR7);
        FUN4(VAR7);
    }
}
void FUN6()
{
    wchar_t * VAR6;
    wchar_t VAR9[100] = VAR8"";
    VAR6 = VAR9;
    if(FUN7())
    {
        {
            size_t VAR10 = wcslen(VAR6);
            VAR11 * VAR12;
            if (100-VAR10 > 1)
            {
                VAR12 = fopen(VAR5, "");
                if (VAR12 != NULL)
                {
                    if (FUN8(VAR6+VAR10, (int)(100-VAR10), VAR12) == NULL)
                    {
                        VAR6[VAR10] = VAR8'';
                    }
                    fclose(VAR12);
                }
            }
        }
    }
    else
    {
        wcscpy(VAR6, VAR8"");
    }
    if(FUN7())
    {
        FUN1(VAR6, VAR6);
    }
    else
    {
        FUN5(VAR6, VAR6);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN9(NULL) );
    FUN6();
    return 0;
}