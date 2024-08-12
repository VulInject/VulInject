static int FUN1(VAR1 *VAR2, VAR3 *VAR4, uint_fast8_t VAR5, VAR6 *VAR7, float *VAR8, uint_fast16_t VAR9)
{
    VAR10 *VAR11 = &VAR2->VAR11;
    uint_fast8_t VAR12 = VAR2->VAR13[VAR4->VAR14].VAR15;
    uint_fast16_t VAR16 = VAR4->VAR17 - VAR4->VAR18;
    uint_fast16_t VAR19 = VAR16 / VAR4->VAR20;
    uint_fast8_t VAR21[VAR19 * VAR2->VAR22];
    uint_fast8_t VAR23;
    uint_fast8_t VAR24;
    uint_fast8_t VAR25, VAR26, VAR27;
    uint_fast16_t VAR28;
    if (VAR4->VAR29 == 2)
    {
        for (VAR26 = 1; VAR26 < VAR5; ++VAR26)
        {
            VAR7[0] &= VAR7[VAR26];
        }
        if (VAR7[0])
            return 0;
        VAR24 = 1;
    }
    else
    {
        VAR24 = VAR5;
    }
    FUN2("", VAR5, VAR12);
    for (VAR23 = 0; VAR23 <= VAR4->VAR30; ++VAR23)
    {
        uint_fast16_t VAR31;
        uint_fast16_t VAR32;
        uint_fast16_t VAR33;
        VAR31 = VAR4->VAR18;
        for (VAR32 = 0; VAR32 < VAR19;)
        {
            if (!VAR23)
            {
                uint_fast32_t VAR34 = VAR35[VAR4->VAR36];
                for (VAR33 = 0, VAR26 = 0; VAR26 < VAR24; ++VAR26)
                {
                    if (!VAR7[VAR26])
                    {
                        uint_fast32_t VAR37 = FUN3(VAR11, VAR2->VAR13[VAR4->VAR14].VAR38.VAR39, VAR2->VAR13[VAR4->VAR14].VAR40, 3);
                        FUN2("", VAR37);
                        assert(VAR4->VAR36 > 1 && VAR37 <= 65536);
                        for (VAR25 = 0; VAR25 < VAR12; ++VAR25)
                        {
                            uint_fast32_t VAR41;
                            VAR41 = (((VAR42)VAR37) * VAR34) >> 32;
                            if (VAR32 + VAR12 - 1 - VAR25 < VAR19)
                            {
                                VAR21[VAR33 + VAR32 + VAR12 - 1 - VAR25] = VAR37 - VAR41 * VAR4->VAR36;
                            }
                            VAR37 = VAR41;
                        }
                    }
                    VAR33 += VAR19;
                }
            }
            for (VAR25 = 0; (VAR25 < VAR12) && (VAR32 < VAR19); ++VAR25)
            {
                for (VAR33 = 0, VAR26 = 0; VAR26 < VAR24; ++VAR26)
                {
                    uint_fast16_t VAR43;
                    if (!VAR7[VAR26])
                    {
                        uint_fast8_t VAR44 = VAR21[VAR33 + VAR32];
                        int_fast16_t VAR45 = VAR4->VAR46[VAR44][VAR23];
                        if (VAR45 >= 0)
                        {
                            uint_fast16_t VAR47;
                            unsigned VAR48 = VAR2->VAR13[VAR45].VAR15;
                            uint_fast16_t VAR49 = VAR48 == 1 ? VAR4->VAR20 : FUN4(VAR4->VAR20, VAR48);
                            vorbis_codebook VAR50 = VAR2->VAR13[VAR45];
                            if (VAR4->VAR29 == 0)
                            {
                                VAR43 = VAR31 + VAR26 * VAR9;
                                for (VAR28 = 0; VAR28 < VAR49; ++VAR28)
                                {
                                    VAR47 = FUN3(VAR11, VAR50.VAR38.VAR39, VAR50.VAR40, 3) * VAR48;
                                    for (VAR27 = 0; VAR27 < VAR48; ++VAR27)
                                    {
                                        VAR8[VAR43 + VAR28 + VAR27 * VAR49] += VAR50.VAR51[VAR47 + VAR27];
                                    }
                                }
                            }
                            else if (VAR4->VAR29 == 1)
                            {
                                VAR43 = VAR31 + VAR26 * VAR9;
                                for (VAR28 = 0; VAR28 < VAR49; ++VAR28)
                                {
                                    VAR47 = FUN3(VAR11, VAR50.VAR38.VAR39, VAR50.VAR40, 3) * VAR48;
                                    for (VAR27 = 0; VAR27 < VAR48; ++VAR27, ++VAR43)
                                    {
                                        VAR8[VAR43] += VAR50.VAR51[VAR47 + VAR27];
                                        FUN2("", VAR23, VAR43, VAR8[VAR43], VAR50.VAR51[VAR47 + VAR27], VAR47);
                                    }
                                }
                            }
                            else if (VAR4->VAR29 == 2 && VAR5 == 2 && (VAR31 & 1) == 0 && (VAR48 & 1) == 0)
                            {
                                VAR43 = VAR31 >> 1;
                                if (VAR48 == 2)
                                {
                                    for (VAR28 = 0; VAR28 < VAR49; ++VAR28)
                                    {
                                        VAR47 = FUN3(VAR11, VAR50.VAR38.VAR39, VAR50.VAR40, 3) * 2;
                                        VAR8[VAR43 + VAR28] += VAR50.VAR51[VAR47];
                                        VAR8[VAR43 + VAR28 + VAR9] += VAR50.VAR51[VAR47 + 1];
                                    }
                                }
                                else
                                    for (VAR28 = 0; VAR28 < VAR49; ++VAR28)
                                    {
                                        VAR47 = FUN3(VAR11, VAR50.VAR38.VAR39, VAR50.VAR40, 3) * VAR48;
                                        for (VAR27 = 0; VAR27 < VAR48; VAR27 += 2, VAR43++)
                                        {
                                            VAR8[VAR43] += VAR50.VAR51[VAR47 + VAR27];
                                            VAR8[VAR43 + VAR9] += VAR50.VAR51[VAR47 + VAR27 + 1];
                                            FUN2("", VAR23, VAR31 / VAR5 + (VAR43 % VAR5) * VAR9, VAR8[VAR31 / VAR5 + (VAR43 % VAR5) * VAR9], VAR50.VAR51[VAR47 + VAR27], VAR47, VAR27);
                                        }
                                    }
                            }
                            else if (VAR4->VAR29 == 2)
                            {
                                VAR43 = VAR31;
                                for (VAR28 = 0; VAR28 < VAR49; ++VAR28)
                                {
                                    VAR47 = FUN3(VAR11, VAR50.VAR38.VAR39, VAR50.VAR40, 3) * VAR48;
                                    for (VAR27 = 0; VAR27 < VAR48; ++VAR27, ++VAR43)
                                    {
                                        VAR8[VAR43 / VAR5 + (VAR43 % VAR5) * VAR9] += VAR50.VAR51[VAR47 + VAR27];
                                        FUN2("", VAR23, VAR31 / VAR5 + (VAR43 % VAR5) * VAR9, VAR8[VAR31 / VAR5 + (VAR43 % VAR5) * VAR9], VAR50.VAR51[VAR47 + VAR27], VAR47, VAR27);
                                    }
                                }
                            }
                            else
                            {
                                FUN5(VAR2->VAR52, VAR53, "");
                                return 1;
                            }
                        }
                    }
                    VAR33 += VAR19;
                }
                ++VAR32;
                VAR31 += VAR4->VAR20;
            }
        }
    }
    return 0;
}