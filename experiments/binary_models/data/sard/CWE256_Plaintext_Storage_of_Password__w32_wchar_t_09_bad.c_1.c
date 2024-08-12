#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
#VAR1 <VAR5.VAR3>
#VAR6 FUN1(VAR7, "")
#VAR6 FUN1(VAR7, "")
#define VAR8 "" 
void FUN2()
{
    wchar_t * VAR9;
    wchar_t VAR10[100] = VAR11"";
    VAR9 = VAR10;
    if(VAR12)
    {
        {
            VAR13 *VAR14;
            VAR14 = fopen("", "");
            if (VAR14 != NULL)
            {
                if (FUN3(VAR9, 100, VAR14) == NULL)
                {
                    VAR9[0] = VAR11'';
                }
                fclose(VAR14);
            }
            else
            {
                VAR9[0] = VAR11'';
            }
        }
    }
    if(VAR12)
    {
        {
            HANDLE VAR15;
            wchar_t * VAR16 = VAR11"";
            wchar_t * VAR17 = VAR11"";
            if (FUN4(
                        VAR16,
                        VAR17,
                        VAR9,
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