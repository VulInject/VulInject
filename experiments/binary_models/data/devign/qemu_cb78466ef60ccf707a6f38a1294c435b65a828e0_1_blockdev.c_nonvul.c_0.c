void FUN1(const char *VAR1, const char *VAR2, bool VAR3, const char *VAR4, enum MirrorSyncMode VAR5, bool VAR6, enum NewImageMode VAR7, bool VAR8, int64_t VAR9, bool VAR10, uint32_t VAR11, bool VAR12, int64_t VAR13, bool VAR14, BlockdevOnError VAR15, bool VAR16, BlockdevOnError VAR17, VAR18 **VAR19)
{
    VAR20 *VAR21;
    VAR20 *VAR22, *VAR23;
    VAR24 *VAR25 = NULL;
    VAR18 *VAR26 = NULL;
    int VAR27;
    uint64_t VAR28;
    int VAR29;
    if (!VAR8)
    {
        VAR9 = 0;
    }
    if (!VAR14)
    {
        VAR15 = VAR30;
    }
    if (!VAR16)
    {
        VAR17 = VAR30;
    }
    if (!VAR6)
    {
        VAR7 = VAR31;
    }
    if (!VAR10)
    {
        VAR11 = 0;
    }
    if (!VAR12)
    {
        VAR13 = VAR32;
    }
    if (VAR11 != 0 && (VAR11 < 512 || VAR11 > 1048576 * 64))
    {
        FUN2(VAR19, VAR33, VAR1);
        return;
    }
    if (VAR11 & (VAR11 - 1))
    {
        FUN2(VAR19, VAR33, VAR1);
        return;
    }
    VAR21 = FUN3(VAR1);
    if (!VAR21)
    {
        FUN2(VAR19, VAR34, VAR1);
        return;
    }
    if (!FUN4(VAR21))
    {
        FUN2(VAR19, VAR35, VAR1);
        return;
    }
    if (!VAR3)
    {
        VAR4 = VAR7 == VAR36 ? NULL : VAR21->VAR25->VAR37;
    }
    if (VAR4)
    {
        VAR25 = FUN5(VAR4);
        if (!VAR25)
        {
            FUN2(VAR19, VAR38, VAR4);
            return;
        }
    }
    if (FUN6(VAR21))
    {
        FUN2(VAR19, VAR39, VAR1);
        return;
    }
    VAR27 = VAR21->VAR40 | VAR41;
    VAR22 = VAR21->VAR42;
    if (!VAR22 && VAR5 == VAR43)
    {
        VAR5 = VAR44;
    }
    FUN7(VAR21, &VAR28);
    VAR28 *= 512;
    if (VAR5 == VAR44 && VAR7 != VAR36)
    {
        assert(VAR4 && VAR25);
        FUN8(VAR2, VAR4, NULL, NULL, NULL, VAR28, VAR27, &VAR26, false);
    }
    else
    {
        switch (VAR7)
        {
        case VAR36:
            VAR29 = 0;
            break;
        case VAR31:
            FUN8(VAR2, VAR4, VAR22->VAR45, VAR22->VAR25->VAR37, NULL, VAR28, VAR27, &VAR26, false);
            break;
        default:
            FUN9();
        }
    }
    if (FUN10(&VAR26))
    {
        FUN11(VAR19, VAR26);
        return;
    }
    VAR23 = FUN12("");
    VAR29 = FUN13(VAR23, VAR2, NULL, VAR27 | VAR46, VAR25);
    if (VAR29 < 0)
    {
        FUN14(VAR23);
        FUN15(VAR19, -VAR29, VAR2);
        return;
    }
    FUN16(VAR21, VAR23, VAR9, VAR11, VAR13, VAR5, VAR15, VAR17, VAR47, VAR21, &VAR26);
    if (VAR26 != NULL)
    {
        FUN14(VAR23);
        FUN11(VAR19, VAR26);
        return;
    }
    FUN17(FUN18(VAR21));
}