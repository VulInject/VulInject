FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    int VAR5 = FUN3(FUN2(VAR2), VAR6, &VAR2->VAR7, VAR8, VAR9, &VAR2->VAR7, VAR8, VAR10, 0xA0);
    if (VAR5 < 0)
    {
        FUN4(VAR5);
    }
    else
    {
        if (!FUN5(VAR2, VAR6))
        {
            FUN6(VAR4, &VAR2->VAR7, &VAR2->VAR7);
        }
    }
}