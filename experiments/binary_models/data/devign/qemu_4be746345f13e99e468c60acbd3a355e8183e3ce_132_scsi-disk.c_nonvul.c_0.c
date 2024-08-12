static void FUN1(void *VAR1, int VAR2)
{
    VAR3 *VAR4 = (VAR3 *)VAR1;
    VAR5 *VAR6 = FUN2(VAR5, VAR7, VAR4->VAR8.VAR9);
    assert(VAR4->VAR8.VAR10 != NULL);
    VAR4->VAR8.VAR10 = NULL;
    FUN3(FUN4(VAR6->VAR7.VAR11.VAR12), &VAR4->VAR13);
    if (VAR4->VAR8.VAR14)
    {
        FUN5(&VAR4->VAR8);
        goto VAR15;
    }
    if (VAR2 < 0)
    {
        if (FUN6(VAR4, -VAR2))
        {
            goto VAR15;
        }
    }
    FUN7(&VAR4->VAR8, VAR16);
VAR15:
    FUN8(&VAR4->VAR8);
}