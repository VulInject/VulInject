static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5)
{
    const VAR6 *VAR7 = VAR2->VAR8;
    const unsigned VAR9 = VAR7->VAR10 * VAR7->VAR11;
    VAR12 *VAR13 = FUN2(VAR2);
    const VAR14 *VAR15 = VAR7->VAR16;
    struct VAR17 *VAR18 = VAR15->VAR19;
    VAR20 *VAR21 = NULL;
    void *VAR22;
    VAR23 *VAR24, *VAR25, *VAR26;
    unsigned VAR27;
    void *VAR28;
    unsigned VAR29;
    unsigned VAR30;
    unsigned VAR31;
    unsigned VAR32;
    if (FUN3(VAR2))
    {
        VAR32 = VAR33;
        if (FUN4(FUN5(FUN6(VAR13)->VAR34, FUN6(VAR13)->VAR35, VAR32, &VAR27, &VAR22)))
            return -1;
    }
    if (VAR2->VAR36 == VAR37)
    {
        VAR32 = VAR38;
        if (FUN4(FUN7(FUN8(VAR13)->VAR35, VAR32, &VAR22, &VAR27)))
            return -1;
    }
    VAR24 = VAR22;
    VAR25 = VAR24;
    VAR26 = VAR24 + VAR27;
    for (VAR31 = 0; VAR31 < VAR18->VAR39; VAR31++)
    {
        static const uint8_t VAR40[] = {0, 0, 1};
        static const unsigned VAR41 = sizeof(VAR40);
        unsigned VAR42, VAR43;
        assert(FUN9(VAR20, VAR44) == FUN9(VAR45, VAR44));
        assert(FUN9(VAR20, VAR46) == FUN9(VAR45, VAR46));
        if (FUN10(VAR2, VAR13))
            VAR21 = &VAR18->VAR47[VAR31];
        else
            VAR21 = (VAR20 *)&VAR18->VAR48[VAR31];
        VAR42 = VAR21->VAR44;
        VAR43 = VAR21->VAR46;
        if (VAR41 + VAR43 > VAR26 - VAR25)
        {
            FUN11(VAR2, VAR49, "");
            break;
        }
        VAR21->VAR44 = VAR25 - VAR24;
        VAR21->VAR46 = VAR41 + VAR43;
        if (!FUN10(VAR2, VAR13))
        {
            VAR45 *VAR48 = (VAR45 *)VAR21;
            if (VAR31 < VAR18->VAR39 - 1)
                VAR48->VAR50 = VAR48[1].VAR51 - VAR48[0].VAR51;
            else
                VAR48->VAR50 = VAR9 - VAR48->VAR51;
        }
        memcpy(VAR25, VAR40, VAR41);
        VAR25 += VAR41;
        memcpy(VAR25, &VAR18->VAR52[VAR42], VAR43);
        VAR25 += VAR43;
    }
    VAR30 = FUN12(128 - ((VAR25 - VAR24) & 127), VAR26 - VAR25);
    if (VAR21 && VAR30 > 0)
    {
        memset(VAR25, 0, VAR30);
        VAR25 += VAR30;
        VAR21->VAR46 += VAR30;
    }
    if (FUN3(VAR2))
        if (FUN4(FUN13(FUN6(VAR13)->VAR34, FUN6(VAR13)->VAR35, VAR32)))
            return -1;
    if (VAR2->VAR36 == VAR37)
        if (FUN4(FUN14(FUN8(VAR13)->VAR35, VAR32)))
            return -1;
    if (VAR31 < VAR18->VAR39)
        return -1;
    if (FUN3(VAR2))
    {
        VAR53 *VAR54 = VAR4;
        memset(VAR54, 0, sizeof(*VAR54));
        VAR54->VAR55 = VAR32;
        VAR54->VAR56 = VAR25 - VAR24;
        VAR54->VAR57 = VAR9;
        VAR32 = VAR58;
    }
    if (VAR2->VAR36 == VAR37)
    {
        VAR59 *VAR60 = VAR4;
        memset(VAR60, 0, sizeof(*VAR60));
        VAR60->VAR61 = VAR32;
        VAR60->VAR56 = VAR25 - VAR24;
        VAR60->VAR57 = VAR9;
        VAR32 = VAR62;
    }
    if (FUN10(VAR2, VAR13))
    {
        VAR28 = VAR18->VAR47;
        VAR29 = VAR18->VAR39 * sizeof(*VAR18->VAR47);
    }
    else
    {
        VAR28 = VAR18->VAR48;
        VAR29 = VAR18->VAR39 * sizeof(*VAR18->VAR48);
    }
    assert((VAR4->VAR56 & 127) == 0);
    return FUN15(VAR2, VAR13, VAR5, VAR32, VAR28, VAR29, VAR9);
}