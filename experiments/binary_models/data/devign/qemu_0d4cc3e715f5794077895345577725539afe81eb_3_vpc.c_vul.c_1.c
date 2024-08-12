static int FUN1(VAR1 *VAR2, int64_t VAR3, const VAR4 *VAR5, int VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    int64_t VAR10;
    int64_t VAR11, VAR12;
    int VAR13;
    VAR14 *VAR15 = (VAR14 *)VAR8->VAR16;
    if (FUN2(VAR15->VAR17) == VAR18)
    {
        return FUN3(VAR2->VAR19, VAR3, VAR5, VAR6);
    }
    while (VAR6 > 0)
    {
        VAR10 = FUN4(VAR2, VAR3, 1);
        VAR12 = VAR8->VAR20 >> VAR21;
        VAR11 = VAR12 - (VAR3 % VAR12);
        if (VAR11 > VAR6)
        {
            VAR11 = VAR6;
        }
        if (VAR10 == -1)
        {
            VAR10 = FUN5(VAR2, VAR3);
            if (VAR10 < 0)
                return -1;
        }
        VAR13 = FUN6(VAR2->VAR19, VAR10, VAR5, VAR11 * VAR22);
        if (VAR13 != VAR11 * VAR22)
        {
            return -1;
        }
        VAR6 -= VAR11;
        VAR3 += VAR11;
        VAR5 += VAR11 * VAR22;
    }
    return 0;
}