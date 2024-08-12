static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR3, VAR5, VAR2);
    VAR6 *VAR7;
    uint16_t VAR8 = 0;
    int VAR9;
    VAR6 *VAR10;
    VAR7 = VAR4->VAR5.VAR11;
    FUN3(VAR7, VAR12);
    FUN4(VAR7, VAR13);
    *(VAR14 *)(VAR7 + 0x04) = FUN5(0x0407);
    *(VAR14 *)(VAR7 + 0x06) = FUN5(0x0010);
    VAR7[0x08] = 0x03;
    FUN6(VAR7, VAR15);
    VAR7[0x0c] = 0x10;
    VAR7[0x3d] = 1;
    VAR4->VAR16 = FUN7(VAR17, VAR18, VAR4);
    FUN8((VAR1 *)VAR4, 0, VAR19, VAR20, VAR21);
    FUN8((VAR1 *)VAR4, 1, VAR22, VAR23, VAR24);
    memmove(VAR4->VAR25, VAR26, sizeof VAR26);
    FUN9(&VAR4->VAR27.VAR10);
    VAR10 = VAR4->VAR27.VAR10.VAR28;
    for (VAR9 = 0; VAR9 < 3; VAR9++)
        VAR4->VAR25[VAR9] = (VAR10[2 * VAR9 + 1] << 8) | VAR10[2 * VAR9];
    for (VAR9 = 0; VAR9 < VAR29; VAR9++)
        VAR8 += VAR4->VAR25[VAR9];
    VAR8 = (VAR14)VAR30 - VAR8;
    VAR4->VAR25[VAR29] = VAR8;
    VAR4->VAR31 = FUN10(VAR32, VAR4->VAR27.VAR33, VAR4->VAR27.VAR34, VAR4->VAR5.VAR35.VAR36->VAR37, VAR4->VAR5.VAR35.VAR38, VAR39, VAR40, NULL, NULL, VAR41, VAR4);
    VAR4->VAR31->VAR42 = VAR43;
    FUN11(VAR4->VAR31, VAR10);
    FUN12(-1, &VAR44, VAR4);
    FUN13(VAR4);
    if (!VAR2->VAR35.VAR45)
    {
        static int VAR46 = 0;
        if (!VAR46)
        {
            FUN14("");
            VAR46 = 1;
        }
    }
    return 0;
}