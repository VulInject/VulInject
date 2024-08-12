#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    wchar_t * VAR4;
    wchar_t VAR5[100] = VAR6"";
    VAR4 = VAR5;
    if(1)
    {
        {
            size_t VAR7 = wcslen(VAR4);
            if (100-VAR7 > 1)
            {
                if (FUN2(VAR4+VAR7, (int)(100-VAR7), stdin) != NULL)
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
    if(1)
    {
        FUN3(VAR4);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}