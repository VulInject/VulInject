static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int (*VAR5)(VAR1 *, VAR3 *);
    VAR6 *VAR7 = VAR2->VAR8;
    VAR9 *VAR8 = VAR2->VAR10;
    VAR3 *VAR11 = NULL;
    int VAR12;
    VAR13 *VAR14 = VAR2->VAR8->VAR15;
    int64_t VAR16;
    if (VAR2->VAR17)
    {
        FUN2(&VAR4);
        return VAR18;
    }
    if (!(VAR5 = VAR8->VAR5))
        VAR5 = VAR19;
    if (VAR8->VAR20 && !FUN3(VAR4))
    {
        FUN4(VAR2->VAR8, VAR21, "");
        switch (VAR2->VAR22)
        {
        case VAR23:
            VAR11 = FUN5(VAR2, VAR2->VAR24, VAR2->VAR25);
            break;
        case VAR26:
            VAR11 = FUN6(VAR2, VAR4->VAR27);
            break;
        default:
            VAR12 = FUN7(VAR28);
            goto VAR29;
        }
        if (!VAR11)
        {
            VAR12 = FUN7(VAR30);
            goto VAR29;
        }
        VAR12 = FUN8(VAR11, VAR4);
        if (VAR12 < 0)
            goto VAR29;
        switch (VAR2->VAR22)
        {
        case VAR23:
            FUN9(VAR11->VAR31, VAR11->VAR32, (const VAR33 **)VAR4->VAR31, VAR4->VAR32, VAR4->VAR34, VAR4->VAR35, VAR4->VAR36);
            break;
        case VAR26:
            FUN10(VAR11->VAR37, VAR4->VAR37, 0, 0, VAR4->VAR27, FUN11(VAR4->VAR38), VAR4->VAR34);
            break;
        default:
            VAR12 = FUN7(VAR28);
            goto VAR29;
        }
        FUN2(&VAR4);
    }
    else
        VAR11 = VAR4;
    while (VAR14 && VAR14->VAR39 <= VAR11->VAR16 * FUN12(VAR2->VAR40))
    {
        FUN4(VAR2->VAR8, VAR21, "", VAR14->VAR39, VAR14->VAR41, VAR14->VAR42);
        FUN13(VAR2->VAR8, VAR14->VAR41, VAR14->VAR42, 0, 0, VAR14->VAR43);
        FUN14(VAR2->VAR8);
        VAR14 = VAR2->VAR8->VAR15;
    }
    VAR16 = VAR11->VAR16;
    if (VAR7->VAR44)
    {
        int64_t VAR45 = FUN15(VAR11);
        VAR7->VAR46[VAR47] = VAR2->VAR48;
        VAR7->VAR46[VAR49] = VAR16 == VAR50 ? VAR51 : VAR16 * FUN12(VAR2->VAR40);
        VAR7->VAR46[VAR52] = VAR2->VAR24;
        VAR7->VAR46[VAR53] = VAR2->VAR25;
        VAR7->VAR46[VAR54] = VAR45 == -1 ? VAR51 : VAR45;
        VAR7->VAR55 = FUN16(FUN17(VAR7->VAR56, VAR7->VAR46, NULL)) < 0.5;
        if (VAR7->VAR55 && (VAR7->VAR57->VAR43 & VAR58))
            VAR5 = VAR19;
    }
    VAR12 = FUN18(VAR2, VAR11);
    VAR2->VAR48++;
    FUN19(VAR2, VAR16);
    return VAR12;
VAR29:
    FUN2(&VAR11);
    FUN2(&VAR4);
    return VAR12;
}