FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7;
    VAR8 *VAR9;
    uint16_t VAR10 = 0;
    static const char VAR11[] = "";
    int VAR12;
    VAR7 = (VAR6 *)FUN2(VAR2, "", sizeof(VAR6), VAR5, NULL, NULL);
    VAR9 = VAR7->VAR13.VAR14;
    memset(VAR9, 0, 256);
    FUN3(VAR9, VAR15);
    FUN4(VAR9, VAR16);
    *(VAR17 *)(VAR9 + 0x04) = FUN5(0x0407);
    *(VAR17 *)(VAR9 + 0x06) = FUN5(0x0010);
    VAR9[0x08] = 0x03;
    FUN6(VAR9, VAR18);
    VAR9[0x0c] = 0x10;
    VAR9[0x3d] = 1;
    VAR7->VAR19 = FUN7(0, VAR20, VAR21, VAR7);
    FUN8((VAR22 *)VAR7, 0, VAR23, VAR24, VAR25);
    FUN8((VAR22 *)VAR7, 1, VAR26, VAR27, VAR28);
    memmove(VAR7->VAR29, VAR30, sizeof VAR30);
    for (VAR12 = 0; VAR12 < 3; VAR12++)
        VAR7->VAR29[VAR12] = (VAR4->VAR31[2 * VAR12 + 1] << 8) | VAR4->VAR31[2 * VAR12];
    for (VAR12 = 0; VAR12 < VAR32; VAR12++)
        VAR10 += VAR7->VAR29[VAR12];
    VAR10 = (VAR17)VAR33 - VAR10;
    VAR7->VAR29[VAR32] = VAR10;
    memset(VAR7->VAR34, 0, sizeof VAR7->VAR34);
    memmove(VAR7->VAR34, VAR35, sizeof VAR35);
    memset(VAR7->VAR36, 0, sizeof VAR7->VAR36);
    memmove(VAR7->VAR36, VAR37, sizeof VAR37);
    VAR7->VAR38 = 1;
    memset(&VAR7->VAR39, 0, sizeof VAR7->VAR39);
    VAR7->VAR40 = FUN9(VAR4->VAR41, VAR4->VAR42, VAR4->VAR43, VAR44, VAR45, VAR7);
    VAR7->VAR40->VAR46 = VAR47;
    FUN10(VAR7->VAR40, VAR4->VAR31);
    FUN11(VAR11, -1, 2, VAR48, VAR49, VAR7);
    VAR7->VAR13.VAR50 = VAR51;
    return (VAR22 *)VAR7;
}