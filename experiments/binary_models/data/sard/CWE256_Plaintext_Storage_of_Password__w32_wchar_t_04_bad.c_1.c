#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
#VAR1 <VAR5.VAR3>
#VAR6 FUN1(VAR7, "")
#VAR6 FUN1(VAR7, "")
#define VAR8 "" 
static const int VAR9 = 1; 
static const int VAR10 = 0; 
void FUN2()
{
    wchar_t * VAR11;
    wchar_t VAR12[100] = VAR13"";
    VAR11 = VAR12;
    if(VAR9)
    {
        {
            VAR14 *VAR15;
            VAR15 = fopen("", "");
            if (VAR15 != NULL)
            {
                if (FUN3(VAR11, 100, VAR15) == NULL)
                {
                    VAR11[0] = VAR13'';
                }
                fclose(VAR15);
            }
            else
            {
                VAR11[0] = VAR13'';
            }
        }
    }
    if(VAR9)
    {
        {
            HANDLE VAR16;
            wchar_t * VAR17 = VAR13"";
            wchar_t * VAR18 = VAR13"";
            if (FUN4(
                        VAR17,
                        VAR18,
                        VAR11,
                        VAR19,
                        VAR20,
                        &VAR16) != 0)
            {
                FUN5(VAR16);
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