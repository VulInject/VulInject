static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int VAR7, int VAR8)
{
    static const uint8_t VAR9[] = {0x00, 0x00, 0x02, 0x80, 0x01};
    static const uint8_t VAR10[] = {0x00, 0x00, 0x02, 0x80, 0x02};
    int VAR11, VAR12, VAR13;
    if (VAR7 < 0x280)
        return VAR14;
    if (memcmp(VAR6, VAR9, 5) && memcmp(VAR6, VAR10, 5))
    {
        FUN2(VAR2->VAR15, VAR16, "");
        return VAR14;
    }
    if (VAR6[5] & 2)
    {
        VAR2->VAR17 = VAR6[5] & 1;
        VAR4->VAR18 = 1;
        VAR4->VAR19 = VAR8 ^ VAR2->VAR17;
        FUN2(VAR2->VAR15, VAR20, "", VAR6[5] & 3, VAR2->VAR17);
    }
    VAR2->VAR21 = FUN3(VAR6 + 0x18);
    VAR2->VAR22 = FUN3(VAR6 + 0x1a);
    FUN4(VAR2->VAR15, "", VAR2->VAR22, VAR2->VAR21);
    VAR2->VAR23 = 0;
    if (VAR6[0x4] == 0x2)
    {
        VAR2->VAR24 = VAR25;
        VAR2->VAR15->VAR26 = 10;
        if (VAR2->VAR27 != 10)
        {
            FUN5(&VAR2->VAR28, VAR2->VAR15);
            FUN6(&VAR2->VAR29, VAR2->VAR15);
            VAR2->VAR27 = 10;
            VAR2->VAR30 = VAR31;
        }
        VAR2->VAR23 = 1;
    }
    else if (VAR6[0x21] & 0x40)
    {
        VAR2->VAR24 = VAR32;
        VAR2->VAR15->VAR26 = 10;
        if (VAR2->VAR27 != 10)
        {
            FUN5(&VAR2->VAR28, VAR2->VAR15);
            FUN6(&VAR2->VAR29, VAR2->VAR15);
            VAR2->VAR27 = 10;
            VAR2->VAR30 = VAR33;
        }
    }
    else
    {
        VAR2->VAR24 = VAR34;
        VAR2->VAR15->VAR26 = 8;
        if (VAR2->VAR27 != 8)
        {
            FUN5(&VAR2->VAR28, VAR2->VAR15);
            FUN6(&VAR2->VAR29, VAR2->VAR15);
            VAR2->VAR27 = 8;
            VAR2->VAR30 = VAR35;
        }
    }
    VAR12 = FUN7(VAR6 + 0x28);
    FUN4(VAR2->VAR15, "", VAR12);
    if ((VAR13 = FUN8(VAR2, VAR12)) < 0)
        return VAR13;
    if (VAR7 < VAR2->VAR36->VAR37)
    {
        FUN2(VAR2->VAR15, VAR16, "");
        return VAR14;
    }
    VAR2->VAR38 = VAR2->VAR22 >> 4;
    VAR2->VAR39 = VAR6[0x16d];
    FUN4(VAR2->VAR15, "", VAR2->VAR38, VAR2->VAR39);
    if ((VAR2->VAR21 + 15) >> 4 == VAR2->VAR39 && VAR4->VAR18)
        VAR2->VAR21 <<= 1;
    if (VAR2->VAR39 > 68 || (VAR2->VAR39 << VAR4->VAR18) > (VAR2->VAR21 + 15) >> 4)
    {
        FUN2(VAR2->VAR15, VAR16, "", VAR2->VAR39);
        return VAR14;
    }
    for (VAR11 = 0; VAR11 < VAR2->VAR39; VAR11++)
    {
        VAR2->VAR40[VAR11] = FUN7(VAR6 + 0x170 + (VAR11 << 2));
        FUN4(VAR2->VAR15, "", VAR2->VAR40[VAR11]);
        if (VAR7 < VAR2->VAR40[VAR11] + 0x280LL)
        {
            FUN2(VAR2->VAR15, VAR16, "");
            return VAR14;
        }
    }
    return 0;
}