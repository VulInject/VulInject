static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR4->VAR7[0];
    VAR8 *VAR9 = VAR4->VAR7[0]->VAR10;
    VAR8 *VAR11 = VAR4->VAR7[1]->VAR10;
    int VAR12 = VAR11->VAR13;
    int64_t VAR14 = (VAR6->VAR15.VAR16 * 0x10000LL) / VAR6->VAR15.VAR17;
    int VAR18 = VAR11->VAR19 / 1000;
    int VAR20 = FUN2(VAR9->VAR19 / 1000, 800 - VAR18);
    if (VAR14 < 0 || VAR14 > VAR21)
    {
        FUN3(VAR4, VAR22, "", VAR14 / (double)0x10000);
        return FUN4(VAR23);
    }
    FUN5(VAR2, 0x94);
    FUN6(VAR2, "");
    FUN6(VAR2, "");
    FUN5(VAR2, 0x21d24fce);
    FUN5(VAR2, 0xbb88695c);
    FUN5(VAR2, 0xfac9c740);
    FUN5(VAR2, 0x0);
    FUN5(VAR2, 0x3);
    FUN5(VAR2, 0x14);
    FUN6(VAR2, "");
    FUN5(VAR2, 0x0);
    FUN5(VAR2, 0x0);
    FUN5(VAR2, 0x0);
    FUN5(VAR2, 0x2c);
    FUN6(VAR2, "");
    FUN5(VAR2, 0x0);
    FUN5(VAR2, 0x2);
    FUN6(VAR2, "");
    FUN5(VAR2, 0x20f);
    FUN5(VAR2, 0x0);
    FUN5(VAR2, VAR18);
    FUN5(VAR2, VAR18);
    FUN5(VAR2, VAR12);
    FUN5(VAR2, VAR11->VAR24);
    FUN5(VAR2, 0x34);
    FUN6(VAR2, "");
    FUN5(VAR2, 0x0);
    FUN5(VAR2, 0x1);
    if (VAR9->VAR25 == VAR26)
    {
        FUN6(VAR2, "");
        FUN7(VAR2, 0x014D);
        FUN7(VAR2, 0x0015);
    }
    else
    {
        FUN6(VAR2, "");
        FUN7(VAR2, 0x0000);
        FUN7(VAR2, 0x0103);
    }
    FUN5(VAR2, 0x0);
    FUN5(VAR2, VAR20);
    FUN5(VAR2, VAR20);
    FUN5(VAR2, VAR14);
    FUN5(VAR2, VAR14);
    FUN7(VAR2, VAR9->VAR27);
    FUN7(VAR2, VAR9->VAR28);
    FUN5(VAR2, 0x010001);
    return 0;
}