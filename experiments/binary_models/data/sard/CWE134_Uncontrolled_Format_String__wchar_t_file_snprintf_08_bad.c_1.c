#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
#define VAR4 ""
#define SNPRINTF _snwprintf
#define SNPRINTF swprintf
int FUN1()
{
    return 1;
}
int FUN2()
{
    return 0;
}
void FUN3()
{
    wchar_t * VAR5;
    wchar_t VAR6[100] = VAR7"";
    VAR5 = VAR6;
    if(FUN1())
    {
        {
            size_t VAR8 = wcslen(VAR5);
            VAR9 * VAR10;
            if (100-VAR8 > 1)
            {
                VAR10 = fopen(VAR4, "");
                if (VAR10 != NULL)
                {
                    if (FUN4(VAR5+VAR8, (int)(100-VAR8), VAR10) == NULL)
                    {
                        VAR5[VAR8] = VAR7'';
                    }
                    fclose(VAR10);
                }
            }
        }
    }
    if(FUN1())
    {
        {
            wchar_t VAR11[100] = VAR7"";
            FUN5(VAR11, 100-1, VAR5);
            FUN6(VAR11);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN7(NULL) );
    FUN3();
    return 0;
}