static int FUN1(VAR1 *VAR2, int64_t VAR3, VAR4 *VAR5, int VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    int VAR10;
    int64_t VAR11;
    int64_t VAR12, VAR13;
    VAR14 *VAR15 = (VAR14 *)VAR8->VAR16;
    if (FUN2(VAR15->VAR17) == VAR18)
    {
        return FUN3(VAR2->VAR19, VAR3, VAR5, VAR6);
    }
    while (VAR6 > 0)
    {
        VAR11 = FUN4(VAR2, VAR3, 0);
        VAR13 = VAR8->VAR20 >> VAR21;
        VAR12 = VAR13 - (VAR3 % VAR13);
        if (VAR12 > VAR6)
        {
            VAR12 = VAR6;
        }
        if (VAR11 == -1)
        {
            memset(VAR5, 0, VAR12 * VAR22);
        }
        else
        {
            VAR10 = FUN5(VAR2->VAR19, VAR11, VAR5, VAR12 * VAR22);
            if (VAR10 != VAR12 * VAR22)
            {
                return -1;
            }
        }
        VAR6 -= VAR12;
        VAR3 += VAR12;
        VAR5 += VAR12 * VAR22;
    }
    return 0;
}