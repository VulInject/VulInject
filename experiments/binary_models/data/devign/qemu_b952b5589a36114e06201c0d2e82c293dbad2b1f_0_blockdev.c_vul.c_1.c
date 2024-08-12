void FUN1(const char *VAR1, const char *VAR2, bool VAR3, const char *VAR4, enum MirrorSyncMode VAR5, bool VAR6, enum NewImageMode VAR7, bool VAR8, int64_t VAR9, VAR10 **VAR11)
{
    BlockDriverInfo VAR12;
    VAR13 *VAR14;
    VAR13 *VAR15, *VAR16;
    VAR17 *VAR18;
    VAR17 *VAR19 = NULL;
    VAR10 *VAR20 = NULL;
    int VAR21;
    uint64_t VAR22;
    int VAR23;
    if (!VAR8)
    {
        VAR9 = 0;
    }
    if (!VAR6)
    {
        VAR7 = VAR24;
    }
    VAR14 = FUN2(VAR1);
    if (!VAR14)
    {
        FUN3(VAR11, VAR25, VAR1);
        return;
    }
    if (!FUN4(VAR14))
    {
        FUN3(VAR11, VAR26, VAR1);
        return;
    }
    if (!VAR3)
    {
        VAR4 = VAR7 == VAR27 ? NULL : VAR14->VAR19->VAR28;
    }
    if (VAR4)
    {
        VAR19 = FUN5(VAR4);
        if (!VAR19)
        {
            FUN3(VAR11, VAR29, VAR4);
            return;
        }
    }
    if (FUN6(VAR14))
    {
        FUN3(VAR11, VAR30, VAR1);
        return;
    }
    VAR21 = VAR14->VAR31 | VAR32;
    VAR15 = VAR14->VAR33;
    if (!VAR15 && VAR5 == VAR34)
    {
        VAR5 = VAR35;
    }
    VAR18 = FUN7(VAR2);
    if (!VAR18)
    {
        FUN3(VAR11, VAR29, VAR4);
        return;
    }
    if (VAR5 == VAR35 && VAR7 != VAR27)
    {
        assert(VAR4 && VAR19);
        FUN8(VAR14, &VAR22);
        VAR22 *= 512;
        VAR23 = FUN9(VAR2, VAR4, NULL, NULL, NULL, VAR22, VAR21);
    }
    else
    {
        switch (VAR7)
        {
        case VAR27:
            VAR23 = 0;
            break;
        case VAR24:
            VAR23 = FUN9(VAR2, VAR4, VAR15->VAR36, VAR15->VAR19->VAR28, NULL, -1, VAR21);
            break;
        default:
            FUN10();
        }
    }
    if (VAR23)
    {
        FUN3(VAR11, VAR37, VAR2);
        return;
    }
    VAR16 = FUN11("");
    VAR23 = FUN12(VAR16, VAR2, VAR21 | VAR38, VAR19);
    if (VAR23 < 0)
    {
        FUN13(VAR16);
        FUN3(VAR11, VAR37, VAR2);
        return;
    }
    if (FUN14(VAR16, &VAR12) >= 0 && VAR12.VAR39 != 0 && VAR12.VAR39 >= VAR40 * 512)
    {
        VAR23 = FUN15(VAR16);
        if (VAR23 < 0)
        {
            FUN13(VAR16);
            FUN3(VAR11, VAR37, VAR2);
            return;
        }
    }
    FUN16(VAR14, VAR16, VAR9, VAR5, VAR41, VAR14, &VAR20);
    if (VAR20 != NULL)
    {
        FUN13(VAR16);
        FUN17(VAR11, VAR20);
        return;
    }
    FUN18(FUN19(VAR14));
}