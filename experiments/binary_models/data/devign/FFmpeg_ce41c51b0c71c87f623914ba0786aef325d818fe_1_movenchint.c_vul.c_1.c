int FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = &VAR6->VAR10[VAR3];
    VAR8 *VAR11 = &VAR6->VAR10[VAR4];
    VAR12 *VAR13 = VAR2->VAR14[VAR4];
    int VAR15 = FUN2(VAR16);
    VAR17 *VAR18 = FUN3("", NULL, NULL);
    VAR9->VAR19 = FUN4('', '', '', '');
    VAR9->VAR11 = VAR4;
    if (!VAR18)
    {
        VAR15 = FUN2(VAR20);
        goto VAR21;
    }
    VAR9->VAR22 = FUN5();
    if (!VAR9->VAR22)
        goto VAR21;
    VAR9->VAR22->VAR23 = VAR24;
    VAR9->VAR22->VAR25 = VAR9->VAR19;
    VAR9->VAR26 = FUN6();
    if (!VAR9->VAR26)
        goto VAR21;
    VAR9->VAR26->VAR27 = VAR18;
    if (!FUN7(VAR9->VAR26, 0))
        goto VAR21;
    VAR9->VAR26->VAR14[0]->VAR28 = VAR13->VAR28;
    FUN8(VAR9->VAR26->VAR14[0]->VAR29);
    VAR9->VAR26->VAR14[0]->VAR29 = VAR13->VAR29;
    if ((VAR15 = FUN9(&VAR9->VAR26->VAR30, VAR31)) < 0)
        goto VAR21;
    VAR15 = FUN10(VAR9->VAR26);
    if (VAR15)
        goto VAR21;
    VAR9->VAR32 = VAR9->VAR26->VAR14[0]->VAR33.VAR34;
    VAR11->VAR35 = VAR3;
    return 0;
VAR21:
    FUN11(VAR2, VAR36, "", VAR4);
    if (VAR9->VAR26 && VAR9->VAR26->VAR30)
    {
        VAR37 *VAR38;
        FUN12(VAR9->VAR26->VAR30, &VAR38);
        FUN8(VAR38);
    }
    if (VAR9->VAR26 && VAR9->VAR26->VAR14[0])
    {
        FUN13(&VAR9->VAR26->VAR14[0]->VAR39);
        FUN8(VAR9->VAR26->VAR14[0]);
    }
    if (VAR9->VAR26)
    {
        FUN13(&VAR9->VAR26->VAR39);
        FUN8(VAR9->VAR26->VAR7);
        FUN14(&VAR9->VAR26);
    }
    FUN14(&VAR9->VAR22);
    VAR9->VAR32 = 90000;
    return VAR15;