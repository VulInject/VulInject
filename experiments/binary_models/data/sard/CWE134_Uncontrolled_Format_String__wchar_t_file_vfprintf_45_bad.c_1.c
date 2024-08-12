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
        FUN3(VAR8, VAR6, VAR7);
        FUN4(VAR7);
    }
}
void FUN5()
{
    wchar_t * VAR6;
    wchar_t VAR9[100] = VAR10"";
    VAR6 = VAR9;
    if(VAR11)
    {
        {
            size_t VAR12 = wcslen(VAR6);
            VAR13 * VAR14;
            if (100-VAR12 > 1)
            {
                VAR14 = fopen(VAR5, "");
                if (VAR14 != NULL)
                {
                    if (FUN6(VAR6+VAR12, (int)(100-VAR12), VAR14) == NULL)
                    {
                        VAR6[VAR12] = VAR10'';
                    }
                    fclose(VAR14);
                }
            }
        }
    }
    if(VAR11)
    {
        FUN1(VAR6, VAR6);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN7(NULL) );
    FUN5();
    return 0;
}