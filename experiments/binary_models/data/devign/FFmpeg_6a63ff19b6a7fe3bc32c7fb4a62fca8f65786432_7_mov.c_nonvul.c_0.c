static int FUN1(VAR1 *VAR2, VAR3 *VAR4, MOVAtom VAR5)
{
    VAR6 *VAR7;
    VAR8 *VAR9;
    unsigned int VAR10, VAR11;
    if (VAR2->VAR12->VAR13 < 1)
        return 0;
    VAR7 = VAR2->VAR12->VAR14[VAR2->VAR12->VAR13 - 1];
    VAR9 = VAR7->VAR15;
    FUN2(VAR4);
    FUN3(VAR4);
    VAR11 = FUN4(VAR4);
    if (VAR11 >= VAR16 / sizeof(VAR17))
        return -1;
    VAR9->VAR18 = FUN5(VAR11 * sizeof(VAR17));
    if (!VAR9->VAR18)
        return FUN6(VAR19);
    VAR9->VAR20 = VAR11;
    if (VAR5.VAR21 == FUN7('', '', '', ''))
        for (VAR10 = 0; VAR10 < VAR11; VAR10++)
            VAR9->VAR18[VAR10] = FUN4(VAR4);
    else if (VAR5.VAR21 == FUN7('', '', '', ''))
        for (VAR10 = 0; VAR10 < VAR11; VAR10++)
            VAR9->VAR18[VAR10] = FUN8(VAR4);
    else
        return -1;
    return 0;
}