static int FUN1(const char *VAR1, VAR2 *VAR3)
{
    uint8_t VAR4[1024];
    struct VAR5 *VAR6 = (struct VAR5 *)VAR4;
    struct VAR7 *VAR8 = (struct VAR7 *)VAR4;
    int VAR9, VAR10;
    uint16_t VAR11;
    uint8_t VAR12;
    uint8_t VAR13;
    size_t VAR14, VAR15;
    int64_t VAR16 = 0;
    while (VAR3 && VAR3->VAR17)
    {
        if (!strcmp(VAR3->VAR17, ""))
        {
            VAR16 = VAR3->VAR18.VAR19 / 512;
        }
        VAR3++;
    }
    VAR9 = open(VAR1, VAR20 | VAR21 | VAR22 | VAR23, 0644);
    if (VAR9 < 0)
        return -VAR24;
    if (FUN2(VAR16, &VAR11, &VAR12, &VAR13))
        return -VAR25;
    VAR16 = (VAR26)VAR11 * VAR12 * VAR13;
    memset(VAR4, 0, 1024);
    memcpy(VAR6->VAR27, "", 8);
    memcpy(VAR6->VAR28, "", 4);
    memcpy(VAR6->VAR29, "", 4);
    VAR6->VAR30 = FUN3(0x02);
    VAR6->VAR31 = FUN3(0x00010000);
    VAR6->VAR32 = FUN4(VAR33);
    VAR6->VAR34 = FUN3(FUN5(NULL) - VAR35);
    VAR6->VAR36 = FUN6(0x0005);
    VAR6->VAR37 = FUN6(0x0003);
    VAR6->VAR38 = FUN4(VAR16 * 512);
    VAR6->VAR39 = FUN4(VAR16 * 512);
    VAR6->VAR11 = FUN6(VAR11);
    VAR6->VAR12 = VAR12;
    VAR6->VAR13 = VAR13;
    VAR6->VAR40 = FUN3(VAR41);
    VAR6->VAR42 = FUN3(FUN7(VAR4, VAR33));
    VAR14 = 0x200000;
    VAR15 = (VAR16 + VAR14 / 512) / (VAR14 / 512);
    if (write(VAR9, VAR4, VAR33) != VAR33)
        return -VAR24;
    if (FUN8(VAR9, 1536 + ((VAR15 * 4 + 511) & ~511), VAR43) < 0)
        return -VAR24;
    if (write(VAR9, VAR4, VAR33) != VAR33)
        return -VAR24;
    if (FUN8(VAR9, 3 * 512, VAR43) < 0)
        return -VAR24;
    memset(VAR4, 0xFF, 512);
    for (VAR10 = 0; VAR10 < (VAR15 * 4 + 511) / 512; VAR10++)
        if (write(VAR9, VAR4, 512) != 512)
            return -VAR24;
    memset(VAR4, 0, 1024);
    memcpy(VAR8->VAR44, "", 8);
    VAR8->VAR32 = FUN4(0xFFFFFFFF);
    VAR8->VAR45 = FUN4(3 * 512);
    VAR8->VAR31 = FUN3(0x00010000);
    VAR8->VAR14 = FUN3(VAR14);
    VAR8->VAR46 = FUN3(VAR15);
    VAR8->VAR42 = FUN3(FUN7(VAR4, 1024));
    if (FUN8(VAR9, 512, VAR43) < 0)
        return -VAR24;
    if (write(VAR9, VAR4, 1024) != 1024)
        return -VAR24;
    close(VAR9);
    return 0;
}