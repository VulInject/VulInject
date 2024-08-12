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
    char * VAR11;
    char VAR12[100] = "";
    VAR11 = VAR12;
    if(VAR9)
    {
        {
            VAR13 *VAR14;
            VAR14 = fopen("", "");
            if (VAR14 != NULL)
            {
                if (fgets(VAR11, 100, VAR14) == NULL)
                {
                    VAR11[0] = '';
                }
                fclose(VAR14);
            }
            else
            {
                VAR11[0] = '';
            }
        }
    }
    if(VAR9)
    {
        {
            HANDLE VAR15;
            char * VAR16 = "";
            char * VAR17 = "";
            if (FUN3(
                        VAR16,
                        VAR17,
                        VAR11,
                        VAR18,
                        VAR19,
                        &VAR15) != 0)
            {
                FUN4(VAR15);
            }
            else
            {
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN2();
    return 0;
}