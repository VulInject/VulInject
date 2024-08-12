static void FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = VAR1;
    VAR7 *VAR8 = VAR6->VAR8;
    VAR9 *VAR10;
    int VAR11, VAR12;
    VAR11 = VAR2 / VAR13;
    if (VAR11 < 0 || VAR11 >= VAR8->VAR14)
    {
        FUN2(&VAR6->VAR15, "", VAR11);
        return;
    }
    VAR10 = &VAR8->VAR16[VAR11];
    VAR12 = VAR2 % VAR13;
    if (VAR12 != VAR17)
    {
        const volatile VAR18 *VAR19;
        if (FUN3(VAR10, VAR12) == VAR3 && VAR10->VAR20 != VAR21)
        {
            return;
        }
        VAR19 = VAR6->VAR8->VAR22 + VAR11 * VAR13 + VAR17;
        if (VAR8->VAR23 && !(*VAR19 & VAR24))
        {
            FUN2(&VAR6->VAR15, ""
                                "",
                       VAR11);
            return;
        }
        VAR10->VAR25 = true;
    }
    FUN4(VAR10, VAR12, VAR3);
    if (VAR12 == VAR17)
    {
        if (VAR8->VAR23 && !(VAR3 & VAR24))
        {
            FUN5(VAR6, VAR11);
        }
    }
}