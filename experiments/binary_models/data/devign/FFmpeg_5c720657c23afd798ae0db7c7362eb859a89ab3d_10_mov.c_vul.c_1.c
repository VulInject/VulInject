static int FUN1(VAR1 *VAR2, VAR3 *VAR4, MOVAtom VAR5)
{
    AVIOContext VAR6;
    VAR7 *VAR8;
    VAR7 *VAR9;
    long VAR10, VAR11;
    int VAR12 = -1;
    FUN2(VAR4);
    if (FUN3(VAR4) != FUN4('', '', '', ''))
        return VAR13;
    if (FUN3(VAR4) != FUN4('', '', '', ''))
    {
        FUN5(VAR2->VAR14, VAR15, "");
        return VAR13;
    }
    FUN2(VAR4);
    if (FUN3(VAR4) != FUN4('', '', '', ''))
        return VAR13;
    VAR11 = FUN2(VAR4);
    VAR10 = VAR5.VAR16 - 6 * 4;
    VAR8 = FUN6(VAR10);
    if (!VAR8)
        return FUN7(VAR17);
    VAR9 = FUN6(VAR11);
    if (!VAR9)
    {
        FUN8(VAR8);
        return FUN7(VAR17);
    }
    FUN9(VAR4, VAR8, VAR10);
    if (FUN10(VAR9, (VAR18 *)&VAR11, (const VAR19 *)VAR8, VAR10) != VAR20)
        goto VAR21;
    if (FUN11(&VAR6, VAR9, VAR11, 0, NULL, NULL, NULL, NULL) != 0)
        goto VAR21;
    VAR5.VAR22 = FUN4('', '', '', '');
    VAR5.VAR16 = VAR11;
    VAR12 = FUN12(VAR2, &VAR6, VAR5);
VAR21:
    FUN8(VAR9);
    FUN8(VAR8);
    return VAR12;
    FUN5(VAR2->VAR14, VAR15, "");
    return FUN7(VAR23);
}