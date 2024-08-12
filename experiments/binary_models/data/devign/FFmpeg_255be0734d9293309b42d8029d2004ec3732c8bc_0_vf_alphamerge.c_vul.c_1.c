static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR6->VAR10;
    int VAR11 = (VAR2 == VAR6->VAR12[1]);
    struct VAR13 *VAR14 = (VAR11 ? &VAR9->VAR15 : &VAR9->VAR16);
    FUN2(VAR6, VAR14, VAR4);
    while (1)
    {
        VAR3 *VAR17, *VAR18;
        if (!FUN3(&VAR9->VAR16, 0) || !FUN3(&VAR9->VAR15, 0))
            break;
        VAR17 = FUN4(&VAR9->VAR16);
        VAR18 = FUN4(&VAR9->VAR15);
        VAR9->VAR19 = 0;
        FUN5(VAR6, VAR17, VAR18);
        FUN6(VAR6->VAR20[0], FUN7(VAR17, ~0));
        FUN8(VAR18);
    }
    return 0;
}