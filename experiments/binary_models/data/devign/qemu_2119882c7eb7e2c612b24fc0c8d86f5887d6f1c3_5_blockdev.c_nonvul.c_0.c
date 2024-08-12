static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR5, VAR2, VAR2);
    VAR7 *VAR8;
    if (FUN3(VAR2, VAR4) < 0)
    {
        return;
    }
    VAR8 = VAR2->VAR8->VAR9.VAR10.VAR11;
    VAR6->VAR12 = FUN4(VAR8->VAR13, VAR8->VAR14, &VAR6->VAR15, VAR4);
    if (!VAR6->VAR12)
    {
        return;
    }
    if (FUN5(VAR6->VAR12))
    {
        FUN6(VAR4, "");
        return;
    }
    else if (!FUN7(VAR6->VAR12))
    {
        FUN6(VAR4, "");
        return;
    }
    FUN8(VAR6->VAR12, &VAR6->VAR16);
}