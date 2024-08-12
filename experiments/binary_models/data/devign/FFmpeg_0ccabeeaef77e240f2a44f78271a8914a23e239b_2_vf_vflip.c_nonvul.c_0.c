static VAR1 *FUN1(VAR2 *VAR3, int VAR4, int VAR5, int VAR6)
{
    VAR7 *VAR8 = VAR3->VAR9->VAR10;
    VAR1 *VAR11;
    int VAR12;
    if (!(VAR4 & VAR13))
        return FUN2(VAR3, VAR4, VAR5, VAR6);
    VAR11 = FUN3(VAR3->VAR9->VAR14[0], VAR4, VAR5, VAR6);
    for (VAR12 = 0; VAR12 < 4; VAR12++)
    {
        int VAR15 = VAR12 == 1 || VAR12 == 2 ? VAR8->VAR15 : 0;
        if (VAR11->VAR16[VAR12])
        {
            VAR11->VAR16[VAR12] += ((VAR6 >> VAR15) - 1) * VAR11->VAR17[VAR12];
            VAR11->VAR17[VAR12] = -VAR11->VAR17[VAR12];
        }
    }
    return VAR11;
}