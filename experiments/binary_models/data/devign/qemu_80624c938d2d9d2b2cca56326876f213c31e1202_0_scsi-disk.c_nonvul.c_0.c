static void FUN1(void *VAR1, int VAR2)
{
    VAR3 *VAR4 = (VAR3 *)VAR1;
    VAR5 *VAR6 = FUN2(VAR5, VAR7, VAR4->VAR8.VAR9);
    FUN3(VAR6->VAR7.VAR10.VAR11, &VAR4->VAR12);
    if (VAR2 < 0)
    {
        if (FUN4(VAR4, -VAR2))
        {
            goto VAR13;
        }
    }
    VAR4->VAR14 += VAR4->VAR15;
    VAR4->VAR15 = 0;
    FUN5(&VAR4->VAR8, VAR16);
VAR13:
    if (!VAR4->VAR8.VAR17)
    {
        FUN6(&VAR4->VAR8);
    }
}