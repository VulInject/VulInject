#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
#define VAR4 ""
void FUN1(wchar_t * VAR5)
{
    FUN2(VAR5);
}
void FUN3()
{
    wchar_t * VAR5;
    void (*VAR6) (wchar_t *) = VAR7;
    wchar_t VAR8[100] = VAR9"";
    VAR5 = VAR8;
    {
        size_t VAR10 = wcslen(VAR5);
        VAR11 * VAR12;
        if (100-VAR10 > 1)
        {
            VAR12 = fopen(VAR4, "");
            if (VAR12 != NULL)
            {
                if (FUN4(VAR5+VAR10, (int)(100-VAR10), VAR12) == NULL)
                {
                    VAR5[VAR10] = VAR9'';
                }
                fclose(VAR12);
            }
        }
    }
    FUN5(VAR5);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN3();
    return 0;
}