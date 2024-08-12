static VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5, target_ulong VAR6, VAR1 *VAR7)
{
    target_ulong VAR8 = VAR7[0];
    target_ulong VAR9 = VAR7[1];
    VAR10 *VAR11;
    int VAR12, VAR13, VAR14 = 1;
    if (!FUN2(VAR3, VAR9))
    {
        return VAR15;
    }
    if (VAR8 & VAR16)
    {
        VAR9 &= ~(3ULL);
        VAR14 = 4;
    }
    VAR11 = VAR5->VAR17 + (VAR9 * VAR18);
    for (VAR12 = 0, VAR13 = 0; VAR12 < VAR14; VAR12++)
    {
        VAR7[VAR13++] = FUN3(VAR11);
        VAR7[VAR13++] = FUN3(VAR11 + (VAR18 / 2));
        VAR11 += VAR18;
    }
    return VAR19;
}