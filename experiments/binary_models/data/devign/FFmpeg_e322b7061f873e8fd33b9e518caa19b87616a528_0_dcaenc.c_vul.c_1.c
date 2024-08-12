static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int *VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    const VAR11 *VAR12;
    int VAR13, VAR14;
    if ((VAR13 = FUN2(VAR2, VAR4, VAR9->VAR15, 0)) < 0)
        return VAR13;
    VAR12 = (const VAR11 *)VAR6->VAR16[0];
    FUN3(VAR9, VAR12);
    if (VAR9->VAR17)
        FUN4(VAR9, VAR12);
    FUN5(VAR9, VAR12);
    FUN6(VAR9);
    FUN7(VAR9);
    FUN8(VAR9);
    FUN9(VAR9);
    FUN10(VAR9, VAR12);
    FUN11(&VAR9->VAR18, VAR4->VAR16, VAR4->VAR19);
    FUN12(VAR9);
    FUN13(VAR9);
    for (VAR14 = 0; VAR14 < VAR20; VAR14++)
        FUN14(VAR9, VAR14);
    FUN15(&VAR9->VAR18);
    VAR4->VAR21 = VAR6->VAR21;
    VAR4->VAR22 = FUN16(VAR2, VAR6->VAR23);
    VAR4->VAR19 = VAR9->VAR15 + 1;
    *VAR7 = 1;
    return 0;