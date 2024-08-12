static VAR1 FUN1(VAR2 *VAR3, int64_t VAR4, int VAR5, int *VAR6)
{
    VAR7 *VAR8 = VAR3->VAR9;
    uint32_t VAR10, VAR11, VAR12;
    int64_t VAR13, VAR14;
    VAR13 = FUN2(VAR8, VAR4, VAR5, VAR6);
    if (VAR13 > 0)
    {
        return VAR13;
    }
    VAR10 = VAR4 / VAR8->VAR15;
    if (VAR10 >= VAR8->VAR16)
    {
        return -VAR17;
    }
    VAR11 = FUN3(VAR4 + *VAR6, VAR8->VAR15) - VAR10;
    VAR14 = VAR11 * VAR8->VAR15;
    if (VAR8->VAR18 + VAR14 > FUN4(VAR3->VAR19->VAR3) >> VAR20)
    {
        int VAR21;
        VAR14 += VAR8->VAR22;
        if (VAR8->VAR23 == VAR24)
        {
            VAR21 = FUN5(VAR3->VAR19, VAR8->VAR18 << VAR20, VAR14 << VAR20, 0);
        }
        else
        {
            VAR21 = FUN6(VAR3->VAR19, (VAR8->VAR18 + VAR14) << VAR20);
        }
        if (VAR21 < 0)
        {
            return VAR21;
        }
    }
    for (VAR12 = 0; VAR12 < VAR11; VAR12++)
    {
        VAR8->VAR25[VAR10 + VAR12] = FUN7(VAR8->VAR18 / VAR8->VAR26);
        VAR8->VAR18 += VAR8->VAR15;
        FUN8(VAR8->VAR27, FUN9(VAR10 + VAR12) / VAR8->VAR28, 1);
    }
    return FUN10(VAR8, VAR10) + VAR4 % VAR8->VAR15;
}