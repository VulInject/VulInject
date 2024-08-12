static int FUN1(VAR1 *VAR2, void *VAR3, const void *VAR4, int *VAR5, int VAR6, int VAR7, int VAR8, int VAR9)
{
    int VAR10;
    unsigned int VAR11 = VAR2->VAR11;
    int VAR12 = VAR2->VAR12;
    int VAR13 = VAR2->VAR14 % VAR2->VAR15;
    int VAR14 = VAR2->VAR14 / VAR2->VAR15;
    int VAR16 = VAR2->VAR16;
    if (!VAR3 != !VAR4)
        return FUN2(VAR17);
    if (VAR9)
    {
        uint64_t VAR18 = ((VAR19)VAR11) << 32;
        int64_t VAR20 = (1LL << 32) * VAR2->VAR14 / VAR2->VAR15;
        VAR7 = FUN3(VAR7, (VAR6 - 1 - VAR11) * (VAR21)VAR2->VAR15 / VAR2->VAR14);
        if (VAR3)
        {
            for (VAR10 = 0; VAR10 < VAR7; VAR10++)
            {
                VAR2->FUN4(VAR3, VAR10, VAR4, VAR18 >> 32);
                VAR18 += VAR20;
            }
        }
        else
        {
            VAR10 = VAR7;
        }
        VAR11 += VAR10 * VAR14;
        VAR11 += (VAR12 + VAR10 * (VAR21)VAR13) / VAR2->VAR15;
        VAR12 = (VAR12 + VAR10 * (VAR21)VAR13) % VAR2->VAR15;
    }
    else
    {
        for (VAR10 = 0; VAR10 < VAR7; VAR10++)
        {
            int VAR22 = VAR11 >> VAR2->VAR23;
            if (VAR22 + VAR2->VAR24 > VAR6)
                break;
            if (VAR3)
                VAR2->FUN5(VAR2, VAR3, VAR10, VAR4, VAR11, VAR12);
            VAR12 += VAR13;
            VAR11 += VAR14;
            if (VAR12 >= VAR2->VAR15)
            {
                VAR12 -= VAR2->VAR15;
                VAR11++;
            }
            if (VAR10 + 1 == VAR16)
            {
                VAR16 = 0;
                VAR13 = VAR2->VAR25 % VAR2->VAR15;
                VAR14 = VAR2->VAR25 / VAR2->VAR15;
            }
        }
    }
    if (VAR5)
        *VAR5 = VAR11 >> VAR2->VAR23;
    if (VAR8)
    {
        VAR11 &= VAR2->VAR26;
        if (VAR16)
        {
            VAR16 -= VAR10;
            if (VAR16 <= 0)
                return VAR27;
        }
        VAR2->VAR12 = VAR12;
        VAR2->VAR11 = VAR11;
        VAR2->VAR14 = VAR13 + VAR2->VAR15 * VAR14;
        VAR2->VAR16 = VAR16;
    }
    return VAR10;
}