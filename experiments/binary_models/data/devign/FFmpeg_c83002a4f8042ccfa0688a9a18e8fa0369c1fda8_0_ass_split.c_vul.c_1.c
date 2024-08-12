int FUN1(const VAR1 *VAR2, void *VAR3, const char *VAR4)
{
    const char *VAR5 = NULL;
    char VAR6[2];
    int VAR7 = 0;
    while (*VAR4)
    {
        if (VAR5 && VAR2->VAR5 && (sscanf(VAR4, "", VAR6) == 1 || !FUN2(VAR4, "", 2)))
        {
            VAR2->FUN3(VAR3, VAR5, VAR7);
            VAR5 = NULL;
        }
        if (sscanf(VAR4, "", VAR6) == 1)
        {
            if (VAR2->VAR6)
                VAR2->FUN4(VAR3, VAR6[0] == '');
            VAR4 += 2;
        }
        else if (!FUN2(VAR4, "", 2))
        {
            VAR4++;
            while (*VAR4 == '')
            {
                char VAR8[2], VAR9[2], VAR10[2], VAR11[2] = "", VAR12[128] = {0};
                unsigned int VAR13 = 0xFFFFFFFF;
                int VAR14, VAR15 = -1, VAR16 = -1, VAR17 = -1;
                int VAR18, VAR19, VAR20, VAR21, VAR22 = -1, VAR23 = -1;
                if (sscanf(VAR4, "", VAR8, VAR9, &VAR14) > 1)
                {
                    int close = VAR9[0] == '' ? 1 : VAR9[0] == '' ? 0
                                                              : -1;
                    VAR14 += close != -1;
                    if (VAR2->VAR8)
                        VAR2->FUN5(VAR3, VAR8[0], close);
                }
                else if (sscanf(VAR4, "", VAR10, &VAR14) > 0 || sscanf(VAR4, "", &VAR13, VAR10, &VAR14) > 1 || sscanf(VAR4, "", VAR11, VAR10, &VAR14) > 1 || sscanf(VAR4, "", VAR11, &VAR13, VAR10, &VAR14) > 2)
                {
                    if (VAR2->VAR13)
                        VAR2->FUN6(VAR3, VAR13, VAR11[0] - '');
                }
                else if (sscanf(VAR4, "", VAR10, &VAR14) > 0 || sscanf(VAR4, "", &VAR17, VAR10, &VAR14) > 1 || sscanf(VAR4, "", VAR11, VAR10, &VAR14) > 1 || sscanf(VAR4, "", VAR11, &VAR17, VAR10, &VAR14) > 2)
                {
                    if (VAR2->VAR17)
                        VAR2->FUN7(VAR3, VAR17, VAR11[0] - '');
                }
                else if (sscanf(VAR4, "", VAR10, &VAR14) > 0 || sscanf(VAR4, "", VAR12, VAR10, &VAR14) > 1)
                {
                    if (VAR2->VAR24)
                        VAR2->FUN8(VAR3, VAR12[0] ? VAR12 : NULL);
                }
                else if (sscanf(VAR4, "", VAR10, &VAR14) > 0 || sscanf(VAR4, "", &VAR15, VAR10, &VAR14) > 1)
                {
                    if (VAR2->VAR25)
                        VAR2->FUN9(VAR3, VAR15);
                }
                else if (sscanf(VAR4, "", VAR10, &VAR14) > 0 || sscanf(VAR4, "", &VAR16, VAR10, &VAR14) > 1 || sscanf(VAR4, "", VAR10, &VAR14) > 0 || sscanf(VAR4, "", &VAR16, VAR10, &VAR14) > 1)
                {
                    if (VAR16 != -1 && VAR4[2] != '')
                        VAR16 = (VAR16 & 3) + (VAR16 & 4 ? 6 : VAR16 & 8 ? 3
                                                             : 0);
                    if (VAR2->VAR26)
                        VAR2->FUN10(VAR3, VAR16);
                }
                else if (sscanf(VAR4, "", VAR10, &VAR14) > 0 || sscanf(VAR4, "", VAR12, VAR10, &VAR14) > 1)
                {
                    if (VAR2->VAR27)
                        VAR2->FUN11(VAR3, VAR12);
                }
                else if (sscanf(VAR4, "", &VAR18, &VAR19, &VAR20, &VAR21, VAR10, &VAR14) > 4 || sscanf(VAR4, "", &VAR18, &VAR19, &VAR20, &VAR21, &VAR22, &VAR23, VAR10, &VAR14) > 6)
                {
                    if (VAR2->move)
                        VAR2->move(VAR3, VAR18, VAR19, VAR20, VAR21, VAR22, VAR23);
                }
                else if (sscanf(VAR4, "", &VAR18, &VAR19, VAR10, &VAR14) > 2)
                {
                    if (VAR2->move)
                        VAR2->move(VAR3, VAR18, VAR19, VAR18, VAR19, -1, -1);
                }
                else if (sscanf(VAR4, "", &VAR18, &VAR19, VAR10, &VAR14) > 2)
                {
                    if (VAR2->VAR28)
                        VAR2->FUN12(VAR3, VAR18, VAR19);
                }
                else
                {
                    VAR14 = strcspn(VAR4 + 1, "") + 2;
                }
                VAR4 += VAR14 - 1;
            }
            if (*VAR4++ != '')
                return VAR29;
        }
        else
        {
            if (!VAR5)
            {
                VAR5 = VAR4;
                VAR7 = 1;
            }
            else
                VAR7++;
            VAR4++;
        }
    }
    if (VAR5 && VAR2->VAR5)
        VAR2->FUN3(VAR3, VAR5, VAR7);
    if (VAR2->VAR30)
        VAR2->FUN13(VAR3);
    return 0;
}