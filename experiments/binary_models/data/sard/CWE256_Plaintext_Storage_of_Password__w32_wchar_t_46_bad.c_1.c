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
    if(FUN3())
    {
        {
            VAR12 *VAR13;
            VAR13 = fopen("", "");
            if (VAR13 != NULL)
            {
                if (FUN4(VAR9, 100, VAR13) == NULL)
                {
                    VAR9[0] = VAR11'';
                }
                fclose(VAR13);
            }
            else
            {
                VAR9[0] = VAR11'';
            }
        }
    }
    if(FUN3())
    {
        {
            HANDLE VAR14;
            wchar_t * VAR15 = VAR11"";
            wchar_t * VAR16 = VAR11"";
            if (FUN5(
                        VAR15,
                        VAR16,
                        VAR9,
                        VAR17,
                        VAR18,
                        &VAR14) != 0)
            {
                FUN6(VAR14);
            }
            else
            {
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN7(NULL) );
    FUN2();
    return 0;
}