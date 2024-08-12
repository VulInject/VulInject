#VAR1 ""
#VAR1 <VAR2.VAR3>
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
    wchar_t * VAR4;
    wchar_t VAR5[100] = VAR6"";
    VAR4 = VAR5;
    if(FUN1())
    {
        {
            size_t VAR7 = wcslen(VAR4);
            if (100-VAR7 > 1)
            {
                if (FUN4(VAR4+VAR7, (int)(100-VAR7), stdin) != NULL)
                {
                    VAR7 = wcslen(VAR4);
                    if (VAR7 > 0 && VAR4[VAR7-1] == VAR6'')
                    {
                        VAR4[VAR7-1] = VAR6'';
                    }
                }
                else
                {
                    VAR4[VAR7] = VAR6'';
                }
            }
        }
    }
    if(FUN1())
    {
        {
            wchar_t VAR8[100] = VAR6"";
            FUN5(VAR8, 100-1, VAR4);
            FUN6(VAR8);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN7(NULL) );
    FUN3();
    return 0;
}