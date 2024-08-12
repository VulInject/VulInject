static int FUN1(VAR1 *VAR2)
{
    uint8_t VAR3[6];
    int VAR4, VAR5;
    int VAR6;
    if (FUN2(&VAR2->VAR7) < 13)
        return VAR8;
    FUN3(&VAR2->VAR7, VAR3, 6);
    if (memcmp(VAR3, VAR9, 6) && memcmp(VAR3, VAR10, 6))
        return VAR8;
    VAR2->VAR11 = -1;
    VAR2->VAR12 = FUN4(&VAR2->VAR7);
    VAR2->VAR13 = FUN4(&VAR2->VAR7);
    if ((unsigned)VAR2->VAR12 > 32767 || (unsigned)VAR2->VAR13 > 32767)
    {
        FUN5(VAR2->VAR14, VAR15, "");
        return VAR8;
    }
    FUN6(&VAR2->VAR16, &VAR2->VAR17, VAR2->VAR12);
    if (!VAR2->VAR16)
        return FUN7(VAR18);
    VAR4 = FUN8(&VAR2->VAR7);
    VAR2->VAR19 = ((VAR4 & 0x70) >> 4) + 1;
    VAR2->VAR20 = (VAR4 & 0x80);
    VAR2->VAR21 = (VAR4 & 0x07) + 1;
    VAR6 = FUN8(&VAR2->VAR7);
    VAR5 = FUN8(&VAR2->VAR7);
    if (VAR5)
    {
        VAR2->VAR14->VAR22.VAR23 = VAR5 + 15;
        VAR2->VAR14->VAR22.VAR24 = 64;
    }
    FUN9(VAR2->VAR14, "", VAR2->VAR12, VAR2->VAR13, VAR2->VAR21, VAR2->VAR20);
    if (VAR2->VAR20)
    {
        VAR2->VAR6 = VAR6;
        VAR5 = 1 << VAR2->VAR21;
        if (FUN2(&VAR2->VAR7) < VAR5 * 3)
            return VAR8;
        FUN10(VAR2, VAR2->VAR25, VAR5);
        VAR2->VAR26 = VAR2->VAR25[VAR2->VAR6];
    }
    else
        VAR2->VAR6 = -1;
    return 0;
}