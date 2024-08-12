#VAR1 ""
#define MAX_LOOP 10000
#VAR1 <VAR2.VAR3>
int VAR4 = 1; 
int VAR5 = 0; 
void FUN1()
{
    wchar_t * VAR6;
    wchar_t VAR7[100] = VAR8"";
    VAR6 = VAR7;
    if(VAR4)
    {
        {
            size_t VAR9 = wcslen(VAR6);
            if (100-VAR9 > 1)
            {
                if (FUN2(VAR6+VAR9, (int)(100-VAR9), stdin) != NULL)
                {
                    VAR9 = wcslen(VAR6);
                    if (VAR9 > 0 && VAR6[VAR9-1] == VAR8'')
                    {
                        VAR6[VAR9-1] = VAR8'';
                    }
                }
                else
                {
                    VAR6[VAR9] = VAR8'';
                }
            }
        }
    }
    if(VAR4)
    {
        {
            int VAR10, VAR11, VAR12;
            if (swscanf(VAR6, VAR8"", &VAR11) == 1)
            {
                VAR12 = 0;
                for (VAR10 = 0; VAR10 < VAR11; VAR10++)
                {
                    VAR12++; 
                }
                FUN3(VAR12);
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