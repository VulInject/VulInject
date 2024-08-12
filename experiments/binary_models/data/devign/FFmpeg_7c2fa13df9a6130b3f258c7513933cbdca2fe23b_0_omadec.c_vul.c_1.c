static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR2->VAR10[0];
    int VAR11 = VAR9->VAR12->VAR13;
    int VAR14 = VAR9->VAR12->VAR15 >> 3;
    int64_t VAR16 = FUN2(VAR2->VAR17);
    int VAR18 = FUN3(VAR2->VAR17, VAR4, VAR11);
    if (VAR18 < VAR11)
        VAR4->VAR19 |= VAR20;
    if (VAR18 < 0)
        return VAR18;
    if (!VAR18)
        return VAR21;
    VAR4->VAR22 = 0;
    if (VAR16 > 0)
    {
        VAR4->VAR23 = VAR4->VAR24 = FUN4(VAR16, VAR9->VAR25.VAR26, VAR14 * (VAR27)VAR9->VAR25.VAR28);
    }
    if (VAR6->VAR29)
    {
        if (VAR18 == VAR11)
            FUN5(&VAR6->VAR30, VAR4->VAR31, VAR4->VAR31, (VAR11 >> 3), VAR6->VAR32, 1);
        else
            memset(VAR6->VAR32, 0, 8);
    }
    return VAR18;
}