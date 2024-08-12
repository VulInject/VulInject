#VAR1 ""
#VAR1 <VAR2.VAR3>
#define SNPRINTF _snwprintf
#define SNPRINTF swprintf
static const int VAR4 = 1; 
static const int VAR5 = 0; 
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
            wchar_t VAR10[100] = VAR8"";
            FUN3(VAR10, 100-1, VAR6);
            FUN4(VAR10);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN1();
    return 0;
}