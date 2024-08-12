static int FUN1(VAR1 *VAR2, VAR3 *VAR4, MOVAtom VAR5)
{
    int VAR6;
    int64_t VAR7;
    int VAR8 = FUN2(VAR4);
    FUN3(VAR4);
    if (VAR8 == 1)
    {
        VAR7 = FUN4(VAR4);
        FUN4(VAR4);
    }
    else
    {
        VAR7 = FUN5(VAR4);
        FUN5(VAR4);
    }
    FUN6(&VAR2->VAR9->VAR10, VAR7);
    VAR2->VAR11 = FUN5(VAR4);
    if (VAR2->VAR11 <= 0)
    {
        FUN7(VAR2->VAR9, VAR12, "", VAR2->VAR11);
        VAR2->VAR11 = 1;
    }
    FUN7(VAR2->VAR9, VAR13, "", VAR2->VAR11);
    VAR2->VAR14 = (VAR8 == 1) ? FUN4(VAR4) : FUN5(VAR4);
    if (VAR2->VAR11 > 0 && !VAR2->VAR15)
        VAR2->VAR9->VAR14 = FUN8(VAR2->VAR14, VAR16, VAR2->VAR11);
    FUN5(VAR4);
    FUN9(VAR4);
    FUN10(VAR4, 10);
    for (VAR6 = 0; VAR6 < 3; VAR6++)
    {
        VAR2->VAR17[VAR6][0] = FUN5(VAR4);
        VAR2->VAR17[VAR6][1] = FUN5(VAR4);
        VAR2->VAR17[VAR6][2] = FUN5(VAR4);
    }
    FUN5(VAR4);
    FUN5(VAR4);
    FUN5(VAR4);
    FUN5(VAR4);
    FUN5(VAR4);
    FUN5(VAR4);
    FUN5(VAR4);
    return 0;
}