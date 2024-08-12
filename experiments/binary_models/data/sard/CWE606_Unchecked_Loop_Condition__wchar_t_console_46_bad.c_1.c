#VAR1 ""
#define MAX_LOOP 10000
#VAR1 <VAR2.VAR3>
void FUN1()
{
    wchar_t * VAR4;
    wchar_t VAR5[100] = VAR6"";
    VAR4 = VAR5;
    if(FUN2())
    {
        {
            size_t VAR7 = wcslen(VAR4);
            if (100-VAR7 > 1)
            {
                if (FUN3(VAR4+VAR7, (int)(100-VAR7), stdin) != NULL)
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
    if(FUN2())
    {
        {
            int VAR8, VAR9, VAR10;
            if (swscanf(VAR4, VAR6"", &VAR9) == 1)
            {
                VAR10 = 0;
                for (VAR8 = 0; VAR8 < VAR9; VAR8++)
                {
                    VAR10++; 
                }
                FUN4(VAR10);
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN1();
    return 0;
}