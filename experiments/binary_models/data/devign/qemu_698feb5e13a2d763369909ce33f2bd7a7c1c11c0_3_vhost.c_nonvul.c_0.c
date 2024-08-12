static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    struct VAR5 *VAR6 = FUN2(VAR2, struct VAR5, VAR7);
    struct VAR8 *VAR9;
    if (!FUN3(VAR4->VAR10))
    {
        return;
    }
    FUN4(VAR9, &VAR6->VAR11, VAR12)
    {
        if (VAR9->VAR10 == VAR4->VAR10 && VAR9->VAR13.VAR14 == VAR4->VAR15)
        {
            FUN5(VAR9->VAR10, &VAR9->VAR13);
            FUN6(VAR9, VAR12);
            FUN7(VAR9);
            break;
        }
    }
}