static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR4;
    uint8_t VAR5[1024], *VAR6;
    uint32_t VAR7, VAR8;
    int VAR9, VAR10;
    VAR7 = FUN2(VAR4);
    VAR8 = FUN2(VAR4);
    for (VAR9 = 0; VAR9 < sizeof(VAR5) - 1; VAR9++)
    {
        VAR10 = FUN3(VAR4);
        if (VAR10 < 0x20 || VAR10 > 0x7E)
            break;
        else
            VAR5[VAR9] = VAR10;
    }
    VAR5[VAR9] = 0;
    if (VAR10 != 0)
    {
        FUN4(VAR2, VAR11, "", VAR5);
        return -1;
    }
    if (VAR7 >= VAR12)
        return -1;
    if (VAR8 & VAR13)
    {
        uint8_t VAR14[1024];
        VAR15 *VAR16 = FUN5(VAR2, NULL);
        if (!VAR16)
            return FUN6(VAR17);
        FUN7(VAR4, VAR18, VAR14, sizeof(VAR14));
        VAR16->VAR19->VAR20 = FUN8(VAR7 + VAR21);
        if (!VAR16->VAR19->VAR20)
            return FUN6(VAR17);
        if (FUN9(VAR4, VAR16->VAR19->VAR20, VAR7) != VAR7)
        {
            FUN10(&VAR16->VAR19->VAR20);
            return FUN6(VAR22);
        }
        VAR16->VAR19->VAR23 = VAR7;
        FUN11(&VAR16->VAR24, VAR5, VAR14, 0);
        VAR16->VAR19->VAR25 = VAR26;
    }
    else
    {
        VAR6 = FUN8(VAR7 + 1);
        if (!VAR6)
            return FUN6(VAR17);
        VAR10 = FUN9(VAR4, VAR6, VAR7);
        if (VAR10 < 0)
            return VAR10;
        VAR6[VAR10] = 0;
        FUN11(&VAR2->VAR24, VAR5, VAR6, VAR27);
    }
    return 0;
}