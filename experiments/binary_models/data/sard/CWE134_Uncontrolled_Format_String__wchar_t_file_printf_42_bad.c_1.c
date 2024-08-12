#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
#define VAR4 ""
wchar_t * FUN1(wchar_t * VAR5)
{
    {
        size_t VAR6 = wcslen(VAR5);
        VAR7 * VAR8;
        if (100-VAR6 > 1)
        {
            VAR8 = fopen(VAR4, "");
            if (VAR8 != NULL)
            {
                if (FUN2(VAR5+VAR6, (int)(100-VAR6), VAR8) == NULL)
                {
                    VAR5[VAR6] = VAR9'';
                }
                fclose(VAR8);
            }
        }
    }
    return VAR5;
}
void FUN3()
{
    wchar_t * VAR5;
    wchar_t VAR10[100] = VAR9"";
    VAR5 = VAR10;
    VAR5 = FUN1(VAR5);
    FUN4(VAR5);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}