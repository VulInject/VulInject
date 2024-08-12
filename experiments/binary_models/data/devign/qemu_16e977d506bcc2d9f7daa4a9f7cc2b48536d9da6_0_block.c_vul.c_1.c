void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6;
    VAR3 *VAR7 = NULL;
    int VAR8;
    if (!VAR2->VAR9)
    {
        return;
    }
    if (!(VAR2->VAR10 & VAR11))
    {
        return;
    }
    VAR2->VAR10 &= ~VAR11;
    if (VAR2->VAR9->VAR12)
    {
        VAR2->VAR9->FUN1(VAR2, &VAR7);
        if (VAR7)
        {
            VAR2->VAR10 |= VAR11;
            FUN2(VAR4, VAR7);
            return;
        }
    }
    FUN3(VAR6, &VAR2->VAR13, VAR14)
    {
        FUN1(VAR6->VAR2, &VAR7);
        if (VAR7)
        {
            VAR2->VAR10 |= VAR11;
            FUN2(VAR4, VAR7);
            return;
        }
    }
    VAR8 = FUN4(VAR2, VAR2->VAR15);
    if (VAR8 < 0)
    {
        VAR2->VAR10 |= VAR11;
        FUN5(VAR4, -VAR8, "");
        return;
    }
}