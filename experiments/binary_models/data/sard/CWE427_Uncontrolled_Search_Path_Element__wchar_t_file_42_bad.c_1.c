#VAR1 ""
#VAR1 <VAR2.VAR3>
#define NEW_PATH VAR4""
#define PUTENV VAR5
#define NEW_PATH VAR4""
#define PUTENV VAR6
#define VAR7 ""
#define VAR7 ""
wchar_t * FUN1(wchar_t * VAR8)
{
    {
        size_t VAR9 = wcslen(VAR8);
        VAR10 * VAR11;
        if (250-VAR9 > 1)
        {
            VAR11 = fopen(VAR7, "");
            if (VAR11 != NULL)
            {
                if (FUN2(VAR8+VAR9, (int)(250-VAR9), VAR11) == NULL)
                {
                    VAR8[VAR9] = VAR4'';
                }
                fclose(VAR11);
            }
        }
    }
    return VAR8;
}
void FUN3()
{
    wchar_t * VAR8;
    wchar_t VAR12[250] = VAR4"";
    VAR8 = VAR12;
    VAR8 = FUN1(VAR8);
    FUN4(VAR8);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}