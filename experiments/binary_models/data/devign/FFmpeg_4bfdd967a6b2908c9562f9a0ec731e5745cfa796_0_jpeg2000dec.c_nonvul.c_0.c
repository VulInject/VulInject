static int FUN1(VAR1 *VAR2)
{
    int VAR3 = 0;
    int VAR4;
    for (VAR4 = 0; VAR4 < VAR2->VAR5 * VAR2->VAR6; VAR4++)
    {
        VAR7 *VAR8 = VAR2->VAR8 + VAR4;
        if ((VAR3 = FUN2(VAR2, VAR4)) < 0)
            return VAR3;
        VAR2->VAR9 = VAR8->VAR10[0].VAR11;
        if ((VAR3 = FUN3(VAR2, VAR8)) < 0)
            return VAR3;
    }
    return 0;
}