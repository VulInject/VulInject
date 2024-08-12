int FUN1(VAR1 *VAR2, uint32_t VAR3)
{
    uint8_t VAR4 = 0;
    uint16_t VAR5 = 0;
    uint32_t VAR6 = 0;
    int VAR7, VAR8, VAR9;
    VAR10 *VAR11 = &VAR2->VAR12;
    VAR13 *VAR14 = &VAR2->VAR15;
    int VAR16 = -1;
    VAR17 *VAR18 = NULL;
    int VAR19 = 0;
    VAR19 = FUN2(VAR11, VAR3 + VAR20, &VAR4);
    if (VAR19)
    {
        return VAR19;
    }
    if (VAR4 != VAR21)
    {
        FUN3(VAR14, "", VAR4, VAR3);
        return -1;
    }
    FUN4(VAR11, VAR3 + VAR22, &VAR5);
    VAR8 = VAR5 & VAR23;
    VAR8 += 1;
    VAR2->VAR18 = FUN5(sizeof(VAR17) + VAR8 * sizeof(VAR24));
    VAR18 = VAR2->VAR18;
    VAR18->VAR8 = VAR8;
    for (VAR7 = 0; VAR7 < VAR8; VAR7++)
    {
        VAR18->VAR25[VAR7].VAR26 = VAR27;
    }
    FUN6(&VAR18->VAR28, FUN7(VAR2), &VAR29, VAR2, "", (VAR8 * VAR30 + VAR31 - 1) & VAR32);
    FUN8(VAR11, VAR3 + VAR33, &VAR6);
    VAR9 = VAR18->VAR9 = VAR6 & VAR34;
    VAR6 = VAR6 & ~VAR34;
    VAR18->VAR35 = VAR2->VAR12.VAR36[VAR9].VAR37;
    FUN9(VAR14, "" VAR38 "", VAR18->VAR35);
    VAR16 = open("", VAR39);
    if (VAR16 == -1)
    {
        VAR19 = -VAR40;
        FUN3(VAR14, "", strerror(VAR40));
        goto VAR41;
    }
    FUN9(VAR14, "", VAR6, VAR8);
    VAR18->VAR42 = VAR6 & 0x0fff;
    VAR18->VAR43 = FUN10(NULL, VAR8 * VAR30 + VAR18->VAR42, VAR44, VAR45 | VAR46, VAR16, VAR18->VAR35 + VAR6 - VAR18->VAR42);
    close(VAR16);
    if (VAR18->VAR43 == VAR47)
    {
        VAR19 = -VAR40;
        FUN3(VAR14, "", strerror(VAR40));
        goto VAR41;
    }
    VAR18->VAR43 = (char *)VAR18->VAR43 + VAR18->VAR42;
    FUN9(VAR14, "", VAR18->VAR43);
    FUN11(&VAR2->VAR48[VAR9], VAR6, &VAR18->VAR28, 2);
    return 0;
VAR41:
    FUN12(VAR2->VAR18);
    VAR2->VAR18 = NULL;
    return VAR19;
}