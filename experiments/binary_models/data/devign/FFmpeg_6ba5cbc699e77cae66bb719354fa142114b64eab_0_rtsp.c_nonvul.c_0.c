static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, const char *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    char VAR10[64], VAR11[64];
    const char *VAR12;
    int VAR13, VAR14, VAR15;
    VAR16 *VAR17;
    VAR18 *VAR19;
    struct in_addr VAR20;
    int VAR21;
    FUN2("", VAR5, VAR6);
    VAR12 = VAR6;
    switch (VAR5)
    {
    case '':
        FUN3(VAR10, sizeof(VAR10), &VAR12);
        if (strcmp(VAR10, "") != 0)
            return;
        FUN3(VAR10, sizeof(VAR10), &VAR12);
        if (strcmp(VAR10, "") != 0)
            return;
        FUN4(VAR10, sizeof(VAR10), "", &VAR12);
        if (FUN5(VAR10, &VAR20) == 0)
            return;
        VAR21 = 16;
        if (*VAR12 == '')
        {
            VAR12++;
            FUN4(VAR10, sizeof(VAR10), "", &VAR12);
            VAR21 = FUN6(VAR10);
        }
        if (VAR2->VAR22 == 0)
        {
            VAR4->VAR23 = VAR20;
            VAR4->VAR24 = VAR21;
        }
        else
        {
            VAR17 = VAR2->VAR25[VAR2->VAR22 - 1];
            VAR19 = VAR17->VAR9;
            VAR19->VAR20 = VAR20;
            VAR19->VAR26 = VAR21;
        }
        break;
    case '':
        FUN7(VAR2->VAR27, sizeof(VAR2->VAR27), VAR12);
        break;
    case '':
        if (VAR2->VAR22 == 0)
        {
            FUN7(VAR2->VAR28, sizeof(VAR2->VAR28), VAR12);
            break;
        }
        break;
    case '':
        FUN3(VAR11, sizeof(VAR11), &VAR12);
        if (!strcmp(VAR11, ""))
        {
            VAR13 = VAR29;
        }
        else if (!strcmp(VAR11, ""))
        {
            VAR13 = VAR30;
        }
        else
        {
            return;
        }
        VAR19 = FUN8(sizeof(VAR18));
        if (!VAR19)
            return;
        VAR19->VAR31 = -1;
        FUN9(&VAR8->VAR32, &VAR8->VAR33, VAR19);
        VAR19->VAR20 = VAR4->VAR23;
        VAR19->VAR26 = VAR4->VAR24;
        FUN3(VAR10, sizeof(VAR10), &VAR12);
        VAR19->VAR34 = FUN6(VAR10);
        FUN3(VAR10, sizeof(VAR10), &VAR12);
        FUN3(VAR10, sizeof(VAR10), &VAR12);
        VAR19->VAR35 = FUN6(VAR10);
        if (VAR19->VAR35 == VAR36)
        {
        }
        else
        {
            VAR17 = FUN10(VAR2, 0);
            if (!VAR17)
                return;
            VAR17->VAR9 = VAR19;
            VAR19->VAR31 = VAR17->VAR37;
            VAR17->VAR38.VAR13 = VAR13;
            if (VAR19->VAR35 < 96)
            {
                FUN11(&VAR17->VAR38, VAR19->VAR35);
            }
        }
        FUN7(VAR19->VAR39, sizeof(VAR19->VAR39), VAR2->VAR40);
        break;
    case '':
        if (FUN12(VAR12, "", &VAR12) && VAR2->VAR22 > 0)
        {
            char VAR41[32];
            VAR17 = VAR2->VAR25[VAR2->VAR22 - 1];
            VAR19 = VAR17->VAR9;
            FUN13(VAR41, sizeof(VAR41), NULL, 0, NULL, 0, NULL, NULL, 0, VAR12);
            if (VAR41[0] == '')
            {
                FUN14(VAR19->VAR39, sizeof(VAR19->VAR39), "");
                FUN14(VAR19->VAR39, sizeof(VAR19->VAR39), VAR12);
            }
            else
            {
                FUN7(VAR19->VAR39, sizeof(VAR19->VAR39), VAR12);
            }
        }
        else if (FUN12(VAR12, "", &VAR12))
        {
            FUN3(VAR10, sizeof(VAR10), &VAR12);
            VAR14 = FUN6(VAR10);
            for (VAR15 = 0; VAR15 < VAR2->VAR22; VAR15++)
            {
                VAR17 = VAR2->VAR25[VAR15];
                VAR19 = VAR17->VAR9;
                if (VAR19->VAR35 == VAR14)
                {
                    FUN15(&VAR17->VAR38, VAR12);
                }
            }
        }
        else if (FUN12(VAR12, "", &VAR12))
        {
            FUN3(VAR10, sizeof(VAR10), &VAR12);
            VAR14 = FUN6(VAR10);
            for (VAR15 = 0; VAR15 < VAR2->VAR22; VAR15++)
            {
                VAR17 = VAR2->VAR25[VAR15];
                VAR19 = VAR17->VAR9;
                if (VAR19->VAR35 == VAR14)
                {
                    FUN16(&VAR17->VAR38, VAR12);
                }
            }
        }
        break;
    }
}