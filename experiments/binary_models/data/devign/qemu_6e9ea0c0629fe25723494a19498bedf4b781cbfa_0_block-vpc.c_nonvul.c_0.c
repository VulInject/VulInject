static int FUN1(const char *VAR1, int64_t VAR2, const char *VAR3, int VAR4)
{
    uint8_t VAR5[1024];
    struct VAR6 *VAR7 = (struct VAR6 *)VAR5;
    struct VAR8 *VAR9 = (struct VAR8 *)VAR5;
    int VAR10, VAR11;
    uint16_t VAR12;
    uint8_t VAR13;
    uint8_t VAR14;
    size_t VAR15, VAR16;
    if (VAR3 != NULL)
        return -VAR17;
    VAR10 = open(VAR1, VAR18 | VAR19 | VAR20 | VAR21, 0644);
    if (VAR10 < 0)
        return -VAR22;
    if (FUN2(VAR2, &VAR12, &VAR13, &VAR14))
        return -VAR23;
    VAR2 = (VAR24)VAR12 * VAR13 * VAR14;
    memset(VAR5, 0, 1024);
    strncpy(VAR7->VAR25, "", 8);
    strncpy(VAR7->VAR26, "", 4);
    strncpy(VAR7->VAR27, "", 4);
    VAR7->VAR28 = FUN3(0x02);
    VAR7->VAR29 = FUN3(0x00010000);
    VAR7->VAR30 = FUN4(VAR31);
    VAR7->VAR32 = FUN3(FUN5(NULL) - VAR33);
    VAR7->VAR34 = FUN6(0x0005);
    VAR7->VAR35 = FUN6(0x0003);
    VAR7->VAR36 = FUN4(VAR2 * 512);
    VAR7->VAR37 = FUN4(VAR2 * 512);
    VAR7->VAR12 = FUN6(VAR12);
    VAR7->VAR13 = VAR13;
    VAR7->VAR14 = VAR14;
    VAR7->VAR38 = FUN3(VAR39);
    VAR7->VAR40 = FUN3(FUN7(VAR5, VAR31));
    VAR15 = 0x200000;
    VAR16 = (VAR2 + VAR15 / 512) / (VAR15 / 512);
    if (write(VAR10, VAR5, VAR31) != VAR31)
        return -VAR22;
    if (FUN8(VAR10, 1536 + ((VAR16 * 4 + 511) & ~511), VAR41) < 0)
        return -VAR22;
    if (write(VAR10, VAR5, VAR31) != VAR31)
        return -VAR22;
    if (FUN8(VAR10, 3 * 512, VAR41) < 0)
        return -VAR22;
    memset(VAR5, 0xFF, 512);
    for (VAR11 = 0; VAR11 < (VAR16 * 4 + 511) / 512; VAR11++)
        if (write(VAR10, VAR5, 512) != 512)
            return -VAR22;
    memset(VAR5, 0, 1024);
    strncpy(VAR9->VAR42, "", 8);
    VAR9->VAR30 = FUN4(0xFFFFFFFF);
    VAR9->VAR43 = FUN4(3 * 512);
    VAR9->VAR29 = FUN3(0x00010000);
    VAR9->VAR15 = FUN3(VAR15);
    VAR9->VAR44 = FUN3(VAR16);
    VAR9->VAR40 = FUN3(FUN7(VAR5, 1024));
    if (FUN8(VAR10, 512, VAR41) < 0)
        return -VAR22;
    if (write(VAR10, VAR5, 1024) != 1024)
        return -VAR22;
    close(VAR10);
    return 0;
}