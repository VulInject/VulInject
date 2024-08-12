int FUN1(VAR1)(VAR2 *VAR3, VAR4 *VAR5, const VAR4 *VAR6, int *VAR7, int VAR8, int VAR9, int VAR10)
{
    int VAR11;
    int VAR12;
    int VAR13 = VAR3->VAR13;
    int VAR14 = VAR3->VAR14;
    int VAR15 = VAR3->VAR16 % VAR3->VAR17;
    int VAR16 = VAR3->VAR16 / VAR3->VAR17;
    FUN2(VAR3->VAR18 == VAR19);
    FUN2(VAR3->VAR20 == sizeof(VAR21));
    if (VAR3->VAR22 == 1 && VAR3->VAR23 == 0)
    {
        int64_t VAR24 = (1LL << 32) * VAR3->VAR14 / VAR3->VAR17 + (1LL << 32) * VAR13;
        int64_t VAR25 = (1LL << 32) * VAR3->VAR16 / VAR3->VAR17;
        int VAR26 = (VAR8 * (VAR27)VAR3->VAR17 - VAR14 + VAR3->VAR16 - 1) / VAR3->VAR16;
        VAR9 = FUN3(VAR9, VAR26);
        for (VAR11 = 0; VAR11 < VAR9; VAR11++)
        {
            VAR5[VAR11] = VAR6[VAR24 >> 32];
            VAR24 += VAR25;
        }
        VAR13 += VAR11 * VAR16;
        VAR13 += (VAR14 + VAR11 * (VAR27)VAR15) / VAR3->VAR17;
        VAR14 = (VAR14 + VAR11 * (VAR27)VAR15) % VAR3->VAR17;
        FUN4(VAR13 >= 0);
        *VAR7 = VAR13;
        VAR13 = 0;
    }
    else
    {
        int64_t VAR28 = (1LL + VAR8 - VAR3->VAR22) << VAR3->VAR23;
        int64_t VAR29 = (VAR28 - VAR13) * VAR3->VAR17 - VAR3->VAR14;
        int VAR30 = (VAR29 + VAR3->VAR16 - 1) / VAR3->VAR16;
        int VAR31 = FUN3(VAR9, VAR30);
        int VAR32;
        if (!VAR3->VAR33)
        {
            VAR32 = VAR13 >> VAR3->VAR23;
            VAR13 &= VAR3->VAR34;
            for (VAR11 = 0; VAR11 < VAR31; VAR11++)
            {
                VAR21 *VAR35 = ((VAR21 *)VAR3->VAR36) + VAR3->VAR37 * VAR13;
                COMMON_CORE FELEM2 VAR38 = 0;
                for (VAR12 = 0; VAR12 < VAR3->VAR22; VAR12++)
                {
                    VAR38 += VAR6[VAR32 + VAR12] * (VAR39)VAR35[VAR12];
                }
                FUN5(VAR5[VAR11], VAR38);
                VAR14 += VAR15;
                VAR13 += VAR16;
                if (VAR14 >= VAR3->VAR17)
                {
                    VAR14 -= VAR3->VAR17;
                    VAR13++;
                }
                VAR32 += VAR13 >> VAR3->VAR23;
                VAR13 &= VAR3->VAR34;
            }
        }
        else
        {
            VAR32 = VAR13 >> VAR3->VAR23;
            VAR13 &= VAR3->VAR34;
            for (VAR11 = 0; VAR11 < VAR31; VAR11++)
            {
                VAR21 *VAR35 = ((VAR21 *)VAR3->VAR36) + VAR3->VAR37 * VAR13;
                FELEM2 VAR38 = 0, VAR40 = 0;
                LINEAR_CORE for (VAR12 = 0; VAR12 < VAR3->VAR22; VAR12++)
                {
                    VAR38 += VAR6[VAR32 + VAR12] * (VAR39)VAR35[VAR12];
                    VAR40 += VAR6[VAR32 + VAR12] * (VAR39)VAR35[VAR12 + VAR3->VAR37];
                }
                VAR38 += (VAR40 - VAR38) * (VAR41)VAR14 / VAR3->VAR17;
                FUN5(VAR5[VAR11], VAR38);
                VAR14 += VAR15;
                VAR13 += VAR16;
                if (VAR14 >= VAR3->VAR17)
                {
                    VAR14 -= VAR3->VAR17;
                    VAR13++;
                }
                VAR32 += VAR13 >> VAR3->VAR23;
                VAR13 &= VAR3->VAR34;
            }
        }
        *VAR7 = VAR32;
    }
    if (VAR10)
    {
        VAR3->VAR14 = VAR14;
        VAR3->VAR13 = VAR13;
    }
    return VAR11;
}