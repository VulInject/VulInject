static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5, int VAR6)
{
    static const uint8_t VAR7[] = {0x00, 0x00, 0x02, 0x80, 0x01};
    int VAR8, VAR9;
    if (VAR5 < 0x280)
        return -1;
    if (memcmp(VAR4, VAR7, 5))
    {
        FUN2(VAR2->VAR10, VAR11, "");
        return -1;
    }
    if (VAR4[5] & 2)
    {
        VAR2->VAR12 = VAR4[5] & 1;
        VAR2->VAR13.VAR14 = 1;
        VAR2->VAR13.VAR15 = VAR6 ^ VAR2->VAR12;
        FUN2(VAR2->VAR10, VAR16, "", VAR4[5] & 3, VAR2->VAR12);
    }
    VAR2->VAR17 = FUN3(VAR4 + 0x18);
    VAR2->VAR18 = FUN3(VAR4 + 0x1a);
    FUN4(VAR2->VAR10, "", VAR2->VAR18, VAR2->VAR17);
    if (VAR4[0x21] & 0x40)
    {
        VAR2->VAR10->VAR19 = VAR20;
        VAR2->VAR10->VAR21 = 10;
        if (VAR2->VAR22 != 10)
        {
            FUN5(&VAR2->VAR23, VAR2->VAR10);
            VAR2->VAR22 = 10;
            VAR2->VAR24 = VAR25;
        }
    }
    else
    {
        VAR2->VAR10->VAR19 = VAR26;
        VAR2->VAR10->VAR21 = 8;
        if (VAR2->VAR22 != 8)
        {
            FUN5(&VAR2->VAR23, VAR2->VAR10);
            VAR2->VAR22 = 8;
            VAR2->VAR24 = VAR27;
        }
    }
    VAR9 = FUN6(VAR4 + 0x28);
    FUN4(VAR2->VAR10, "", VAR9);
    if (FUN7(VAR2, VAR9) < 0)
        return -1;
    if (VAR5 < VAR2->VAR28->VAR29)
    {
        FUN2(VAR2->VAR10, VAR11, "");
        return -1;
    }
    VAR2->VAR30 = VAR2->VAR18 >> 4;
    VAR2->VAR31 = VAR4[0x16d];
    FUN4(VAR2->VAR10, "", VAR2->VAR30, VAR2->VAR31);
    if ((VAR2->VAR17 + 15) >> 4 == VAR2->VAR31 && VAR2->VAR13.VAR14)
        VAR2->VAR17 <<= 1;
    if (VAR2->VAR31 > 68 || (VAR2->VAR31 << VAR2->VAR13.VAR14) > (VAR2->VAR17 + 15) >> 4)
    {
        FUN2(VAR2->VAR10, VAR11, "", VAR2->VAR31);
        return -1;
    }
    for (VAR8 = 0; VAR8 < VAR2->VAR31; VAR8++)
    {
        VAR2->VAR32[VAR8] = FUN6(VAR4 + 0x170 + (VAR8 << 2));
        FUN4(VAR2->VAR10, "", VAR2->VAR32[VAR8]);
        if (VAR5 < VAR2->VAR32[VAR8] + 0x280)
        {
            FUN2(VAR2->VAR10, VAR11, "");
            return -1;
        }
    }
    return 0;
}