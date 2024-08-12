static VAR1 FUN1(VAR2 *VAR3, int64_t VAR4)
{
    VAR5 *VAR6 = VAR3->VAR7;
    int VAR8, VAR9;
    VAR9 = FUN2(VAR6, VAR4);
VAR10:
    for (VAR8 = 0; VAR8 < VAR9; VAR8++)
    {
        int64_t VAR11 = VAR6->VAR12++;
        if (FUN3(VAR3, VAR11) != 0)
            goto VAR10;
    }
    FUN4("" VAR13 "" VAR13 "", VAR4, (VAR6->VAR12 - VAR9) << VAR6->VAR14);
    return (VAR6->VAR12 - VAR9) << VAR6->VAR14;
}