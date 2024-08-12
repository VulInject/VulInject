static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6, VAR7, VAR8, VAR9, VAR10;
    int VAR11, VAR12, VAR13;
    FFTSample VAR14, VAR15, VAR16, VAR17, VAR18, VAR19, VAR20, VAR21;
    VAR3 *VAR22;
    const int VAR23 = (1 << VAR2->VAR5);
    int64_t VAR24;
    VAR8 = (0x2aab >> (16 - VAR2->VAR5)) | 1;
    for (VAR7 = 0; VAR7 < VAR8; VAR7++)
    {
        VAR9 = VAR25[VAR7] << 2;
        VAR22 = VAR4 + VAR9;
        VAR14 = VAR22[0].VAR26 + VAR22[1].VAR26;
        VAR18 = VAR22[2].VAR26 + VAR22[3].VAR26;
        VAR15 = VAR22[0].VAR27 + VAR22[1].VAR27;
        VAR19 = VAR22[2].VAR27 + VAR22[3].VAR27;
        VAR16 = VAR22[0].VAR26 - VAR22[1].VAR26;
        VAR21 = VAR22[2].VAR27 - VAR22[3].VAR27;
        VAR17 = VAR22[0].VAR27 - VAR22[1].VAR27;
        VAR20 = VAR22[2].VAR26 - VAR22[3].VAR26;
        VAR22[0].VAR26 = VAR14 + VAR18;
        VAR22[2].VAR26 = VAR14 - VAR18;
        VAR22[0].VAR27 = VAR15 + VAR19;
        VAR22[2].VAR27 = VAR15 - VAR19;
        VAR22[1].VAR26 = VAR16 + VAR21;
        VAR22[3].VAR26 = VAR16 - VAR21;
        VAR22[1].VAR27 = VAR17 - VAR20;
        VAR22[3].VAR27 = VAR17 + VAR20;
    }
    if (VAR23 < 8)
        return;
    VAR8 = (VAR8 >> 1) | 1;
    for (VAR7 = 0; VAR7 < VAR8; VAR7++)
    {
        VAR9 = VAR25[VAR7] << 3;
        VAR22 = VAR4 + VAR9;
        VAR14 = VAR22[4].VAR26 + VAR22[5].VAR26;
        VAR16 = VAR22[6].VAR26 + VAR22[7].VAR26;
        VAR15 = VAR22[4].VAR27 + VAR22[5].VAR27;
        VAR17 = VAR22[6].VAR27 + VAR22[7].VAR27;
        VAR18 = VAR14 + VAR16;
        VAR20 = VAR14 - VAR16;
        VAR19 = VAR15 + VAR17;
        VAR21 = VAR15 - VAR17;
        VAR14 = VAR22[4].VAR26 - VAR22[5].VAR26;
        VAR15 = VAR22[4].VAR27 - VAR22[5].VAR27;
        VAR16 = VAR22[6].VAR26 - VAR22[7].VAR26;
        VAR17 = VAR22[6].VAR27 - VAR22[7].VAR27;
        VAR22[4].VAR26 = VAR22[0].VAR26 - VAR18;
        VAR22[0].VAR26 = VAR22[0].VAR26 + VAR18;
        VAR22[4].VAR27 = VAR22[0].VAR27 - VAR19;
        VAR22[0].VAR27 = VAR22[0].VAR27 + VAR19;
        VAR22[6].VAR26 = VAR22[2].VAR26 - VAR21;
        VAR22[2].VAR26 = VAR22[2].VAR26 + VAR21;
        VAR22[6].VAR27 = VAR22[2].VAR27 + VAR20;
        VAR22[2].VAR27 = VAR22[2].VAR27 - VAR20;
        VAR24 = (VAR28)FUN2(VAR29) * (VAR14 + VAR15);
        VAR18 = (VAR30)((VAR24 + 0x40000000) >> 31);
        VAR24 = (VAR28)FUN2(VAR29) * (VAR16 - VAR17);
        VAR20 = (VAR30)((VAR24 + 0x40000000) >> 31);
        VAR24 = (VAR28)FUN2(VAR29) * (VAR15 - VAR14);
        VAR19 = (VAR30)((VAR24 + 0x40000000) >> 31);
        VAR24 = (VAR28)FUN2(VAR29) * (VAR16 + VAR17);
        VAR21 = (VAR30)((VAR24 + 0x40000000) >> 31);
        VAR14 = VAR18 + VAR20;
        VAR16 = VAR18 - VAR20;
        VAR15 = VAR19 + VAR21;
        VAR17 = VAR19 - VAR21;
        VAR22[5].VAR26 = VAR22[1].VAR26 - VAR14;
        VAR22[1].VAR26 = VAR22[1].VAR26 + VAR14;
        VAR22[5].VAR27 = VAR22[1].VAR27 - VAR15;
        VAR22[1].VAR27 = VAR22[1].VAR27 + VAR15;
        VAR22[7].VAR26 = VAR22[3].VAR26 - VAR17;
        VAR22[3].VAR26 = VAR22[3].VAR26 + VAR17;
        VAR22[7].VAR27 = VAR22[3].VAR27 + VAR16;
        VAR22[3].VAR27 = VAR22[3].VAR27 - VAR16;
    }
    VAR10 = 1 << ((VAR31 - 4) - 4);
    VAR11 = 4;
    for (VAR5 = 4; VAR5 <= VAR2->VAR5; VAR5++)
    {
        VAR12 = 2 * VAR11;
        VAR13 = 3 * VAR11;
        VAR8 = (VAR8 >> 1) | 1;
        for (VAR7 = 0; VAR7 < VAR8; VAR7++)
        {
            const VAR32 *VAR33 = VAR34 + VAR10;
            const VAR32 *VAR35 = VAR34 + VAR36 / (4 * 16) - VAR10;
            VAR9 = VAR25[VAR7] << VAR5;
            VAR22 = VAR4 + VAR9;
            VAR18 = VAR22[VAR12].VAR26 + VAR22[VAR13].VAR26;
            VAR14 = VAR22[VAR12].VAR26 - VAR22[VAR13].VAR26;
            VAR19 = VAR22[VAR12].VAR27 + VAR22[VAR13].VAR27;
            VAR15 = VAR22[VAR12].VAR27 - VAR22[VAR13].VAR27;
            VAR22[VAR12].VAR26 = VAR22[0].VAR26 - VAR18;
            VAR22[0].VAR26 = VAR22[0].VAR26 + VAR18;
            VAR22[VAR12].VAR27 = VAR22[0].VAR27 - VAR19;
            VAR22[0].VAR27 = VAR22[0].VAR27 + VAR19;
            VAR22[VAR13].VAR26 = VAR22[VAR11].VAR26 - VAR15;
            VAR22[VAR11].VAR26 = VAR22[VAR11].VAR26 + VAR15;
            VAR22[VAR13].VAR27 = VAR22[VAR11].VAR27 + VAR14;
            VAR22[VAR11].VAR27 = VAR22[VAR11].VAR27 - VAR14;
            for (VAR6 = 1; VAR6 < VAR11; VAR6++)
            {
                FFTSample VAR37 = VAR33[0];
                FFTSample VAR38 = VAR35[0];
                VAR24 = (VAR28)VAR37 * VAR22[VAR12 + VAR6].VAR26;
                VAR24 += (VAR28)VAR38 * VAR22[VAR12 + VAR6].VAR27;
                VAR14 = (VAR30)((VAR24 + 0x40000000) >> 31);
                VAR24 = (VAR28)VAR37 * VAR22[VAR12 + VAR6].VAR27;
                VAR24 -= (VAR28)VAR38 * VAR22[VAR12 + VAR6].VAR26;
                VAR15 = (VAR30)((VAR24 + 0x40000000) >> 31);
                VAR24 = (VAR28)VAR37 * VAR22[VAR13 + VAR6].VAR26;
                VAR24 -= (VAR28)VAR38 * VAR22[VAR13 + VAR6].VAR27;
                VAR16 = (VAR30)((VAR24 + 0x40000000) >> 31);
                VAR24 = (VAR28)VAR37 * VAR22[VAR13 + VAR6].VAR27;
                VAR24 += (VAR28)VAR38 * VAR22[VAR13 + VAR6].VAR26;
                VAR17 = (VAR30)((VAR24 + 0x40000000) >> 31);
                VAR18 = VAR14 + VAR16;
                VAR14 = VAR14 - VAR16;
                VAR19 = VAR15 + VAR17;
                VAR15 = VAR15 - VAR17;
                VAR22[VAR12 + VAR6].VAR26 = VAR22[VAR6].VAR26 - VAR18;
                VAR22[VAR6].VAR26 = VAR22[VAR6].VAR26 + VAR18;
                VAR22[VAR12 + VAR6].VAR27 = VAR22[VAR6].VAR27 - VAR19;
                VAR22[VAR6].VAR27 = VAR22[VAR6].VAR27 + VAR19;
                VAR22[VAR13 + VAR6].VAR26 = VAR22[VAR11 + VAR6].VAR26 - VAR15;
                VAR22[VAR11 + VAR6].VAR26 = VAR22[VAR11 + VAR6].VAR26 + VAR15;
                VAR22[VAR13 + VAR6].VAR27 = VAR22[VAR11 + VAR6].VAR27 + VAR14;
                VAR22[VAR11 + VAR6].VAR27 = VAR22[VAR11 + VAR6].VAR27 - VAR14;
                VAR33 += VAR10;
                VAR35 -= VAR10;
            }
        }
        VAR10 >>= 1;
        VAR11 <<= 1;
    }
}