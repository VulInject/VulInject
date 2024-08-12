static int FUN1(VAR1 *VAR2, VAR3 *VAR4, void *VAR5, uint32_t VAR6, uint64_t VAR7)
{
    int VAR8 = 0;
    void *VAR9 = NULL;
    void *VAR10 = NULL;
    void *VAR11, *VAR12;
    unsigned int VAR13;
    int VAR14;
    uint32_t VAR15, VAR16, VAR17;
    uint32_t VAR18 = 0;
    uint32_t VAR19;
    uint32_t VAR20 = 0;
    uint32_t VAR21 = 0;
    uint32_t VAR22 = 0;
    uint32_t VAR23 = 0;
    uint64_t VAR24;
    VAR25 *VAR26;
    VHDXLogEntryHeader VAR27;
    VAR28 *VAR29 = NULL;
    VAR30 *VAR31 = NULL;
    MSGUID VAR32 = {0};
    VAR26 = VAR4->VAR33[VAR4->VAR34];
    if (VAR6 > VAR26->VAR35)
    {
        VAR8 = -VAR36;
        goto VAR37;
    }
    if (FUN2(VAR26->VAR38, VAR39))
    {
        FUN3(&VAR32);
        FUN4(VAR2, VAR4, false, &VAR32);
    }
    else
    {
        VAR8 = -VAR40;
        goto VAR37;
    }
    if (VAR4->VAR41.VAR42 == 0)
    {
        VAR4->VAR41.VAR42 = 1;
    }
    VAR14 = VAR7 % VAR43;
    VAR24 = (VAR7 / VAR43) * VAR43;
    VAR19 = VAR6;
    if (VAR14)
    {
        VAR20 = (VAR43 - VAR14);
        VAR20 = VAR20 > VAR6 ? VAR6 : VAR20;
        VAR19 -= VAR20;
        VAR22++;
    }
    VAR16 = VAR19 / VAR43;
    VAR21 = VAR19 - (VAR16 * VAR43);
    if (VAR21)
    {
        VAR22++;
    }
    VAR16 += VAR22;
    VAR27 = (VAR44){
        .VAR45 = VAR46,
        .VAR47 = VAR4->VAR41.VAR47,
        .VAR48 = VAR4->VAR41.VAR42,
        .VAR49 = VAR16,
        .VAR50 = 0,
        .VAR51 = FUN5(VAR2->VAR52->VAR2),
        .VAR53 = FUN5(VAR2->VAR52->VAR2),
    };
    VAR27.VAR38 = VAR26->VAR38;
    VAR15 = FUN6(VAR27.VAR49);
    VAR17 = (VAR15 + VAR16) * VAR43;
    VAR27.VAR54 = VAR17;
    FUN7(&VAR27);
    VAR9 = FUN8(VAR2, VAR17);
    memcpy(VAR9, &VAR27, sizeof(VAR27));
    VAR29 = VAR9 + sizeof(VAR27);
    VAR31 = VAR9 + (VAR15 * VAR43);
    VAR11 = VAR5;
    VAR10 = FUN8(VAR2, VAR43);
    for (VAR13 = 0; VAR13 < VAR16; VAR13++)
    {
        VAR29->VAR45 = VAR55;
        VAR29->VAR48 = VAR4->VAR41.VAR42;
        VAR29->VAR24 = VAR24;
        if (VAR13 == 0 && VAR20)
        {
            VAR8 = FUN9(VAR2->VAR52, VAR24, VAR10, VAR43);
            if (VAR8 < 0)
            {
                goto VAR37;
            }
            memcpy(VAR10 + VAR14, VAR11, VAR20);
            VAR23 = VAR20;
            VAR12 = VAR10;
        }
        else if (VAR13 == VAR16 - 1 && VAR21)
        {
            VAR8 = FUN9(VAR2->VAR52, VAR24, VAR10 + VAR21, VAR43 - VAR21);
            if (VAR8 < 0)
            {
                goto VAR37;
            }
            memcpy(VAR10, VAR11, VAR21);
            VAR23 = VAR21;
            VAR12 = VAR10;
        }
        else
        {
            VAR23 = VAR43;
            VAR12 = VAR11;
        }
        FUN10(VAR29, VAR31, VAR12, VAR4->VAR41.VAR42);
        VAR11 += VAR23;
        VAR31++;
        VAR29++;
        VAR24 += VAR43;
    }
    FUN11(VAR9, VAR17, FUN12(VAR44, VAR56));
    VAR8 = FUN13(VAR2, &VAR4->VAR41, &VAR18, VAR9, VAR15 + VAR16);
    if (VAR8 < 0)
    {
        goto VAR37;
    }
    if (VAR18 != VAR15 + VAR16)
    {
        VAR8 = -VAR36;
        goto VAR37;
    }
    VAR4->VAR41.VAR42++;
    VAR4->VAR41.VAR47 = VAR4->VAR41.write;
VAR37:
    FUN14(VAR9);
    FUN14(VAR10);
    return VAR8;
}