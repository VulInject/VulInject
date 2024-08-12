static int FUN1(VAR1 *VAR2, VAR3 *VAR4, MOVAtom VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8->VAR9[VAR2->VAR8->VAR10 - 1]->VAR11;
    int VAR12, VAR13;
    FUN2(VAR4);
    FUN3(VAR4);
    VAR13 = VAR7->VAR13 = FUN4(VAR4);
    for (VAR12 = 0; VAR12 < VAR13; VAR12++)
    {
        int VAR14;
        FUN4(VAR4);
        VAR14 = FUN4(VAR4);
        FUN4(VAR4);
        if (VAR12 == 0 && VAR14 != -1)
            VAR7->VAR15 = VAR14;
    }
    if (VAR13 > 1)
        FUN5(VAR2->VAR8, VAR16, ""
                                      "");
    FUN6(VAR2->VAR8, "", VAR2->VAR8->VAR10 - 1, VAR7->VAR13);
    return 0;
}