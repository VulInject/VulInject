static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    int VAR8;
    VAR8 = FUN2(VAR2);
    if (VAR8)
        return VAR8;
    VAR6->VAR9 = FUN3(2 * VAR2->VAR10 * sizeof(*VAR6->VAR9));
    if (!VAR6->VAR9)
        return FUN4(VAR11);
    VAR6->VAR12 = VAR6->VAR9 + VAR2->VAR10 * sizeof(*VAR6->VAR12);
    if (VAR4->VAR13)
    {
    }
    else
    {
        if (FUN5(VAR2) < 0)
        {
            FUN6(VAR2);
            FUN7(VAR2);
            return VAR14;
        }
    }
    return 0;
}