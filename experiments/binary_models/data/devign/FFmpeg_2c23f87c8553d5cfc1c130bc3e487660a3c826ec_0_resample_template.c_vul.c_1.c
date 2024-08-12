int FUN1(VAR1)(VAR2 *VAR3, VAR4 *VAR5, const VAR4 *VAR6, int *VAR7, int VAR8, int VAR9, int VAR10)
{
    int VAR11, VAR12;
    int VAR13 = VAR3->VAR13;
    int VAR14 = VAR3->VAR14;
    int VAR15 = VAR3->VAR16 % VAR3->VAR17;
    int VAR16 = VAR3->VAR16 / VAR3->VAR17;
    int VAR18 = VAR3->VAR18;
    FUN2(VAR3->VAR19 == VAR20);
    FUN2(VAR3->VAR21 == sizeof(VAR22));
    if (VAR18 == 0 && VAR3->VAR23 == 1 && VAR3->VAR24 == 0)
    {
        int64_t VAR25 = (1LL << 32) * VAR3->VAR14 / VAR3->VAR17 + (1LL << 32) * VAR13;
        int64_t VAR26 = (1LL << 32) * VAR3->VAR16 / VAR3->VAR17;
        int VAR27 = (VAR8 * (VAR28)VAR3->VAR17 - VAR14 + VAR3->VAR16 - 1) / VAR3->VAR16;
        VAR9 = FUN3(VAR9, VAR27);
        for (VAR11 = 0; VAR11 < VAR9; VAR11++)
        {
            VAR5[VAR11] = VAR6[VAR25 >> 32];
            VAR25 += VAR26;
        }
        VAR13 += VAR11 * VAR16;
        VAR13 += (VAR14 + VAR11 * (VAR28)VAR15) / VAR3->VAR17;
        VAR14 = (VAR14 + VAR11 * (VAR28)VAR15) % VAR3->VAR17;
        FUN4(VAR13 >= 0);
        *VAR7 = VAR13;
        VAR13 = 0;
    }
    else if (VAR18 == 0 && VAR13 >= 0)
    {
        int64_t VAR29 = (1 + VAR8 - VAR3->VAR23) << VAR3->VAR24;
        int64_t VAR30 = (VAR29 - VAR13) * VAR3->VAR17 - VAR3->VAR14;
        int VAR31 = (VAR30 + VAR3->VAR16 - 1) / VAR3->VAR16;
        int VAR32 = FUN3(VAR9, VAR31);
        int VAR33;
        if (!VAR3->VAR34)
        {
            VAR33 = VAR13 >> VAR3->VAR24;
            VAR13 &= VAR3->VAR35;
            for (VAR11 = 0; VAR11 < VAR32; VAR11++)
            {
                VAR22 *VAR36 = ((VAR22 *)VAR3->VAR37) + VAR3->VAR38 * VAR13;
                COMMON_CORE FELEM2 VAR39 = 0;
                for (VAR12 = 0; VAR12 < VAR3->VAR23; VAR12++)
                {
                    VAR39 += VAR6[VAR33 + VAR12] * (VAR40)VAR36[VAR12];
                }
                FUN5(VAR5[VAR11], VAR39);
                VAR14 += VAR15;
                VAR13 += VAR16;
                if (VAR14 >= VAR3->VAR17)
                {
                    VAR14 -= VAR3->VAR17;
                    VAR13++;
                }
                VAR33 += VAR13 >> VAR3->VAR24;
                VAR13 &= VAR3->VAR35;
            }
        }
        else
        {
            VAR33 = VAR13 >> VAR3->VAR24;
            VAR13 &= VAR3->VAR35;
            for (VAR11 = 0; VAR11 < VAR32; VAR11++)
            {
                VAR22 *VAR36 = ((VAR22 *)VAR3->VAR37) + VAR3->VAR38 * VAR13;
                FELEM2 VAR39 = 0, VAR41 = 0;
                LINEAR_CORE for (VAR12 = 0; VAR12 < VAR3->VAR23; VAR12++)
                {
                    VAR39 += VAR6[VAR33 + VAR12] * (VAR40)VAR36[VAR12];
                    VAR41 += VAR6[VAR33 + VAR12] * (VAR40)VAR36[VAR12 + VAR3->VAR38];
                }
                VAR39 += (VAR41 - VAR39) * (VAR42)VAR14 / VAR3->VAR17;
                FUN5(VAR5[VAR11], VAR39);
                VAR14 += VAR15;
                VAR13 += VAR16;
                if (VAR14 >= VAR3->VAR17)
                {
                    VAR14 -= VAR3->VAR17;
                    VAR13++;
                }
                VAR33 += VAR13 >> VAR3->VAR24;
                VAR13 &= VAR3->VAR35;
            }
        }
        *VAR7 = VAR33;
    }
    else
    {
        int VAR33 = 0;
        for (VAR11 = 0; VAR11 < VAR9; VAR11++)
        {
            VAR22 *VAR36;
            FELEM2 VAR39 = 0;
            VAR33 += VAR13 >> VAR3->VAR24;
            VAR13 &= VAR3->VAR35;
            VAR36 = ((VAR22 *)VAR3->VAR37) + VAR3->VAR38 * VAR13;
            if (VAR33 + VAR3->VAR23 > VAR8 || -VAR33 >= VAR8)
            {
                break;
            }
            else if (VAR33 < 0)
            {
                for (VAR12 = 0; VAR12 < VAR3->VAR23; VAR12++)
                    VAR39 += VAR6[FUN6(VAR33 + VAR12)] * (VAR40)VAR36[VAR12];
                FUN5(VAR5[VAR11], VAR39);
            }
            else if (VAR3->VAR34)
            {
                FELEM2 VAR41 = 0;
                LINEAR_CORE for (VAR12 = 0; VAR12 < VAR3->VAR23; VAR12++)
                {
                    VAR39 += VAR6[VAR33 + VAR12] * (VAR40)VAR36[VAR12];
                    VAR41 += VAR6[VAR33 + VAR12] * (VAR40)VAR36[VAR12 + VAR3->VAR38];
                }
                VAR39 += (VAR41 - VAR39) * (VAR42)VAR14 / VAR3->VAR17;
                FUN5(VAR5[VAR11], VAR39);
            }
            else
            {
                COMMON_CORE for (VAR12 = 0; VAR12 < VAR3->VAR23; VAR12++) { VAR39 += VAR6[VAR33 + VAR12] * (VAR40)VAR36[VAR12]; }
                FUN5(VAR5[VAR11], VAR39);
            }
            VAR14 += VAR15;
            VAR13 += VAR16;
            if (VAR14 >= VAR3->VAR17)
            {
                VAR14 -= VAR3->VAR17;
                VAR13++;
            }
            if (VAR11 + 1 == VAR18)
            {
                VAR18 = 0;
                VAR15 = VAR3->VAR43 % VAR3->VAR17;
                VAR16 = VAR3->VAR43 / VAR3->VAR17;
            }
        }
        *VAR7 = FUN7(VAR33, 0);
        VAR13 += FUN3(VAR33, 0) << VAR3->VAR24;
        if (VAR18)
        {
            VAR18 -= VAR11;
            FUN2(VAR18 > 0);
        }
    }
    if (VAR10)
    {
        VAR3->VAR14 = VAR14;
        VAR3->VAR13 = VAR13;
        VAR3->VAR16 = VAR15 + VAR3->VAR17 * VAR16;
        VAR3->VAR18 = VAR18;
    }
    return VAR11;
}