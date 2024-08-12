#VAR1 <VAR2.VAR3>
#VAR1 ""
#VAR1 <VAR4.VAR3>
static const int VAR5 = 1; 
static const int VAR6 = 0; 
void FUN1(char * VAR7, ...)
{
    {
        va_list VAR8;
        FUN2(VAR8, VAR7);
        FUN3(VAR9, VAR7, VAR8);
        FUN4(VAR8);
    }
}
void FUN5()
{
    char * VAR7;
    char VAR10[100] = "";
    VAR7 = VAR10;
    if(VAR5)
    {
        {
            size_t VAR11 = strlen(VAR7);
            if (100-VAR11 > 1)
            {
                if (fgets(VAR7+VAR11, (int)(100-VAR11), stdin) != NULL)
                {
                    VAR11 = strlen(VAR7);
                    if (VAR11 > 0 && VAR7[VAR11-1] == '')
                    {
                        VAR7[VAR11-1] = '';
                    }
                }
                else
                {
                    VAR7[VAR11] = '';
                }
            }
        }
    }
    if(VAR5)
    {
        FUN1(VAR7, VAR7);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN5();
    return 0;
}