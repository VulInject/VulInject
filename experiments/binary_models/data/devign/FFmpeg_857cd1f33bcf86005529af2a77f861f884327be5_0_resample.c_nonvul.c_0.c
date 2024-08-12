static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR3 *VAR5, int *VAR6, int VAR7, int VAR8, int VAR9)
{
    if (VAR2->VAR10 == 1 && VAR2->VAR11 == 0)
    {
        int VAR12 = VAR2->VAR12;
        int VAR13 = VAR2->VAR13;
        int64_t VAR14 = (1LL << 32) * VAR2->VAR13 / VAR2->VAR15 + (1LL << 32) * VAR12;
        int64_t VAR16 = (1LL << 32) * VAR2->VAR17 / VAR2->VAR15;
        int VAR18 = (VAR7 * (VAR19)VAR2->VAR15 - VAR13 + VAR2->VAR17 - 1) / VAR2->VAR17;
        VAR8 = FUN2(VAR8, VAR18);
        VAR2->VAR20.FUN3(VAR4, VAR5, VAR8, VAR14, VAR16);
        VAR12 += VAR8 * VAR2->VAR21;
        VAR12 += (VAR13 + VAR8 * (VAR19)VAR2->VAR22) / VAR2->VAR15;
        FUN4(VAR12 >= 0);
        *VAR6 = VAR12;
        if (VAR9)
        {
            VAR2->VAR13 = (VAR13 + VAR8 * (VAR19)VAR2->VAR22) % VAR2->VAR15;
            VAR2->VAR12 = 0;
        }
    }
    else
    {
        int64_t VAR23 = (1LL + VAR7 - VAR2->VAR10) << VAR2->VAR11;
        int64_t VAR24 = (VAR23 - VAR2->VAR12) * VAR2->VAR15 - VAR2->VAR13;
        int VAR25 = (VAR24 + VAR2->VAR17 - 1) / VAR2->VAR17;
        VAR8 = FUN2(VAR8, VAR25);
        if (VAR8 > 0)
        {
            *VAR6 = VAR2->VAR20.FUN5(VAR2, VAR4, VAR5, VAR8, VAR9);
        }
        else
        {
            *VAR6 = 0;
        }
    }
    return VAR8;
}