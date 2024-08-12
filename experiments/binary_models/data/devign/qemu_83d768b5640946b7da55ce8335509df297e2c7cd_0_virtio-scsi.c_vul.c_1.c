static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = VAR2->VAR7;
    VAR8 *VAR9 = FUN2(VAR4);
    FUN3(&VAR2->VAR10, 0, &VAR2->VAR11, VAR2->VAR12);
    FUN4(VAR7, &VAR2->VAR13, VAR2->VAR14.VAR15 + VAR2->VAR10.VAR15);
    if (VAR4->VAR16 && !VAR4->VAR17)
    {
        FUN5(VAR9, VAR2);
    }
    else
    {
        FUN6(VAR9, VAR7);
    }
    if (VAR2->VAR18)
    {
        VAR2->VAR18->VAR19 = NULL;
        FUN7(VAR2->VAR18);
    }
    FUN8(VAR2);
}