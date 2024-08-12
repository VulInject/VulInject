static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = NULL;
    int VAR5;
    for (VAR5 = 0; VAR5 < VAR6; VAR5++)
    {
        const VAR7 *VAR8 = FUN2(VAR5);
        if (!(VAR8->VAR9 & VAR10 || VAR5 == VAR11 || VAR5 == VAR12))
            FUN3(&VAR4, VAR5);
    }
    FUN4(VAR2, VAR4);
    return 0;
}