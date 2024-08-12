static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR4->VAR7;
    VAR8 *VAR9;
    FUN2(VAR6);
    FUN3(VAR6->VAR10);
    VAR6->VAR10 = FUN4(VAR11, FUN5(VAR4), FUN6(VAR4), NULL, 0);
    if (FUN7(VAR4) != VAR6->VAR12.VAR4->VAR13.VAR14)
        FUN8(VAR4);
    FUN3(VAR6->VAR12.VAR15);
    VAR6->VAR12.VAR15 = FUN9(VAR4->VAR16->VAR17);
    VAR6->VAR12.VAR18 = VAR4->VAR16->VAR18;
    memset(VAR6->VAR12.VAR19, 0xFF, sizeof(VAR6->VAR12.VAR19));
    FUN10(VAR9, &VAR6->VAR20, VAR21)
    {
        FUN11(VAR9);
        FUN12(VAR9);
        if (VAR9->VAR6->VAR22)
        {
            FUN13(VAR9);
        }
        memset(VAR9->VAR19, 0xFF, sizeof(VAR9->VAR19));
    }
}