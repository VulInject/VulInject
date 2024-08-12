static int FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    int VAR7, VAR8, VAR9, VAR10;
    for (VAR7 = 0; VAR7 < VAR3; VAR7++)
    {
        VAR11 *VAR12 = &VAR5->VAR12[VAR7];
        double *VAR13, *VAR14;
        VAR13 = FUN2((VAR12->VAR15[0] + 1) * 2, sizeof(*VAR13));
        VAR14 = FUN2((VAR12->VAR15[1] + 1) * 2, sizeof(*VAR14));
        if (!VAR13 || !VAR14)
            return FUN3(VAR16);
        VAR10 = FUN4(VAR2, VAR12->VAR17[0], VAR12->VAR15[0], VAR14);
        if (VAR10 < 0)
        {
            FUN5(VAR13);
            FUN5(VAR14);
            return VAR10;
        }
        VAR10 = FUN4(VAR2, VAR12->VAR17[1], VAR12->VAR15[1], VAR13);
        if (VAR10 < 0)
        {
            FUN5(VAR13);
            FUN5(VAR14);
            return VAR10;
        }
        for (VAR9 = 0, VAR8 = VAR12->VAR15[1]; VAR8 >= 0; VAR9++, VAR8--)
        {
            VAR12->VAR17[1][VAR9] = VAR13[2 * VAR8];
        }
        VAR12->VAR15[1]++;
        for (VAR9 = 0, VAR8 = VAR12->VAR15[0]; VAR8 >= 0; VAR9++, VAR8--)
        {
            VAR12->VAR17[0][VAR9] = VAR14[2 * VAR8];
        }
        VAR12->VAR15[0]++;
        FUN5(VAR13);
        FUN5(VAR14);
    }
    return 0;
}