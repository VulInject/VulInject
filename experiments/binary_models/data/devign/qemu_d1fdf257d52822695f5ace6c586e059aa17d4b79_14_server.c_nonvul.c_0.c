static VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5, int VAR6)
{
    VAR7 *VAR8 = VAR3->VAR8;
    ssize_t VAR9, VAR10;
    FUN2(FUN3());
    FUN4(&VAR8->VAR11);
    VAR8->VAR12 = FUN5();
    if (!VAR6)
    {
        VAR9 = FUN6(VAR8->VAR13, VAR5);
    }
    else
    {
        FUN7(VAR8->VAR13, true);
        VAR9 = FUN6(VAR8->VAR13, VAR5);
        if (VAR9 >= 0)
        {
            VAR10 = FUN8(VAR8->VAR13, VAR3->VAR14, VAR6, NULL);
            if (VAR10 < 0)
            {
                VAR9 = -VAR15;
            }
        }
        FUN7(VAR8->VAR13, false);
    }
    VAR8->VAR12 = NULL;
    FUN9(&VAR8->VAR11);
    return VAR9;
}