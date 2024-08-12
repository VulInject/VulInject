static int FUN1(VAR1 *VAR2, VAR3 *VAR4, MOVAtom VAR5)
{
    const int VAR6 = FUN2(VAR4);
    const int VAR7 = FUN2(VAR4);
    VAR8 *VAR9;
    if (VAR2->VAR10->VAR11 < 1)
        return 0;
    VAR9 = VAR2->VAR10->VAR12[VAR2->VAR10->VAR11 - 1];
    if (VAR7 != 0)
    {
        if ((VAR9->VAR13.VAR7 != 1 || VAR9->VAR13.VAR6) && (VAR7 != VAR9->VAR13.VAR7 || VAR6 != VAR9->VAR13.VAR6))
            FUN3(VAR2->VAR10, VAR14, "", VAR9->VAR13.VAR6, VAR9->VAR13.VAR7);
        VAR9->VAR13.VAR6 = VAR6;
        VAR9->VAR13.VAR7 = VAR7;
    }
    return 0;
}