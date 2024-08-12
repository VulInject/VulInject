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
    else
    {
        {
            VAR12 *VAR13;
            HCRYPTPROV VAR14 = 0;
            HCRYPTHASH VAR15 = 0;
            HCRYPTKEY VAR16 = 0;
            char VAR17[100] = VAR8;
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
            do
            {
                BYTE VAR18[(100 - 1) * sizeof(wchar_t)]; 
                DWORD VAR19;
                VAR19 = FUN5(VAR18, sizeof(VAR18), VAR9);
                FUN6(VAR9, 100 * sizeof(wchar_t));
                if(!FUN7(&VAR14, NULL, VAR20, VAR21, 0))
                {
                    break;
                }
                if(!FUN8(VAR14, VAR22, 0, 0, &VAR15))
                {
                    break;
                }
                if(!FUN9(VAR15, (VAR23*)VAR17, strlen(VAR17), 0))
                {
                    break;
                }
                if(!FUN10(VAR14, VAR24, VAR15, 0, &VAR16))
                {
                    break;
                }
                if(!FUN11(VAR16, 0, 1, 0, VAR18, &VAR19))
                {
                    break;
                }
                memcpy(VAR9, VAR18, VAR19);
                VAR9[VAR19 / sizeof(wchar_t)] = VAR11'';
            }
            while (0);
            if (VAR16)
            {
                FUN12(VAR16);
            }
            if (VAR15)
            {
                FUN13(VAR15);
            }
            if (VAR14)
            {
                FUN14(VAR14, 0);
            }
        }
    }
    if(FUN3())
    {
        {
            HANDLE VAR25;
            wchar_t * VAR26 = VAR11"";
            wchar_t * VAR27 = VAR11"";
            if (FUN15(
                        VAR26,
                        VAR27,
                        VAR9,
                        VAR28,
                        VAR29,
                        &VAR25) != 0)
            {
                FUN16(VAR25);
            }
            else
            {
            }
        }
    }
    else
    {
        {
            HANDLE VAR25;
            wchar_t * VAR26 = VAR11"";
            wchar_t * VAR27 = VAR11"";
            char VAR17[100] = VAR8;
            HCRYPTPROV VAR14 = 0;
            HCRYPTHASH VAR15 = 0;
            HCRYPTKEY VAR16 = 0;
            do
            {
                BYTE VAR18[(100 - 1) * sizeof(wchar_t)]; 
                DWORD VAR19;
                VAR19 = FUN5(VAR18, sizeof(VAR18), VAR9);
                FUN6(VAR9, 100 * sizeof(wchar_t));
                if(!FUN7(&VAR14, NULL, VAR20, VAR21, 0))
                {
                    break;
                }
                if(!FUN8(VAR14, VAR22, 0, 0, &VAR15))
                {
                    break;
                }
                if(!FUN9(VAR15, (VAR23*)VAR17, strlen(VAR17), 0))
                {
                    break;
                }
                if(!FUN10(VAR14, VAR24, VAR15, 0, &VAR16))
                {
                    break;
                }
                if(!FUN11(VAR16, 0, 1, 0, VAR18, &VAR19))
                {
                    break;
                }
                memcpy(VAR9, VAR18, VAR19);
                VAR9[VAR19 / sizeof(wchar_t)] = VAR11'';
            }
            while (0);
            if (VAR16)
            {
                FUN12(VAR16);
            }
            if (VAR15)
            {
                FUN13(VAR15);
            }
            if (VAR14)
            {
                FUN14(VAR14, 0);
            }
            if (FUN15(
                        VAR26,
                        VAR27,
                        VAR9,
                        VAR28,
                        VAR29,
                        &VAR25) != 0)
            {
                FUN16(VAR25);
            }
            else
            {
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN17(NULL) );
    FUN2();
    return 0;
}