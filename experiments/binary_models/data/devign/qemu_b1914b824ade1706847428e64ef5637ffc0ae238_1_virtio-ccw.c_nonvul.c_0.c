static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8 = FUN3(&VAR6->VAR9);
    VAR10 *VAR11 = FUN4(VAR2);
    VAR12 *VAR13 = VAR11->VAR13;
    int VAR14 = FUN5(VAR8);
    VAR15 *VAR16 = FUN6();
    if (!FUN7(VAR8->VAR17, VAR18))
    {
        VAR6->VAR19 = 0;
    }
    if (FUN5(VAR8) > VAR20)
    {
        FUN8(VAR4, ""
                         "",
                   VAR14, VAR20);
        return;
    }
    if (FUN5(VAR8) > VAR16->VAR21)
    {
        FUN8(VAR4, ""
                         "",
                   VAR14, VAR16->VAR21);
        return;
    }
    VAR13->VAR22.VAR23 = FUN9(&VAR6->VAR9);
    FUN10(VAR13->VAR24, VAR13->VAR25, VAR13->VAR26, VAR2->VAR27, 1);
}