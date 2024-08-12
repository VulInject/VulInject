void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *update;
    bool VAR6;
    if (VAR4 && VAR2->VAR4 && FUN2(VAR4) == FUN3(VAR2->VAR4) && FUN4(VAR4) == FUN5(VAR2->VAR4) && FUN6(VAR4) == FUN7(VAR2->VAR4))
    {
        FUN8(1, "", VAR7, VAR2->VAR8.VAR9, FUN2(VAR4), FUN4(VAR4));
        FUN9(&VAR2->VAR10);
        VAR2->VAR11 = VAR4;
        FUN10(VAR2->VAR4);
        VAR2->VAR4 = FUN11(VAR2->VAR11->VAR12);
        FUN12(&VAR2->VAR10);
        FUN13(VAR2, 0, 0, FUN2(VAR4), FUN4(VAR4));
        return;
    }
    FUN8(1, "", VAR7, VAR2->VAR8.VAR9, VAR2->VAR4 ? FUN3(VAR2->VAR4) : 0, VAR2->VAR4 ? FUN5(VAR2->VAR4) : 0, VAR4 ? FUN2(VAR4) : 0, VAR4 ? FUN4(VAR4) : 0);
    memset(&VAR2->VAR13, 0, sizeof(VAR2->VAR13));
    if (VAR2->VAR4)
    {
        FUN10(VAR2->VAR4);
        VAR2->VAR4 = NULL;
        FUN10(VAR2->VAR14);
        VAR2->VAR14 = NULL;
    }
    FUN9(&VAR2->VAR10);
    VAR6 = (VAR2->VAR11 != NULL);
    VAR2->VAR11 = VAR4;
    while ((update = FUN14(&VAR2->VAR15)) != NULL)
    {
        FUN15(&VAR2->VAR15, update, VAR16);
        FUN16(VAR2, update);
    }
    FUN12(&VAR2->VAR10);
    if (VAR6)
    {
        FUN17(VAR2);
    }
    if (VAR2->VAR11)
    {
        VAR2->VAR4 = FUN11(VAR2->VAR11->VAR12);
        VAR2->VAR14 = FUN18(VAR2->VAR11->VAR17, VAR2->VAR11->VAR12);
        FUN19(VAR2);
    }
    memset(&VAR2->VAR13, 0, sizeof(VAR2->VAR13));
    VAR2->VAR18++;
}