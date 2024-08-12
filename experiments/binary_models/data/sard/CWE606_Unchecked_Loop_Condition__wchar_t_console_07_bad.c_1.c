#VAR1 ""
#define MAX_LOOP 10000
#VAR1 <VAR2.VAR3>
int VAR4 = 5;
void FUN1()
{
    wchar_t * VAR5;
    wchar_t VAR6[100] = VAR7"";
    VAR5 = VAR6;
    if(VAR4==5)
    {
        {
            size_t VAR8 = wcslen(VAR5);
            if (100-VAR8 > 1)
            {
                if (FUN2(VAR5+VAR8, (int)(100-VAR8), stdin) != NULL)
                {
                    VAR8 = wcslen(VAR5);
                    if (VAR8 > 0 && VAR5[VAR8-1] == VAR7'')
                    {
                        VAR5[VAR8-1] = VAR7'';
                    }
                }
                else
                {
                    VAR5[VAR8] = VAR7'';
                }
            }
        }
    }
    if(VAR4==5)
    {
        {
            int VAR9, VAR10, VAR11;
            if (swscanf(VAR5, VAR7"", &VAR10) == 1)
            {
                VAR11 = 0;
                for (VAR9 = 0; VAR9 < VAR10; VAR9++)
                {
                    VAR11++; 
                }
                FUN3(VAR11);
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}