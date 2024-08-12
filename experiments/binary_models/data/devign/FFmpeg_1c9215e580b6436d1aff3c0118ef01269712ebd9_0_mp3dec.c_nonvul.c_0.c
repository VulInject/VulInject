static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7;
    int64_t VAR8;
    int VAR9;
    int VAR10;
    VAR7 = FUN2(VAR2, NULL);
    if (!VAR7)
        return FUN3(VAR11);
    VAR7->VAR12->VAR13 = VAR14;
    VAR7->VAR12->VAR15 = VAR16;
    VAR7->VAR17 = VAR18;
    VAR7->VAR19 = 0;
    FUN4(VAR7, 64, 1, 14112000);
    VAR2->VAR20->VAR21 = -1;
    VAR8 = FUN5(VAR2->VAR20);
    if (!FUN6(VAR2->VAR22, "", NULL, VAR23))
        FUN7(VAR2);
    if (VAR2->VAR20->VAR24)
        VAR4->VAR25 = FUN8(VAR2->VAR20);
    if (FUN9(VAR2, VAR7, VAR8) < 0)
        FUN10(VAR2->VAR20, VAR8, VAR26);
    VAR9 = FUN11(VAR7, VAR2->VAR22);
    if (VAR9 < 0)
        return VAR9;
    VAR8 = FUN5(VAR2->VAR20);
    for (VAR10 = 0; VAR10 < 64 * 1024; VAR10++)
    {
        uint32_t VAR27, VAR28;
        int VAR29;
        if (!(VAR10 & 1023))
            FUN12(VAR2->VAR20, VAR10 + 1024 + 4);
        VAR29 = FUN13(VAR2->VAR20, VAR8 + VAR10, &VAR27);
        if (VAR29 > 0)
        {
            VAR9 = FUN10(VAR2->VAR20, VAR8, VAR26);
            if (VAR9 < 0)
                return VAR9;
            FUN12(VAR2->VAR20, VAR10 + 1024 + VAR29 + 4);
            VAR9 = FUN13(VAR2->VAR20, VAR8 + VAR10 + VAR29, &VAR28);
            if (VAR9 >= 0 && (VAR27 & VAR30) == (VAR28 & VAR30))
            {
                FUN14(VAR2, VAR31, "" VAR32 "", VAR10, VAR8);
                VAR9 = FUN10(VAR2->VAR20, VAR8 + VAR10, VAR26);
                if (VAR9 < 0)
                    return VAR9;
                break;
            }
            else if (VAR9 == VAR33)
            {
                FUN14(VAR2, VAR34, "" VAR32 "", VAR29, VAR8 + VAR10 + VAR29);
                return FUN3(VAR35);
            }
        }
        else if (VAR29 == VAR33)
        {
            FUN14(VAR2, VAR34, "" VAR32 "", (VAR36)(VAR10 + 1024 + VAR29 + 4));
            return FUN3(VAR35);
        }
        VAR9 = FUN10(VAR2->VAR20, VAR8, VAR26);
        if (VAR9 < 0)
            return VAR9;
    }
    for (VAR10 = 0; VAR10 < VAR7->VAR37; VAR10++)
        VAR7->VAR38[VAR10].VAR39 += FUN5(VAR2->VAR20);
    return 0;
}