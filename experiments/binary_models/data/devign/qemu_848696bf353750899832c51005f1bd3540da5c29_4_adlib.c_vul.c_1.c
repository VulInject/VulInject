static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8 = FUN3(VAR7, 1);
    struct audsettings VAR9;
    if (VAR10)
    {
        FUN4(VAR4, "");
        return;
    }
    VAR10 = VAR6;
    if (FUN5(1, 14318180, VAR6->VAR11))
    {
        FUN4(VAR4, "", VAR6->VAR11);
        return;
    }
    else
    {
        FUN6(0, VAR12, 0);
        VAR6->VAR13 = 1;
    }
    VAR6->VAR14 = FUN7(VAR15, 3579545, VAR6->VAR11);
    if (!VAR6->VAR14)
    {
        FUN4(VAR4, "", VAR6->VAR11);
        return;
    }
    else
    {
        FUN8(VAR6->VAR14, VAR12, 0);
        VAR6->VAR13 = 1;
    }
    VAR9.VAR11 = VAR6->VAR11;
    VAR9.VAR16 = VAR17;
    VAR9.VAR18 = VAR19;
    VAR9.VAR20 = VAR21;
    FUN9("", &VAR6->VAR22);
    VAR6->VAR23 = FUN10(&VAR6->VAR22, VAR6->VAR23, "", VAR6, VAR24, &VAR9);
    if (!VAR6->VAR23)
    {
        FUN11(VAR6);
        FUN4(VAR4, "");
        return;
    }
    VAR6->VAR25 = FUN12(VAR6->VAR23) >> VAR17;
    VAR6->VAR26 = FUN13(VAR6->VAR25 << VAR17);
    VAR27[0].VAR28 = VAR6->VAR29;
    VAR27[1].VAR28 = VAR6->VAR29 + 8;
    FUN14(VAR8, FUN15(VAR6), VAR27, VAR6, "");
    FUN16(VAR8, FUN17(&VAR6->VAR30), 0);
}