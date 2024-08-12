static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR3, VAR2, VAR2);
    VAR5 *VAR6 = &VAR4->VAR7;
    FUN3(VAR6);
    FUN4(VAR6, FUN5(VAR2), FUN6(VAR2), true);
    VAR6->VAR8 = FUN7(VAR6->update, VAR6->VAR9, VAR6->VAR10, VAR6);
    FUN8(&VAR4->VAR2, 0, VAR11, &VAR6->VAR12);
    if (VAR4->VAR13 & (1 << VAR14))
    {
        FUN9(&VAR4->VAR15, "", 4096);
        FUN10(&VAR4->VAR16, &VAR17, VAR4, "", VAR18);
        FUN10(&VAR4->VAR19, &VAR20, VAR4, "", VAR21);
        FUN11(&VAR4->VAR15, VAR22, &VAR4->VAR16);
        FUN11(&VAR4->VAR15, VAR23, &VAR4->VAR19);
        FUN8(&VAR4->VAR2, 2, VAR24, &VAR4->VAR15);
    }
    if (!VAR2->VAR25)
    {
        FUN12(VAR6, FUN5(VAR2));
    }
    return 0;
}