static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, void *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    const VAR10 *VAR11 = VAR6;
    VAR3 *VAR12 = VAR4;
    int VAR13;
    if (!VAR8->VAR14)
    {
        int VAR15;
        if ((VAR15 = FUN2(VAR2, VAR12, VAR5)) < 0)
        {
            FUN3(VAR2, VAR16, "");
            return FUN4(VAR17);
        }
        VAR12 += VAR15;
        VAR5 -= VAR15;
        VAR8->VAR14 = 1;
    }
    if (VAR5 < VAR18 * VAR2->VAR19)
    {
        FUN3(VAR2, VAR16, "");
        return FUN4(VAR17);
    }
    for (VAR13 = 0; VAR13 < VAR2->VAR19; VAR13++)
    {
        FUN5(VAR8, VAR12, VAR11 + VAR13, &VAR8->VAR20[VAR13], VAR2->VAR19);
        VAR12 += VAR18;
    }
    return VAR12 - VAR4;
}