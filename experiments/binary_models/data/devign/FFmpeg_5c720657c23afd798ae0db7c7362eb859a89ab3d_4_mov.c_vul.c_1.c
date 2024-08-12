static int FUN1(VAR1 *VAR2, VAR3 *VAR4, MOVAtom VAR5)
{
    int64_t VAR6;
    int VAR7, VAR8, VAR9, VAR10;
    char VAR11[256 + 1];
    if ((VAR5.VAR12 -= 5) < 0)
        return 0;
    VAR10 = FUN2(VAR4);
    FUN3(VAR4);
    if (VAR10)
        FUN4(VAR4);
    VAR8 = FUN2(VAR4);
    for (VAR7 = 0; VAR7 < VAR8; VAR7++)
    {
        if (VAR5.VAR12 < 9)
            return 0;
        VAR6 = FUN5(VAR4);
        VAR9 = FUN2(VAR4);
        if ((VAR5.VAR12 -= 9 + VAR9) < 0)
            return 0;
        FUN6(VAR4, VAR11, VAR9);
        VAR11[VAR9] = 0;
        FUN7(VAR2->VAR13, VAR7, (VAR14){1, 10000000}, VAR6, VAR15, VAR11);
    }
    return 0;
}