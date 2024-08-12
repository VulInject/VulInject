static VAR1 FUN1(VAR2 *VAR3, int64_t VAR4)
{
    VAR5 *VAR6 = VAR3->VAR7;
    uint32_t VAR8, VAR9, VAR10;
    int64_t VAR11;
    int VAR12;
    VAR8 = VAR4 / VAR6->VAR13;
    VAR9 = VAR4 % VAR6->VAR13;
    if (VAR8 >= VAR6->VAR14)
    {
        return -VAR15;
    }
    if (VAR6->VAR16[VAR8] != 0)
    {
        return (VAR17)VAR6->VAR16[VAR8] * VAR6->VAR18 + VAR9;
    }
    VAR11 = FUN2(VAR3->VAR19) >> VAR20;
    if (VAR6->VAR21)
    {
        VAR12 = FUN3(VAR3->VAR19, (VAR11 + VAR6->VAR13) << VAR20);
    }
    else
    {
        VAR12 = FUN4(VAR3->VAR19, VAR11, VAR6->VAR13, 0);
    }
    if (VAR12 < 0)
    {
        return VAR12;
    }
    VAR6->VAR16[VAR8] = VAR11 / VAR6->VAR18;
    VAR10 = FUN5(VAR6->VAR16[VAR8]);
    VAR12 = FUN6(VAR3->VAR19, sizeof(VAR22) + VAR8 * sizeof(VAR10), &VAR10, sizeof(VAR10));
    if (VAR12 < 0)
    {
        VAR6->VAR16[VAR8] = 0;
        return VAR12;
    }
    return (VAR17)VAR6->VAR16[VAR8] * VAR6->VAR18 + VAR9;
}