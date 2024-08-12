static VAR1 *FUN1(PhysPageEntry VAR2, hwaddr VAR3, VAR4 *VAR5, VAR1 *VAR6)
{
    VAR7 *VAR8;
    hwaddr VAR9 = VAR3 >> VAR10;
    int VAR11;
    for (VAR11 = VAR12; VAR2.VAR13 && (VAR11 -= VAR2.VAR13) >= 0;)
    {
        if (VAR2.VAR14 == VAR15)
        {
            return &VAR6[VAR16];
        }
        VAR8 = VAR5[VAR2.VAR14];
        VAR2 = VAR8[(VAR9 >> (VAR11 * VAR17)) & (VAR18 - 1)];
    }
    if (VAR6[VAR2.VAR14].VAR19.VAR20 || FUN2(VAR6[VAR2.VAR14].VAR21, VAR6[VAR2.VAR14].VAR19.VAR22, VAR3))
    {
        return &VAR6[VAR2.VAR14];
    }
    else
    {
        return &VAR6[VAR16];
    }
}