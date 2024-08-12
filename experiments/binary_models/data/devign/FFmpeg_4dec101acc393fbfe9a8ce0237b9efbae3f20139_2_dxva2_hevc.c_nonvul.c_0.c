static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5)
{
    const VAR6 *VAR7 = VAR2->VAR8;
    VAR9 *VAR10 = FUN2(VAR2);
    const VAR11 *VAR12 = VAR7->VAR13;
    struct VAR14 *VAR15 = VAR12->VAR16;
    VAR17 *VAR18 = NULL;
    void *VAR19;
    VAR20 *VAR21, *VAR22, *VAR23;
    unsigned VAR24;
    void *VAR25;
    unsigned VAR26;
    unsigned VAR27;
    unsigned VAR28;
    unsigned VAR29;
    if (FUN3(VAR2))
    {
        VAR29 = VAR30;
        if (FUN4(FUN5(FUN6(VAR10)->VAR31, FUN6(VAR10)->VAR32, VAR29, &VAR24, &VAR19)))
            return -1;
    }
    if (VAR2->VAR33 == VAR34)
    {
        VAR29 = VAR35;
        if (FUN4(FUN7(FUN8(VAR10)->VAR32, VAR29, &VAR19, &VAR24)))
            return -1;
    }
    VAR21 = VAR19;
    VAR22 = VAR21;
    VAR23 = VAR21 + VAR24;
    for (VAR28 = 0; VAR28 < VAR15->VAR36; VAR28++)
    {
        static const uint8_t VAR37[] = {0, 0, 1};
        static const unsigned VAR38 = sizeof(VAR37);
        unsigned VAR39, VAR40;
        VAR18 = &VAR15->VAR41[VAR28];
        VAR39 = VAR18->VAR42;
        VAR40 = VAR18->VAR43;
        if (VAR38 + VAR40 > VAR23 - VAR22)
        {
            FUN9(VAR2, VAR44, "");
            break;
        }
        VAR18->VAR42 = VAR22 - VAR21;
        VAR18->VAR43 = VAR38 + VAR40;
        memcpy(VAR22, VAR37, VAR38);
        VAR22 += VAR38;
        memcpy(VAR22, &VAR15->VAR45[VAR39], VAR40);
        VAR22 += VAR40;
    }
    VAR27 = FUN10(128 - ((VAR22 - VAR21) & 127), VAR23 - VAR22);
    if (VAR18 && VAR27 > 0)
    {
        memset(VAR22, 0, VAR27);
        VAR22 += VAR27;
        VAR18->VAR43 += VAR27;
    }
    if (FUN3(VAR2))
        if (FUN4(FUN11(FUN6(VAR10)->VAR31, FUN6(VAR10)->VAR32, VAR29)))
            return -1;
    if (VAR2->VAR33 == VAR34)
        if (FUN4(FUN12(FUN8(VAR10)->VAR32, VAR29)))
            return -1;
    if (VAR28 < VAR15->VAR36)
        return -1;
    if (FUN3(VAR2))
    {
        VAR46 *VAR47 = VAR4;
        memset(VAR47, 0, sizeof(*VAR47));
        VAR47->VAR48 = VAR29;
        VAR47->VAR49 = VAR22 - VAR21;
        VAR47->VAR50 = 0;
        VAR29 = VAR51;
    }
    if (VAR2->VAR33 == VAR34)
    {
        VAR52 *VAR53 = VAR4;
        memset(VAR53, 0, sizeof(*VAR53));
        VAR53->VAR54 = VAR29;
        VAR53->VAR49 = VAR22 - VAR21;
        VAR53->VAR50 = 0;
        VAR29 = VAR55;
    }
    VAR25 = VAR15->VAR41;
    VAR26 = VAR15->VAR36 * sizeof(*VAR15->VAR41);
    FUN13(((VAR22 - VAR21) & 127) == 0);
    return FUN14(VAR2, VAR10, VAR5, VAR29, VAR25, VAR26, 0);
}