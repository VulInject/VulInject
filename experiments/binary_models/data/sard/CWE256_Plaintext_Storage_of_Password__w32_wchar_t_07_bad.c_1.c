#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
#VAR1 <VAR5.VAR3>
#VAR6 FUN1(VAR7, "")
#VAR6 FUN1(VAR7, "")
#define VAR8 "" 
int VAR9 = 5;
void FUN2()
{
    wchar_t * VAR10;
    wchar_t VAR11[100] = VAR12"";
    VAR10 = VAR11;
    if(VAR9==5)
    {
        {
            VAR13 *VAR14;
            VAR14 = fopen("", "");
            if (VAR14 != NULL)
            {
                if (FUN3(VAR10, 100, VAR14) == NULL)
                {
                    VAR10[0] = VAR12'';
                }
                fclose(VAR14);
            }
            else
            {
                VAR10[0] = VAR12'';
            }
        }
    }
    if(VAR9==5)
    {
        {
            HANDLE VAR15;
            wchar_t * VAR16 = VAR12"";
            wchar_t * VAR17 = VAR12"";
            if (FUN4(
                        VAR16,
                        VAR17,
                        VAR10,
                        VAR18,
                        VAR19,
                        &VAR15) != 0)
            {
                FUN5(VAR15);
            }
            else
            {
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN2();
    return 0;
}