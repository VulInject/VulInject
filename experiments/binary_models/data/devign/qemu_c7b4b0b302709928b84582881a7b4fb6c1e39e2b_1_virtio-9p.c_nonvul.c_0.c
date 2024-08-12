static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    if (VAR5 < 0)
    {
        goto VAR6;
    }
    if (VAR4->VAR7.VAR8 != -1)
    {
        if (FUN2(VAR2, &VAR4->VAR9->VAR10, VAR4->VAR7.VAR8) < 0)
        {
            VAR5 = -VAR11;
        }
    }
    FUN3(VAR2, VAR4, VAR5);
    return;
VAR6:
    FUN4(&VAR4->VAR7);
    FUN5(VAR2, VAR4->VAR12, VAR5);
    FUN6(VAR4);
}