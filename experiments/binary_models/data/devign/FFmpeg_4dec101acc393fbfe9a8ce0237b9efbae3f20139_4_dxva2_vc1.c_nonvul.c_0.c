static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5)
{
    const VAR6 *VAR7 = VAR2->VAR8;
    VAR9 *VAR10 = FUN2(VAR2);
    const VAR11 *VAR12 = &VAR7->VAR12;
    struct VAR13 *VAR14 = VAR12->VAR15->VAR16;
    VAR17 *VAR18 = &VAR14->VAR19;
    static const uint8_t VAR20[] = {0, 0, 1, 0x0d};
    const unsigned VAR21 = VAR2->VAR22 == VAR23 ? sizeof(VAR20) : 0;
    const unsigned VAR24 = VAR18->VAR25 / 8;
    const unsigned VAR26 = 128 - ((VAR21 + VAR24) & 127);
    const unsigned VAR27 = VAR21 + VAR24 + VAR26;
    void *VAR28;
    VAR29 *VAR30;
    unsigned VAR31;
    int VAR32;
    unsigned VAR33;
    if (FUN3(VAR2))
    {
        VAR33 = VAR34;
        if (FUN4(FUN5(FUN6(VAR10)->VAR35, FUN6(VAR10)->VAR36, VAR33, &VAR31, &VAR28)))
            return -1;
    }
    if (VAR2->VAR37 == VAR38)
    {
        VAR33 = VAR39;
        if (FUN4(FUN7(FUN8(VAR10)->VAR36, VAR33, &VAR28, &VAR31)))
            return -1;
    }
    VAR30 = VAR28;
    VAR32 = VAR27 <= VAR31 ? 0 : -1;
    if (!VAR32)
    {
        if (VAR21 > 0)
            memcpy(VAR30, VAR20, VAR21);
        memcpy(VAR30 + VAR21, VAR14->VAR40 + VAR18->VAR41, VAR24);
        if (VAR26 > 0)
            memset(VAR30 + VAR21 + VAR24, 0, VAR26);
        VAR18->VAR25 = 8 * VAR27;
    }
    if (FUN3(VAR2))
        if (FUN4(FUN9(FUN6(VAR10)->VAR35, FUN6(VAR10)->VAR36, VAR33)))
            return -1;
    if (VAR2->VAR37 == VAR38)
        if (FUN4(FUN10(FUN8(VAR10)->VAR36, VAR33)))
            return -1;
    if (VAR32)
        return VAR32;
    if (FUN3(VAR2))
    {
        VAR42 *VAR43 = VAR4;
        memset(VAR43, 0, sizeof(*VAR43));
        VAR43->VAR44 = VAR33;
        VAR43->VAR45 = VAR27;
        VAR43->VAR46 = VAR12->VAR47 * VAR12->VAR48;
        VAR33 = VAR49;
    }
    if (VAR2->VAR37 == VAR38)
    {
        VAR50 *VAR51 = VAR4;
        memset(VAR51, 0, sizeof(*VAR51));
        VAR51->VAR52 = VAR33;
        VAR51->VAR45 = VAR27;
        VAR51->VAR46 = VAR12->VAR47 * VAR12->VAR48;
        VAR33 = VAR53;
    }
    assert((VAR27 & 127) == 0);
    return FUN11(VAR2, VAR10, VAR5, VAR33, VAR18, sizeof(*VAR18), VAR12->VAR47 * VAR12->VAR48);
}