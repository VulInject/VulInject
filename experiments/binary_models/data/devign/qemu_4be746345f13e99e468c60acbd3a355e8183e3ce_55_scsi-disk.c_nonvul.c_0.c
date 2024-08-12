static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR3, VAR5, VAR2->VAR6.VAR7);
    if (VAR2->VAR6.VAR8)
    {
        FUN3(&VAR2->VAR6);
        goto VAR9;
    }
    if (FUN4(&VAR2->VAR6.VAR10))
    {
        FUN5(FUN6(VAR4->VAR5.VAR11.VAR12), &VAR2->VAR13, 0, VAR14);
        VAR2->VAR6.VAR15 = FUN7(VAR4->VAR5.VAR11.VAR12, VAR16, VAR2);
        return;
    }
    FUN8(&VAR2->VAR6, VAR17);
VAR9:
    FUN9(&VAR2->VAR6);
}