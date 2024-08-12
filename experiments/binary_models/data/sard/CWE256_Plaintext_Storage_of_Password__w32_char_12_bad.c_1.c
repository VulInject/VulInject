#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
#VAR1 <VAR5.VAR3>
#VAR6 FUN1(VAR7, "")
#VAR6 FUN1(VAR7, "")
#define VAR8 "" 
void FUN2()
{
    char * VAR9;
    char VAR10[100] = "";
    VAR9 = VAR10;
    if(FUN3())
    {
        {
            VAR11 *VAR12;
            VAR12 = fopen("", "");
            if (VAR12 != NULL)
            {
                if (fgets(VAR9, 100, VAR12) == NULL)
                {
                    VAR9[0] = '';
                }
                fclose(VAR12);
            }
            else
            {
                VAR9[0] = '';
            }
        }
    }
    else
    {
        {
            VAR11 *VAR12;
            HCRYPTPROV VAR13 = 0;
            HCRYPTHASH VAR14 = 0;
            HCRYPTKEY VAR15 = 0;
            char VAR16[100] = VAR8;
            VAR12 = fopen("", "");
            if (VAR12 != NULL)
            {
                if (fgets(VAR9, 100, VAR12) == NULL)
                {
                    VAR9[0] = '';
                }
                fclose(VAR12);
            }
            else
            {
                VAR9[0] = '';
            }
            do
            {
                BYTE VAR17[(100 - 1) * sizeof(char)]; 
                DWORD VAR18;
                VAR18 = FUN4(VAR17, sizeof(VAR17), VAR9);
                FUN5(VAR9, 100 * sizeof(char));
                if(!FUN6(&VAR13, NULL, VAR19, VAR20, 0))
                {
                    break;
                }
                if(!FUN7(VAR13, VAR21, 0, 0, &VAR14))
                {
                    break;
                }
                if(!FUN8(VAR14, (VAR22*)VAR16, strlen(VAR16), 0))
                {
                    break;
                }
                if(!FUN9(VAR13, VAR23, VAR14, 0, &VAR15))
                {
                    break;
                }
                if(!FUN10(VAR15, 0, 1, 0, VAR17, &VAR18))
                {
                    break;
                }
                memcpy(VAR9, VAR17, VAR18);
                VAR9[VAR18 / sizeof(char)] = '';
            }
            while (0);
            if (VAR15)
            {
                FUN11(VAR15);
            }
            if (VAR14)
            {
                FUN12(VAR14);
            }
            if (VAR13)
            {
                FUN13(VAR13, 0);
            }
        }
    }
    if(FUN3())
    {
        {
            HANDLE VAR24;
            char * VAR25 = "";
            char * VAR26 = "";
            if (FUN14(
                        VAR25,
                        VAR26,
                        VAR9,
                        VAR27,
                        VAR28,
                        &VAR24) != 0)
            {
                FUN15(VAR24);
            }
            else
            {
            }
        }
    }
    else
    {
        {
            HANDLE VAR24;
            char * VAR25 = "";
            char * VAR26 = "";
            char VAR16[100] = VAR8;
            HCRYPTPROV VAR13 = 0;
            HCRYPTHASH VAR14 = 0;
            HCRYPTKEY VAR15 = 0;
            do
            {
                BYTE VAR17[(100 - 1) * sizeof(char)]; 
                DWORD VAR18;
                VAR18 = FUN4(VAR17, sizeof(VAR17), VAR9);
                FUN5(VAR9, 100 * sizeof(char));
                if(!FUN6(&VAR13, NULL, VAR19, VAR20, 0))
                {
                    break;
                }
                if(!FUN7(VAR13, VAR21, 0, 0, &VAR14))
                {
                    break;
                }
                if(!FUN8(VAR14, (VAR22*)VAR16, strlen(VAR16), 0))
                {
                    break;
                }
                if(!FUN9(VAR13, VAR23, VAR14, 0, &VAR15))
                {
                    break;
                }
                if(!FUN10(VAR15, 0, 1, 0, VAR17, &VAR18))
                {
                    break;
                }
                memcpy(VAR9, VAR17, VAR18);
                VAR9[VAR18 / sizeof(char)] = '';
            }
            while (0);
            if (VAR15)
            {
                FUN11(VAR15);
            }
            if (VAR14)
            {
                FUN12(VAR14);
            }
            if (VAR13)
            {
                FUN13(VAR13, 0);
            }
            if (FUN14(
                        VAR25,
                        VAR26,
                        VAR9,
                        VAR27,
                        VAR28,
                        &VAR24) != 0)
            {
                FUN15(VAR24);
            }
            else
            {
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN16(NULL) );
    FUN2();
    return 0;
}