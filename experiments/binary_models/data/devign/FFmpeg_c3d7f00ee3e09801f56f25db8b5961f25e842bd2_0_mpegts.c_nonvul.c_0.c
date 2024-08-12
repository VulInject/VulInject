static void FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8.VAR9.VAR10;
    SectionHeader VAR11, *VAR12 = &VAR11;
    const VAR3 *VAR13, *VAR14, *VAR15, *VAR16;
    int VAR17, VAR18, VAR19, VAR20, VAR21, VAR22, VAR23;
    char *VAR24, *VAR25;
    FUN2(VAR7->VAR26, "");
    FUN3(VAR7->VAR26, VAR4, VAR5);
    VAR14 = VAR4 + VAR5 - 4;
    VAR13 = VAR4;
    if (FUN4(VAR12, &VAR13, VAR14) < 0)
        return;
    if (VAR12->VAR27 != VAR28)
        return;
    if (VAR7->VAR29)
        return;
    VAR17 = FUN5(&VAR13, VAR14);
    if (VAR17 < 0)
        return;
    VAR18 = FUN6(&VAR13, VAR14);
    if (VAR18 < 0)
        return;
    for (;;)
    {
        VAR19 = FUN5(&VAR13, VAR14);
        if (VAR19 < 0)
            break;
        VAR18 = FUN6(&VAR13, VAR14);
        if (VAR18 < 0)
            break;
        VAR20 = FUN5(&VAR13, VAR14);
        if (VAR20 < 0)
            break;
        VAR20 &= 0xfff;
        VAR15 = VAR13 + VAR20;
        if (VAR15 > VAR14)
            break;
        for (;;)
        {
            VAR21 = FUN6(&VAR13, VAR15);
            if (VAR21 < 0)
                break;
            VAR22 = FUN6(&VAR13, VAR15);
            VAR16 = VAR13 + VAR22;
            if (VAR22 < 0 || VAR16 > VAR15)
                break;
            FUN2(VAR7->VAR26, "", VAR21, VAR22);
            switch (VAR21)
            {
            case 0x48:
                VAR23 = FUN6(&VAR13, VAR14);
                if (VAR23 < 0)
                    break;
                VAR25 = FUN7(&VAR13, VAR14);
                if (!VAR25)
                    break;
                VAR24 = FUN7(&VAR13, VAR14);
                if (VAR24)
                {
                    VAR30 *VAR31 = FUN8(VAR7->VAR26, VAR19);
                    if (VAR31)
                    {
                        FUN9(&VAR31->VAR32, "", VAR24, 0);
                        FUN9(&VAR31->VAR32, "", VAR25, 0);
                    }
                }
                FUN10(VAR24);
                FUN10(VAR25);
                break;
            default:
                break;
            }
            VAR13 = VAR16;
        }
        VAR13 = VAR15;
    }
}