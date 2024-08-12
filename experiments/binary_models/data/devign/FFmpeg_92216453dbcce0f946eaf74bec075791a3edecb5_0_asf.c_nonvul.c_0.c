static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = &VAR2->VAR7;
    uint32_t VAR8, VAR9;
    int VAR10 = 9;
    int VAR11;
    VAR11 = FUN2(VAR7);
    if (VAR11 != 0x82)
    {
        if (!FUN3(VAR7))
            FUN4(VAR2, VAR12, "" VAR13 "", VAR11, FUN5(VAR7));
    }
    if ((VAR11 & 0x0f) == 2)
    {
        if (FUN6(VAR7) != 0)
        {
            if (!FUN3(VAR7))
                FUN4(VAR2, VAR12, "");
            return VAR14;
        }
        VAR10 += 2;
    }
    VAR4->VAR15 = FUN2(VAR7);
    VAR4->VAR16 = FUN2(VAR7);
    FUN7(VAR4->VAR15 >> 5, VAR8, VAR4->VAR17);
    FUN7(VAR4->VAR15 >> 1, VAR9, 0);
    FUN7(VAR4->VAR15 >> 3, VAR9, 0);
    if (VAR8 >= (1U << 29))
    {
        FUN4(VAR2, VAR12, "" VAR13 "", VAR8, FUN5(VAR7));
        return -1;
    }
    if (VAR9 >= VAR8)
    {
        FUN4(VAR2, VAR12, "" VAR13 "", VAR9, FUN5(VAR7));
        return -1;
    }
    VAR4->VAR18 = FUN8(VAR7);
    FUN6(VAR7);
    if (VAR4->VAR15 & 0x01)
    {
        VAR4->VAR19 = FUN2(VAR7);
        VAR10++;
        VAR4->VAR20 = VAR4->VAR19 & 0x3f;
    }
    else
    {
        VAR4->VAR20 = 1;
        VAR4->VAR19 = 0x80;
    }
    VAR4->VAR21 = VAR8 - VAR9 - VAR10;
    if (VAR8 < VAR4->VAR22.VAR23)
        VAR9 += VAR4->VAR22.VAR23 - VAR8;
    VAR4->VAR24 = VAR9;
    FUN9("", VAR4->VAR17, VAR4->VAR24, VAR4->VAR21);
    return 0;
}