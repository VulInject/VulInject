static int FUN1(struct VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR1 *VAR6 = VAR4->VAR7;
    int VAR8 = 0;
    if (!VAR6)
        goto VAR9;
    if (!VAR4->VAR10)
    {
        if ((VAR8 = FUN2(VAR6, 0)) < 0)
            goto VAR9;
        if ((VAR8 = FUN3(&VAR6->VAR11)) < 0)
            goto VAR9;
        VAR8 = FUN4(VAR6);
        FUN5(VAR6->VAR11);
    }
    else
    {
        VAR8 = FUN2(VAR6, 1);
    }
    if (VAR8 < 0)
        goto VAR9;
    if (VAR4->VAR12 && VAR4->VAR13 == VAR14)
    {
        if ((VAR8 = FUN6(VAR2, 1) < 0))
            goto VAR9;
    }
VAR9:
    FUN7(VAR4->VAR11);
    FUN8(VAR6);
    return VAR8;
}