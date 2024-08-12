static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    enum RawDataBlockType VAR10;
    int VAR11;
    int VAR12, VAR13, VAR14;
    FUN2(&VAR8->VAR15, VAR6->VAR3, VAR6->VAR16 * 8);
    VAR14 = 0;
    VAR8->VAR17 = 0;
    VAR12 = 0;
    while (FUN3(&VAR8->VAR15) >= 3)
    {
        VAR10 = FUN4(&VAR8->VAR15, 3);
        if (VAR10 == VAR18)
        {
            VAR14 = 1;
            break;
        }
        if (VAR10 > VAR19 && VAR10 != VAR20)
        {
            FUN5(VAR2, VAR21, "", VAR10);
            return VAR22;
        }
        VAR11 = (VAR10 == VAR19) ? 2 : 1;
        if (VAR12 + VAR11 > VAR8->VAR11 || VAR23[VAR8->VAR11 - 1][VAR12] + VAR11 > VAR8->VAR11)
        {
            FUN5(VAR2, VAR21, "");
            return VAR24;
        }
        VAR13 = FUN6(VAR2, VAR3, VAR23[VAR8->VAR11 - 1][VAR12], VAR11);
        if (VAR13 < 0 && FUN3(&VAR8->VAR15))
            return VAR13;
        VAR12 += VAR11;
    }
    if (!VAR14)
    {
        FUN5(VAR2, VAR21, "");
        return VAR24;
    }
    if (VAR6->VAR16 * 8 - FUN7(&VAR8->VAR15) > 8)
    {
        FUN5(VAR2, VAR21, "", VAR6->VAR16 * 8 - FUN7(&VAR8->VAR15));
    }
    *VAR4 = 1;
    *(VAR25 *)VAR3 = VAR8->VAR26;
    return VAR6->VAR16;
}