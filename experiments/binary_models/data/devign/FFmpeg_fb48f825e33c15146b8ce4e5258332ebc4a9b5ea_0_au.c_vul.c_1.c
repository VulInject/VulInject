static int FUN1(VAR1 *VAR2)
{
    int VAR3;
    unsigned int VAR4;
    VAR5 *VAR6 = VAR2->VAR6;
    unsigned int VAR7, VAR8, VAR9;
    int VAR10;
    enum AVCodecID VAR11;
    VAR12 *VAR13;
    VAR4 = FUN2(VAR6);
    if (VAR4 != FUN3('', '', '', ''))
        return -1;
    VAR3 = FUN4(VAR6);
    FUN4(VAR6);
    VAR7 = FUN4(VAR6);
    VAR9 = FUN4(VAR6);
    VAR8 = FUN4(VAR6);
    VAR11 = FUN5(VAR14, VAR7);
    if (VAR11 == VAR15)
    {
        FUN6(VAR2, "", VAR7);
        return VAR16;
    }
    VAR10 = FUN7(VAR11);
    if (!VAR10)
    {
        FUN6(VAR2, "");
        return VAR16;
    }
    if (VAR8 == 0 || VAR8 > 64)
    {
        FUN8(VAR2, VAR17, "", VAR8);
        return VAR18;
    }
    if (VAR3 >= 24)
    {
        FUN9(VAR6, VAR3 - 24);
    }
    VAR13 = FUN10(VAR2, NULL);
    if (!VAR13)
        return -1;
    VAR13->VAR11->VAR19 = VAR20;
    VAR13->VAR11->VAR21 = VAR7;
    VAR13->VAR11->VAR22 = VAR11;
    VAR13->VAR11->VAR8 = VAR8;
    VAR13->VAR11->VAR23 = VAR9;
    VAR13->VAR11->VAR24 = VAR8 * VAR9 * VAR10;
    VAR13->VAR11->VAR25 = VAR8 * VAR10 >> 3;
    FUN11(VAR13, 64, 1, VAR9);
    return 0;
}