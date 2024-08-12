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
    void (*VAR7) (wchar_t *) = VAR8;
    wchar_t VAR9[100] = VAR10"";
    VAR5 = VAR9;
    {
        size_t VAR11 = wcslen(VAR5);
        VAR12 * VAR13;
        if (100-VAR11 > 1)
        {
            VAR13 = fopen(VAR4, "");
            if (VAR13 != NULL)
            {
                if (FUN3(VAR5+VAR11, (int)(100-VAR11), VAR13) == NULL)
                {
                    VAR5[VAR11] = VAR10'';
                }
                fclose(VAR13);
            }
        }
    }
    FUN4(VAR5);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN2();
    return 0;
}