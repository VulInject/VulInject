static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5)
{
    const VAR6 *VAR7 = VAR2->VAR8;
    const unsigned VAR9 = VAR7->VAR10 * VAR7->VAR11;
    VAR12 *VAR13 = VAR2->VAR14;
    const VAR15 *VAR16 = VAR7->VAR17;
    struct VAR18 *VAR19 = VAR16->VAR20;
    VAR21 *VAR22 = NULL;
    void *VAR23;
    VAR24 *VAR25, *VAR26, *VAR27;
    unsigned VAR28;
    void *VAR29;
    unsigned VAR30;
    unsigned VAR31;
    unsigned VAR32;
    unsigned VAR33;
    if (VAR2->VAR34 == VAR35)
    {
        VAR33 = VAR36;
        if (FUN2(FUN3(FUN4(VAR13)->VAR37, FUN4(VAR13)->VAR38, VAR33, &VAR28, &VAR23)))
            return -1;
    }
    if (VAR2->VAR34 == VAR39)
    {
        VAR33 = VAR40;
        if (FUN2(FUN5(FUN6(VAR13)->VAR38, VAR33, &VAR23, &VAR28)))
            return -1;
    }
    VAR25 = VAR23;
    VAR26 = VAR25;
    VAR27 = VAR25 + VAR28;
    for (VAR32 = 0; VAR32 < VAR19->VAR41; VAR32++)
    {
        static const uint8_t VAR42[] = {0, 0, 1};
        static const unsigned VAR43 = sizeof(VAR42);
        unsigned VAR44, VAR45;
        assert(FUN7(VAR21, VAR46) == FUN7(VAR47, VAR46));
        assert(FUN7(VAR21, VAR48) == FUN7(VAR47, VAR48));
        if (FUN8(VAR2, VAR13))
            VAR22 = &VAR19->VAR49[VAR32];
        else
            VAR22 = (VAR21 *)&VAR19->VAR50[VAR32];
        VAR44 = VAR22->VAR46;
        VAR45 = VAR22->VAR48;
        if (VAR43 + VAR45 > VAR27 - VAR26)
        {
            FUN9(VAR2, VAR51, "");
            break;
        }
        VAR22->VAR46 = VAR26 - VAR25;
        VAR22->VAR48 = VAR43 + VAR45;
        if (!FUN8(VAR2, VAR13))
        {
            VAR47 *VAR50 = (VAR47 *)VAR22;
            if (VAR32 < VAR19->VAR41 - 1)
                VAR50->VAR52 = VAR50[1].VAR53 - VAR50[0].VAR53;
            else
                VAR50->VAR52 = VAR9 - VAR50->VAR53;
        }
        memcpy(VAR26, VAR42, VAR43);
        VAR26 += VAR43;
        memcpy(VAR26, &VAR19->VAR54[VAR44], VAR45);
        VAR26 += VAR45;
    }
    VAR31 = FUN10(128 - ((VAR26 - VAR25) & 127), VAR27 - VAR26);
    if (VAR22 && VAR31 > 0)
    {
        memset(VAR26, 0, VAR31);
        VAR26 += VAR31;
        VAR22->VAR48 += VAR31;
    }
    if (VAR2->VAR34 == VAR35)
        if (FUN2(FUN11(FUN4(VAR13)->VAR37, FUN4(VAR13)->VAR38, VAR33)))
            return -1;
    if (VAR2->VAR34 == VAR39)
        if (FUN2(FUN12(FUN6(VAR13)->VAR38, VAR33)))
            return -1;
    if (VAR32 < VAR19->VAR41)
        return -1;
    if (VAR2->VAR34 == VAR35)
    {
        VAR55 *VAR56 = VAR4;
        memset(VAR56, 0, sizeof(*VAR56));
        VAR56->VAR57 = VAR33;
        VAR56->VAR58 = VAR26 - VAR25;
        VAR56->VAR59 = VAR9;
        VAR33 = VAR60;
    }
    if (VAR2->VAR34 == VAR39)
    {
        VAR61 *VAR62 = VAR4;
        memset(VAR62, 0, sizeof(*VAR62));
        VAR62->VAR63 = VAR33;
        VAR62->VAR58 = VAR26 - VAR25;
        VAR62->VAR59 = VAR9;
        VAR33 = VAR64;
    }
    if (FUN8(VAR2, VAR13))
    {
        VAR29 = VAR19->VAR49;
        VAR30 = VAR19->VAR41 * sizeof(*VAR19->VAR49);
    }
    else
    {
        VAR29 = VAR19->VAR50;
        VAR30 = VAR19->VAR41 * sizeof(*VAR19->VAR50);
    }
    assert((VAR4->VAR58 & 127) == 0);
    return FUN13(VAR2, VAR13, VAR5, VAR33, VAR29, VAR30, VAR9);
}