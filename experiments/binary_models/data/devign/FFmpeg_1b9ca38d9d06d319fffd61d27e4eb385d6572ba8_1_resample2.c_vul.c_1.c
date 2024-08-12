int FUN1(VAR1 *VAR2, short *VAR3, short *VAR4, int *VAR5, int VAR6, int VAR7, int VAR8)
{
    int VAR9, VAR10;
    int VAR11 = VAR2->VAR11;
    int VAR12 = VAR2->VAR12;
    int VAR13 = VAR2->VAR14 % VAR2->VAR15;
    int VAR14 = VAR2->VAR14 / VAR2->VAR15;
    int VAR16 = VAR2->VAR16;
    if (VAR16 == 0 && VAR2->VAR17 == 1 && VAR2->VAR18 == 0)
    {
        int64_t VAR19 = ((VAR20)VAR11) << 32;
        int64_t VAR21 = (1LL << 32) * VAR2->VAR14 / VAR2->VAR15;
        VAR7 = FUN2(VAR7, (VAR6 - 1 - VAR11) * (VAR20)VAR2->VAR15 / VAR2->VAR14);
        for (VAR9 = 0; VAR9 < VAR7; VAR9++)
        {
            VAR3[VAR9] = VAR4[VAR19 >> 32];
            VAR19 += VAR21;
        }
        VAR12 += VAR9 * VAR13;
        VAR11 += VAR9 * VAR14;
        VAR11 += VAR12 / VAR2->VAR15;
        VAR12 %= VAR2->VAR15;
    }
    else
    {
        for (VAR9 = 0; VAR9 < VAR7; VAR9++)
        {
            VAR22 *VAR23 = VAR2->VAR24 + VAR2->VAR17 * (VAR11 & VAR2->VAR25);
            int VAR26 = VAR11 >> VAR2->VAR18;
            FELEM2 VAR27 = 0;
            if (VAR26 < 0)
            {
                for (VAR10 = 0; VAR10 < VAR2->VAR17; VAR10++)
                    VAR27 += VAR4[FUN3(VAR26 + VAR10) % VAR6] * VAR23[VAR10];
            }
            else if (VAR26 + VAR2->VAR17 > VAR6)
            {
                break;
            }
            else if (VAR2->VAR28)
            {
                FELEM2 VAR29 = 0;
                for (VAR10 = 0; VAR10 < VAR2->VAR17; VAR10++)
                {
                    VAR27 += VAR4[VAR26 + VAR10] * (VAR30)VAR23[VAR10];
                    VAR29 += VAR4[VAR26 + VAR10] * (VAR30)VAR23[VAR10 + VAR2->VAR17];
                }
                VAR27 += (VAR29 - VAR27) * (VAR31)VAR12 / VAR2->VAR15;
            }
            else
            {
                for (VAR10 = 0; VAR10 < VAR2->VAR17; VAR10++)
                {
                    VAR27 += VAR4[VAR26 + VAR10] * (VAR30)VAR23[VAR10];
                }
            }
            VAR3[VAR9] = FUN4(FUN5(VAR27));
            VAR27 = (VAR27 + (1 << (VAR32 - 1))) >> VAR32;
            VAR3[VAR9] = (unsigned)(VAR27 + 32768) > 65535 ? (VAR27 >> 31) ^ 32767 : VAR27;
            VAR12 += VAR13;
            VAR11 += VAR14;
            if (VAR12 >= VAR2->VAR15)
            {
                VAR12 -= VAR2->VAR15;
                VAR11++;
            }
            if (VAR9 + 1 == VAR16)
            {
                VAR16 = 0;
                VAR13 = VAR2->VAR33 % VAR2->VAR15;
                VAR14 = VAR2->VAR33 / VAR2->VAR15;
            }
        }
    }
    *VAR5 = FUN6(VAR11, 0) >> VAR2->VAR18;
    if (VAR11 >= 0)
        VAR11 &= VAR2->VAR25;
    if (VAR16)
    {
        VAR16 -= VAR9;
        assert(VAR16 > 0);
    }
    if (VAR8)
    {
        VAR2->VAR12 = VAR12;
        VAR2->VAR11 = VAR11;
        VAR2->VAR14 = VAR13 + VAR2->VAR15 * VAR14;
        VAR2->VAR16 = VAR16;
    }
    if (VAR8 && !VAR2->VAR16)
    {
        FUN7(VAR2, rand() % (8000 * 2) - 8000, 8000 * 2);
        FUN8(NULL, VAR34, "", VAR2->VAR14, VAR2->VAR33, VAR2->VAR16);
    }
    return VAR9;
}