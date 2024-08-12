static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR2->VAR9;
    int VAR10;
    if (!VAR4->VAR11)
    {
        VAR4->VAR11 = VAR4->VAR12 = FUN2(VAR9);
        if (VAR4->VAR11 <= 0)
            return VAR13;
        if ((VAR10 = FUN3(&VAR4->VAR14, VAR4->VAR11)) < 0)
            return VAR10;
    }
    else
        FUN4(VAR9, 4);
    VAR4->VAR15 = FUN2(VAR9);
    if (VAR6->VAR16 && (VAR6->VAR16 >= 8))
        FUN4(VAR9, VAR6->VAR16 - 8);
    return 0;
}