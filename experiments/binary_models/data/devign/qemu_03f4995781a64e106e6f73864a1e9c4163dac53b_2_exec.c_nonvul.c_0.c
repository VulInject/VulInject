static VAR1 *FUN1(PhysPageEntry VAR2, hwaddr VAR3, VAR4 *VAR5, VAR1 *VAR6)
{
    VAR7 *VAR8;
    int VAR9;
    for (VAR9 = VAR10 - 1; VAR9 >= 0 && !VAR2.VAR11; VAR9--)
    {
        if (VAR2.VAR12 == VAR13)
        {
            return &VAR6[VAR14];
        }
        VAR8 = VAR5[VAR2.VAR12];
        VAR2 = VAR8[(VAR3 >> (VAR9 * VAR15)) & (VAR16 - 1)];
    }
    return &VAR6[VAR2.VAR12];
}