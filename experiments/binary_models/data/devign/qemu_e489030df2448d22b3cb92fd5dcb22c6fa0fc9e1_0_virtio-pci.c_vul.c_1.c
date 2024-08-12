static void FUN1(VAR1 *VAR2, VAR3 *VAR4, uint16_t VAR5, uint16_t VAR6, uint16_t VAR7, uint8_t VAR8)
{
    VAR9 *VAR10;
    uint32_t VAR11;
    VAR2->VAR4 = VAR4;
    VAR10 = VAR2->VAR12.VAR10;
    FUN2(VAR10, VAR5);
    FUN3(VAR10, VAR6);
    VAR10[0x08] = VAR13;
    VAR10[0x09] = VAR8;
    FUN4(VAR10, VAR7);
    VAR10[VAR14] = VAR15;
    VAR10[0x2c] = VAR5 & 0xFF;
    VAR10[0x2d] = (VAR5 >> 8) & 0xFF;
    VAR10[0x2e] = VAR4->VAR16 & 0xFF;
    VAR10[0x2f] = (VAR4->VAR16 >> 8) & 0xFF;
    VAR10[0x3d] = 1;
    if (VAR4->VAR17 && !FUN5(&VAR2->VAR12, VAR4->VAR17, 1, 0, VAR18))
    {
        FUN6(&VAR2->VAR12, 1, FUN7(&VAR2->VAR12), VAR19, VAR20);
    }
    else
        VAR4->VAR17 = 0;
    VAR2->VAR12.VAR21 = VAR22;
    VAR11 = FUN8(&VAR2->VAR12) + VAR4->VAR23;
    if (VAR11 & (VAR11 - 1))
        VAR11 = 1 << FUN9(VAR11);
    FUN6(&VAR2->VAR12, 0, VAR11, VAR24, VAR25);
    FUN10(VAR26, VAR2);
    FUN11(VAR4, &VAR27, VAR2);
}