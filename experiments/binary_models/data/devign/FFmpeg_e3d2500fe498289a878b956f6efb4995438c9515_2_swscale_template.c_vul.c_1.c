static inline void FUN1(VAR1)(VAR2 *VAR3, VAR2 **VAR4, int VAR5, VAR2 *VAR6, VAR2 **VAR7, int VAR8, VAR9 *VAR10, int VAR11, int VAR12, VAR2 *VAR13, VAR2 *VAR14)
{
    if (VAR15)
    {
    }
    else
    {
        if (VAR12 == 32)
        {
            asm volatile(YSCALEYUV2RGBX VAR16
                         :
                         : ""(-VAR5), ""(-VAR8), ""(VAR13 + VAR5 * 4), ""(VAR14 + VAR8 * 4), ""(VAR10), ""(VAR11), ""(VAR4 + VAR5), ""(VAR7 + VAR8)
                         : "", "", "", "", "");
        }
        else if (VAR12 == 24)
        {
            asm volatile(VAR17 ""
                                        "" VAR18
                         :
                         : ""(-VAR5), ""(-VAR8), ""(VAR13 + VAR5 * 4), ""(VAR14 + VAR8 * 4), ""(VAR10), ""(VAR11), ""(VAR4 + VAR5), ""(VAR7 + VAR8)
                         : "", "", "", "", "");
        }
        else if (VAR12 == 15)
        {
            asm volatile(VAR17 ""
                                        ""
                                        "" VAR19
                         :
                         : ""(-VAR5), ""(-VAR8), ""(VAR13 + VAR5 * 4), ""(VAR14 + VAR8 * 4), ""(VAR10), ""(VAR11), ""(VAR4 + VAR5), ""(VAR7 + VAR8)
                         : "", "", "", "", "");
        }
        else if (VAR12 == 16)
        {
            asm volatile(VAR17 ""
                                        ""
                                        "" VAR20
                         :
                         : ""(-VAR5), ""(-VAR8), ""(VAR13 + VAR5 * 4), ""(VAR14 + VAR8 * 4), ""(VAR10), ""(VAR11), ""(VAR4 + VAR5), ""(VAR7 + VAR8)
                         : "", "", "", "", "");
        }
        if (VAR12 == 32)
        {
            int VAR21;
            for (VAR21 = 0; VAR21 < (VAR11 >> 1); VAR21++)
            {
                int VAR22;
                int VAR23 = 0;
                int VAR24 = 0;
                int VAR25 = 0;
                int VAR26 = 0;
                int VAR27, VAR28, VAR29;
                for (VAR22 = 0; VAR22 < VAR5; VAR22++)
                {
                    VAR23 += VAR4[VAR22][2 * VAR21] * VAR3[VAR22];
                    VAR24 += VAR4[VAR22][2 * VAR21 + 1] * VAR3[VAR22];
                }
                for (VAR22 = 0; VAR22 < VAR8; VAR22++)
                {
                    VAR25 += VAR7[VAR22][VAR21] * VAR6[VAR22];
                    VAR26 += VAR7[VAR22][VAR21 + 2048] * VAR6[VAR22];
                }
                VAR23 = VAR30[(VAR23 >> 19) + 256];
                VAR24 = VAR30[(VAR24 >> 19) + 256];
                VAR25 >>= 19;
                VAR26 >>= 19;
                VAR27 = VAR31[VAR25 + 256];
                VAR29 = VAR32[VAR26 + 256] + VAR33[VAR25 + 256];
                VAR28 = VAR34[VAR26 + 256];
                VAR10[8 * VAR21 + 0] = VAR35[((VAR23 + VAR27) >> 13)];
                VAR10[8 * VAR21 + 1] = VAR35[((VAR23 + VAR29) >> 13)];
                VAR10[8 * VAR21 + 2] = VAR35[((VAR23 + VAR28) >> 13)];
                VAR10[8 * VAR21 + 4] = VAR35[((VAR24 + VAR27) >> 13)];
                VAR10[8 * VAR21 + 5] = VAR35[((VAR24 + VAR29) >> 13)];
                VAR10[8 * VAR21 + 6] = VAR35[((VAR24 + VAR28) >> 13)];
            }
        }
        else if (VAR12 == 24)
        {
            int VAR21;
            for (VAR21 = 0; VAR21 < (VAR11 >> 1); VAR21++)
            {
                int VAR22;
                int VAR23 = 0;
                int VAR24 = 0;
                int VAR25 = 0;
                int VAR26 = 0;
                int VAR27, VAR28, VAR29;
                for (VAR22 = 0; VAR22 < VAR5; VAR22++)
                {
                    VAR23 += VAR4[VAR22][2 * VAR21] * VAR3[VAR22];
                    VAR24 += VAR4[VAR22][2 * VAR21 + 1] * VAR3[VAR22];
                }
                for (VAR22 = 0; VAR22 < VAR8; VAR22++)
                {
                    VAR25 += VAR7[VAR22][VAR21] * VAR6[VAR22];
                    VAR26 += VAR7[VAR22][VAR21 + 2048] * VAR6[VAR22];
                }
                VAR23 = VAR30[(VAR23 >> 19) + 256];
                VAR24 = VAR30[(VAR24 >> 19) + 256];
                VAR25 >>= 19;
                VAR26 >>= 19;
                VAR27 = VAR31[VAR25 + 256];
                VAR29 = VAR32[VAR26 + 256] + VAR33[VAR25 + 256];
                VAR28 = VAR34[VAR26 + 256];
                VAR10[0] = VAR35[((VAR23 + VAR27) >> 13)];
                VAR10[1] = VAR35[((VAR23 + VAR29) >> 13)];
                VAR10[2] = VAR35[((VAR23 + VAR28) >> 13)];
                VAR10[3] = VAR35[((VAR24 + VAR27) >> 13)];
                VAR10[4] = VAR35[((VAR24 + VAR29) >> 13)];
                VAR10[5] = VAR35[((VAR24 + VAR28) >> 13)];
                VAR10 += 6;
            }
        }
        else if (VAR12 == 16)
        {
            int VAR21;
            for (VAR21 = 0; VAR21 < (VAR11 >> 1); VAR21++)
            {
                int VAR22;
                int VAR23 = 0;
                int VAR24 = 0;
                int VAR25 = 0;
                int VAR26 = 0;
                int VAR27, VAR28, VAR29;
                for (VAR22 = 0; VAR22 < VAR5; VAR22++)
                {
                    VAR23 += VAR4[VAR22][2 * VAR21] * VAR3[VAR22];
                    VAR24 += VAR4[VAR22][2 * VAR21 + 1] * VAR3[VAR22];
                }
                for (VAR22 = 0; VAR22 < VAR8; VAR22++)
                {
                    VAR25 += VAR7[VAR22][VAR21] * VAR6[VAR22];
                    VAR26 += VAR7[VAR22][VAR21 + 2048] * VAR6[VAR22];
                }
                VAR23 = VAR30[(VAR23 >> 19) + 256];
                VAR24 = VAR30[(VAR24 >> 19) + 256];
                VAR25 >>= 19;
                VAR26 >>= 19;
                VAR27 = VAR31[VAR25 + 256];
                VAR29 = VAR32[VAR26 + 256] + VAR33[VAR25 + 256];
                VAR28 = VAR34[VAR26 + 256];
                ((VAR36 *)VAR10)[2 * VAR21] = VAR37[(VAR23 + VAR27) >> 13] | VAR38[(VAR23 + VAR29) >> 13] | VAR39[(VAR23 + VAR28) >> 13];
                ((VAR36 *)VAR10)[2 * VAR21 + 1] = VAR37[(VAR24 + VAR27) >> 13] | VAR38[(VAR24 + VAR29) >> 13] | VAR39[(VAR24 + VAR28) >> 13];
            }
        }
        else if (VAR12 == 15)
        {
            int VAR21;
            for (VAR21 = 0; VAR21 < (VAR11 >> 1); VAR21++)
            {
                int VAR22;
                int VAR23 = 0;
                int VAR24 = 0;
                int VAR25 = 0;
                int VAR26 = 0;
                int VAR27, VAR28, VAR29;
                for (VAR22 = 0; VAR22 < VAR5; VAR22++)
                {
                    VAR23 += VAR4[VAR22][2 * VAR21] * VAR3[VAR22];
                    VAR24 += VAR4[VAR22][2 * VAR21 + 1] * VAR3[VAR22];
                }
                for (VAR22 = 0; VAR22 < VAR8; VAR22++)
                {
                    VAR25 += VAR7[VAR22][VAR21] * VAR6[VAR22];
                    VAR26 += VAR7[VAR22][VAR21 + 2048] * VAR6[VAR22];
                }
                VAR23 = VAR30[(VAR23 >> 19) + 256];
                VAR24 = VAR30[(VAR24 >> 19) + 256];
                VAR25 >>= 19;
                VAR26 >>= 19;
                VAR27 = VAR31[VAR25 + 256];
                VAR29 = VAR32[VAR26 + 256] + VAR33[VAR25 + 256];
                VAR28 = VAR34[VAR26 + 256];
                ((VAR36 *)VAR10)[2 * VAR21] = VAR40[(VAR23 + VAR27) >> 13] | VAR41[(VAR23 + VAR29) >> 13] | VAR42[(VAR23 + VAR28) >> 13];
                ((VAR36 *)VAR10)[2 * VAR21 + 1] = VAR40[(VAR24 + VAR27) >> 13] | VAR41[(VAR24 + VAR29) >> 13] | VAR42[(VAR24 + VAR28) >> 13];
            }
        }
    }
}