void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 **VAR6, VAR7 **VAR8)
{
    VAR5 *VAR9;
    VAR7 *VAR10 = NULL;
    *VAR6 = NULL;
    if (!VAR4->VAR11)
    {
        return;
    }
    if (VAR4->VAR12)
    {
        FUN2(VAR8, "");
        return;
    }
    if (FUN3(VAR4->VAR13.VAR14, VAR15, &VAR10))
    {
        FUN4("", FUN5(VAR10));
        FUN6(VAR10);
        return;
    }
    VAR9 = FUN7(VAR5, 1);
    VAR9->VAR2 = VAR2;
    VAR9->VAR4 = VAR4;
    if (VAR4->VAR16)
    {
        VAR9->VAR16 = VAR4->VAR16;
        FUN8(FUN9(VAR9->VAR16));
    }
    else
    {
        FUN10(&VAR9->VAR17, sizeof(VAR9->VAR17), VAR18);
        FUN11(FUN9(&VAR9->VAR17), &VAR19);
        VAR9->VAR16 = &VAR9->VAR17;
    }
    VAR9->VAR20 = FUN12(VAR9->VAR16);
    FUN2(&VAR9->VAR21, "");
    FUN13(VAR4->VAR13.VAR14, VAR9->VAR21);
    *VAR6 = VAR9;
}