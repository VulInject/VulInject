static int FUN1(VAR1 *VAR2, VAR3 *VAR4, MOVAtom VAR5)
{
    VAR6 *VAR7;
    VAR8 *VAR9;
    int VAR10, VAR11;
    if (VAR2->VAR12->VAR13 < 1)
        return 0;
    VAR7 = VAR2->VAR12->VAR14[VAR2->VAR12->VAR13 - 1];
    VAR9 = VAR7->VAR15;
    FUN2(VAR4);
    FUN3(VAR4);
    VAR11 = FUN4(VAR4);
    if (VAR11 <= 0)
    {
        FUN5(VAR2->VAR12, VAR16, "", VAR11);
        return VAR17;
    }
    if (VAR9->VAR18)
    {
        FUN5(VAR2->VAR12, VAR16, "");
        return VAR17;
    }
    VAR9->VAR18 = FUN6(VAR11, sizeof(*VAR9->VAR18));
    if (!VAR9->VAR18)
        return FUN7(VAR19);
    VAR9->VAR20 = FUN6(VAR11, sizeof(*VAR9->VAR20));
    if (!VAR9->VAR20)
    {
        VAR10 = FUN7(VAR19);
        goto VAR21;
    }
    VAR10 = FUN8(VAR2, VAR4, VAR11);
    if (VAR10 < 0)
        goto VAR21;
    VAR9->VAR22 = VAR11;
    FUN9(&VAR7->VAR23->VAR18);
    VAR7->VAR23->VAR20 = VAR9->VAR20[0];
    if (VAR9->VAR20[0])
    {
        VAR7->VAR23->VAR18 = FUN10(VAR9->VAR20[0] + VAR24);
        if (!VAR7->VAR23->VAR18)
            return FUN7(VAR19);
        memcpy(VAR7->VAR23->VAR18, VAR9->VAR18[0], VAR9->VAR20[0]);
    }
    return FUN11(VAR2, VAR4, VAR7, VAR9);
VAR21:
    FUN9(&VAR9->VAR18);
    FUN9(&VAR9->VAR20);
    return VAR10;
}