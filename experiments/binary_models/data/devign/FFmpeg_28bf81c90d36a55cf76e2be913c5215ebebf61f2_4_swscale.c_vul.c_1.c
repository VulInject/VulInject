static inline void FUN1(VAR1 *VAR2, VAR1 **VAR3, int VAR4, VAR1 *VAR5, VAR1 **VAR6, int VAR7, VAR8 *VAR9, int VAR10, int VAR11)
{
    if (VAR11 == 32)
    {
        int VAR12;
        for (VAR12 = 0; VAR12 < (VAR10 >> 1); VAR12++)
        {
            int VAR13;
            int VAR14 = 0;
            int VAR15 = 0;
            int VAR16 = 0;
            int VAR17 = 0;
            int VAR18, VAR19, VAR20;
            for (VAR13 = 0; VAR13 < VAR4; VAR13++)
            {
                VAR14 += VAR3[VAR13][2 * VAR12] * VAR2[VAR13];
                VAR15 += VAR3[VAR13][2 * VAR12 + 1] * VAR2[VAR13];
            }
            for (VAR13 = 0; VAR13 < VAR7; VAR13++)
            {
                VAR16 += VAR6[VAR13][VAR12] * VAR5[VAR13];
                VAR17 += VAR6[VAR13][VAR12 + 2048] * VAR5[VAR13];
            }
            VAR14 = VAR21[(VAR14 >> 19) + 256];
            VAR15 = VAR21[(VAR15 >> 19) + 256];
            VAR16 >>= 19;
            VAR17 >>= 19;
            VAR18 = VAR22[VAR16 + 256];
            VAR20 = VAR23[VAR17 + 256] + VAR24[VAR16 + 256];
            VAR19 = VAR25[VAR17 + 256];
            VAR9[8 * VAR12 + 0] = VAR26[((VAR14 + VAR18) >> 13)];
            VAR9[8 * VAR12 + 1] = VAR26[((VAR14 + VAR20) >> 13)];
            VAR9[8 * VAR12 + 2] = VAR26[((VAR14 + VAR19) >> 13)];
            VAR9[8 * VAR12 + 4] = VAR26[((VAR15 + VAR18) >> 13)];
            VAR9[8 * VAR12 + 5] = VAR26[((VAR15 + VAR20) >> 13)];
            VAR9[8 * VAR12 + 6] = VAR26[((VAR15 + VAR19) >> 13)];
        }
    }
    else if (VAR11 == 24)
    {
        int VAR12;
        for (VAR12 = 0; VAR12 < (VAR10 >> 1); VAR12++)
        {
            int VAR13;
            int VAR14 = 0;
            int VAR15 = 0;
            int VAR16 = 0;
            int VAR17 = 0;
            int VAR18, VAR19, VAR20;
            for (VAR13 = 0; VAR13 < VAR4; VAR13++)
            {
                VAR14 += VAR3[VAR13][2 * VAR12] * VAR2[VAR13];
                VAR15 += VAR3[VAR13][2 * VAR12 + 1] * VAR2[VAR13];
            }
            for (VAR13 = 0; VAR13 < VAR7; VAR13++)
            {
                VAR16 += VAR6[VAR13][VAR12] * VAR5[VAR13];
                VAR17 += VAR6[VAR13][VAR12 + 2048] * VAR5[VAR13];
            }
            VAR14 = VAR21[(VAR14 >> 19) + 256];
            VAR15 = VAR21[(VAR15 >> 19) + 256];
            VAR16 >>= 19;
            VAR17 >>= 19;
            VAR18 = VAR22[VAR16 + 256];
            VAR20 = VAR23[VAR17 + 256] + VAR24[VAR16 + 256];
            VAR19 = VAR25[VAR17 + 256];
            VAR9[0] = VAR26[((VAR14 + VAR18) >> 13)];
            VAR9[1] = VAR26[((VAR14 + VAR20) >> 13)];
            VAR9[2] = VAR26[((VAR14 + VAR19) >> 13)];
            VAR9[3] = VAR26[((VAR15 + VAR18) >> 13)];
            VAR9[4] = VAR26[((VAR15 + VAR20) >> 13)];
            VAR9[5] = VAR26[((VAR15 + VAR19) >> 13)];
            VAR9 += 6;
        }
    }
    else if (VAR11 == 16)
    {
        int VAR12;
        for (VAR12 = 0; VAR12 < (VAR10 >> 1); VAR12++)
        {
            int VAR13;
            int VAR14 = 0;
            int VAR15 = 0;
            int VAR16 = 0;
            int VAR17 = 0;
            int VAR18, VAR19, VAR20;
            for (VAR13 = 0; VAR13 < VAR4; VAR13++)
            {
                VAR14 += VAR3[VAR13][2 * VAR12] * VAR2[VAR13];
                VAR15 += VAR3[VAR13][2 * VAR12 + 1] * VAR2[VAR13];
            }
            for (VAR13 = 0; VAR13 < VAR7; VAR13++)
            {
                VAR16 += VAR6[VAR13][VAR12] * VAR5[VAR13];
                VAR17 += VAR6[VAR13][VAR12 + 2048] * VAR5[VAR13];
            }
            VAR14 = VAR21[(VAR14 >> 19) + 256];
            VAR15 = VAR21[(VAR15 >> 19) + 256];
            VAR16 >>= 19;
            VAR17 >>= 19;
            VAR18 = VAR22[VAR16 + 256];
            VAR20 = VAR23[VAR17 + 256] + VAR24[VAR16 + 256];
            VAR19 = VAR25[VAR17 + 256];
            ((VAR27 *)VAR9)[2 * VAR12] = VAR28[(VAR14 + VAR18) >> 13] | VAR29[(VAR14 + VAR20) >> 13] | VAR30[(VAR14 + VAR19) >> 13];
            ((VAR27 *)VAR9)[2 * VAR12 + 1] = VAR28[(VAR15 + VAR18) >> 13] | VAR29[(VAR15 + VAR20) >> 13] | VAR30[(VAR15 + VAR19) >> 13];
        }
    }
    else if (VAR11 == 15)
    {
        int VAR12;
        for (VAR12 = 0; VAR12 < (VAR10 >> 1); VAR12++)
        {
            int VAR13;
            int VAR14 = 0;
            int VAR15 = 0;
            int VAR16 = 0;
            int VAR17 = 0;
            int VAR18, VAR19, VAR20;
            for (VAR13 = 0; VAR13 < VAR4; VAR13++)
            {
                VAR14 += VAR3[VAR13][2 * VAR12] * VAR2[VAR13];
                VAR15 += VAR3[VAR13][2 * VAR12 + 1] * VAR2[VAR13];
            }
            for (VAR13 = 0; VAR13 < VAR7; VAR13++)
            {
                VAR16 += VAR6[VAR13][VAR12] * VAR5[VAR13];
                VAR17 += VAR6[VAR13][VAR12 + 2048] * VAR5[VAR13];
            }
            VAR14 = VAR21[(VAR14 >> 19) + 256];
            VAR15 = VAR21[(VAR15 >> 19) + 256];
            VAR16 >>= 19;
            VAR17 >>= 19;
            VAR18 = VAR22[VAR16 + 256];
            VAR20 = VAR23[VAR17 + 256] + VAR24[VAR16 + 256];
            VAR19 = VAR25[VAR17 + 256];
            ((VAR27 *)VAR9)[2 * VAR12] = VAR31[(VAR14 + VAR18) >> 13] | VAR32[(VAR14 + VAR20) >> 13] | VAR33[(VAR14 + VAR19) >> 13];
            ((VAR27 *)VAR9)[2 * VAR12 + 1] = VAR31[(VAR15 + VAR18) >> 13] | VAR32[(VAR15 + VAR20) >> 13] | VAR33[(VAR15 + VAR19) >> 13];
        }
    }
}