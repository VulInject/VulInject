static int FUN1(const char *VAR1, VAR2 *VAR3, VAR4 **VAR5)
{
    int VAR6 = 0;
    uint64_t VAR7 = 0;
    uint32_t VAR8;
    size_t VAR9 = VAR10;
    uint32_t VAR11 = VAR12;
    VdiHeader VAR13;
    size_t VAR14;
    size_t VAR15;
    int64_t VAR16 = 0;
    VAR4 *VAR17 = NULL;
    VAR18 *VAR19 = NULL;
    VAR20 *VAR21 = NULL;
    FUN2("");
    VAR7 = FUN3(VAR3, VAR22, 0);
    VAR9 = FUN3(VAR3, VAR23, VAR10);
    if (FUN4(VAR3, VAR24, false))
    {
        VAR11 = VAR25;
    }
    if (VAR7 > VAR26)
    {
        VAR6 = -VAR27;
        FUN5(VAR5, "" VAR28 "" VAR28 "", VAR7, VAR26);
        goto VAR29;
    }
    VAR6 = FUN6(VAR1, VAR3, &VAR17);
    if (VAR6 < 0)
    {
        FUN7(VAR5, VAR17);
        goto VAR29;
    }
    VAR6 = FUN8(&VAR19, VAR1, NULL, NULL, VAR30 | VAR31, NULL, &VAR17);
    if (VAR6 < 0)
    {
        FUN7(VAR5, VAR17);
        goto VAR29;
    }
    VAR8 = (VAR7 + VAR9 - 1) / VAR9;
    VAR15 = VAR8 * sizeof(VAR20);
    VAR15 = ((VAR15 + VAR32 - 1) & ~(VAR32 - 1));
    memset(&VAR13, 0, sizeof(VAR13));
    FUN9(VAR13.VAR33, sizeof(VAR13.VAR33), VAR34);
    VAR13.VAR35 = VAR36;
    VAR13.VAR37 = VAR38;
    VAR13.VAR39 = 0x180;
    VAR13.VAR11 = VAR11;
    VAR13.VAR40 = 0x200;
    VAR13.VAR41 = 0x200 + VAR15;
    VAR13.VAR42 = VAR32;
    VAR13.VAR43 = VAR7;
    VAR13.VAR9 = VAR9;
    VAR13.VAR44 = VAR8;
    if (VAR11 == VAR25)
    {
        VAR13.VAR45 = VAR8;
    }
    FUN10(VAR13.VAR46);
    FUN10(VAR13.VAR47);
    FUN11(&VAR13);
    FUN12(&VAR13);
    VAR6 = FUN13(VAR19, VAR16, &VAR13, sizeof(VAR13));
    if (VAR6 < 0)
    {
        FUN5(VAR5, "", VAR1);
        goto VAR29;
    }
    VAR16 += sizeof(VAR13);
    if (VAR15 > 0)
    {
        VAR21 = FUN14(VAR15);
        for (VAR14 = 0; VAR14 < VAR8; VAR14++)
        {
            if (VAR11 == VAR25)
            {
                VAR21[VAR14] = VAR14;
            }
            else
            {
                VAR21[VAR14] = VAR48;
            }
        }
        VAR6 = FUN13(VAR19, VAR16, VAR21, VAR15);
        if (VAR6 < 0)
        {
            FUN5(VAR5, "", VAR1);
            goto VAR29;
        }
        VAR16 += VAR15;
    }
    if (VAR11 == VAR25)
    {
        VAR6 = FUN15(VAR19, VAR16 + VAR8 * VAR9);
        if (VAR6 < 0)
        {
            FUN5(VAR5, "", VAR1);
            goto VAR29;
        }
    }
VAR29:
    FUN16(VAR19);
    FUN17(VAR21);
    return VAR6;
}