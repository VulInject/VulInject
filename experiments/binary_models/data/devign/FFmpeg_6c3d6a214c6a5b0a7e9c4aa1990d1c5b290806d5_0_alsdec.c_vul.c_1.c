static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = &VAR2->VAR6;
    VAR7 *VAR8 = VAR2->VAR8;
    VAR9 *VAR10 = &VAR2->VAR10;
    unsigned int VAR11;
    unsigned int VAR12[8];
    unsigned int VAR13[8];
    unsigned int VAR14, VAR15, VAR16;
    unsigned int VAR17 = 0;
    unsigned int VAR18;
    int VAR19;
    VAR20 *VAR21 = VAR4->VAR21;
    VAR20 *VAR22;
    *VAR4->VAR23 = 0;
    *VAR4->VAR18 = 1;
    VAR4->VAR24 = FUN2(VAR10);
    VAR18 = *VAR4->VAR18;
    if (!VAR6->VAR25 && !VAR6->VAR26)
    {
        VAR15 = 0;
    }
    else
    {
        if (VAR6->VAR25 && VAR6->VAR26)
            VAR15 = FUN3(VAR10, 2);
        else
            VAR15 = 2 * FUN2(VAR10);
        VAR14 = 1 << VAR15;
        if (VAR4->VAR27 & (VAR14 - 1))
        {
            FUN4(VAR8, VAR28, "");
            VAR16 = VAR4->VAR27 >> VAR15;
            if (VAR6->VAR25)
            {
                VAR12[0] = FUN3(VAR10, 8 + (VAR6->VAR29 > 1));
                VAR12[VAR11] = VAR12[VAR11 - 1] + FUN5(VAR10, 2);
                for (VAR11 = 0; VAR11 < VAR14; VAR11++)
                {
                    VAR13[VAR11] = VAR12[VAR11] & 0x0F;
                    VAR12[VAR11] >>= 4;
                }
                else
                {
                    VAR12[0] = FUN3(VAR10, 4 + (VAR6->VAR29 > 1));
                    VAR12[VAR11] = VAR12[VAR11 - 1] + FUN5(VAR10, 0);
                    if (FUN2(VAR10))
                        *VAR4->VAR30 = FUN3(VAR10, 4) + 1;
                    *VAR4->VAR31 = (VAR4->VAR24 && VAR4->VAR32) || *VAR4->VAR30;
                    if (!VAR6->VAR33)
                    {
                        if (VAR6->VAR34)
                        {
                            int VAR35 = FUN6(FUN7((VAR4->VAR27 >> 3) - 1, 2, VAR6->VAR36 + 1));
                            *VAR4->VAR18 = FUN3(VAR10, VAR35);
                            if (*VAR4->VAR18 > VAR6->VAR36)
                            {
                                *VAR4->VAR18 = VAR6->VAR36;
                                FUN4(VAR8, VAR37, "");
                            }
                            else
                            {
                                *VAR4->VAR18 = VAR6->VAR36;
                                VAR18 = *VAR4->VAR18;
                                if (VAR18)
                                {
                                    int VAR38;
                                    if (VAR6->VAR39 == 3)
                                    {
                                        VAR38 = 0x7F;
                                        VAR21[0] = 32 * VAR40[FUN3(VAR10, 7)];
                                        if (VAR18 > 1)
                                            VAR21[1] = -32 * VAR40[FUN3(VAR10, 7)];
                                        for (VAR11 = 2; VAR11 < VAR18; VAR11++)
                                            VAR21[VAR11] = FUN3(VAR10, 7);
                                    }
                                    else
                                    {
                                        int VAR41;
                                        VAR38 = 1;
                                        VAR41 = FUN8(VAR18, 20);
                                        for (VAR11 = 0; VAR11 < VAR41; VAR11++)
                                        {
                                            int VAR42 = VAR43[VAR6->VAR39][VAR11][1];
                                            int VAR44 = VAR43[VAR6->VAR39][VAR11][0];
                                            VAR21[VAR11] = FUN5(VAR10, VAR42) + VAR44;
                                            if (VAR21[VAR11] < -64 || VAR21[VAR11] > 63)
                                            {
                                                FUN4(VAR8, VAR37, "", VAR21[VAR11]);
                                                return VAR45;
                                                VAR41 = FUN8(VAR18, 127);
                                                for (; VAR11 < VAR41; VAR11++)
                                                    VAR21[VAR11] = FUN5(VAR10, 2) + (VAR11 & 1);
                                                for (; VAR11 < VAR18; VAR11++)
                                                    VAR21[VAR11] = FUN5(VAR10, 1);
                                                VAR21[0] = 32 * VAR40[VAR21[0] + 64];
                                                if (VAR18 > 1)
                                                    VAR21[1] = -32 * VAR40[VAR21[1] + 64];
                                                for (VAR11 = 2; VAR11 < VAR18; VAR11++)
                                                    VAR21[VAR11] = (VAR21[VAR11] << 14) + (VAR38 << 13);
                                                if (VAR6->VAR46)
                                                {
                                                    *VAR4->VAR47 = FUN2(VAR10);
                                                    if (*VAR4->VAR47)
                                                    {
                                                        int VAR48, VAR49;
                                                        VAR4->VAR50[0] = FUN5(VAR10, 1) << 3;
                                                        VAR4->VAR50[1] = FUN5(VAR10, 2) << 3;
                                                        VAR48 = FUN9(VAR10, 0, 3);
                                                        VAR49 = FUN3(VAR10, 2);
                                                        VAR4->VAR50[2] = VAR51[VAR48][VAR49];
                                                        VAR4->VAR50[3] = FUN5(VAR10, 2) << 3;
                                                        VAR4->VAR50[4] = FUN5(VAR10, 1) << 3;
                                                        *VAR4->VAR52 = FUN3(VAR10, VAR2->VAR53);
                                                        *VAR4->VAR52 += FUN10(4, VAR18 + 1);
                                                        if (VAR4->VAR54)
                                                        {
                                                            if (VAR18)
                                                                VAR4->VAR55[0] = FUN5(VAR10, VAR8->VAR56 - 4);
                                                            if (VAR18 > 1)
                                                                VAR4->VAR55[1] = FUN5(VAR10, FUN8(VAR12[0] + 3, VAR2->VAR57));
                                                            if (VAR18 > 2)
                                                                VAR4->VAR55[2] = FUN5(VAR10, FUN8(VAR12[0] + 1, VAR2->VAR57));
                                                            VAR17 = FUN8(VAR18, 3);
                                                            if (VAR6->VAR25)
                                                            {
                                                                int VAR58[8];
                                                                unsigned int VAR11[8];
                                                                unsigned int VAR59 = FUN7((FUN6(VAR4->VAR27) - 3) >> 1, 0, 5);
                                                                unsigned int VAR60 = VAR17;
                                                                unsigned int VAR61;
                                                                unsigned int VAR62;
                                                                unsigned int VAR63;
                                                                FUN11(VAR10, &VAR61, &VAR62, &VAR63);
                                                                VAR22 = VAR4->VAR55 + VAR17;
                                                                for (VAR19 = 0; VAR19 < VAR14; VAR19++, VAR60 = 0)
                                                                {
                                                                    VAR11[VAR19] = VAR12[VAR19] > VAR59 ? VAR12[VAR19] - VAR59 : 0;
                                                                    VAR58[VAR19] = 5 - VAR12[VAR19] + VAR11[VAR19];
                                                                    FUN12(VAR10, VAR16, VAR22, VAR58[VAR19], VAR13[VAR19], &VAR61, &VAR62, &VAR63, VAR2->VAR64, VAR2->VAR65);
                                                                    VAR22 += VAR16;
                                                                    FUN13(VAR10);
                                                                    VAR60 = VAR17;
                                                                    VAR22 = VAR4->VAR55 + VAR17;
                                                                    for (VAR19 = 0; VAR19 < VAR14; VAR19++, VAR60 = 0)
                                                                    {
                                                                        unsigned int VAR66 = VAR67[VAR13[VAR19]][VAR58[VAR19]];
                                                                        unsigned int VAR68 = VAR11[VAR19];
                                                                        unsigned int VAR69 = VAR12[VAR19];
                                                                        for (; VAR60 < VAR16; VAR60++)
                                                                        {
                                                                            int32_t VAR70 = *VAR22;
                                                                            if (VAR70 == VAR66)
                                                                            {
                                                                                unsigned int VAR71 = (2 + (VAR13[VAR19] > 2) + (VAR13[VAR19] > 10)) << (5 - VAR58[VAR19]);
                                                                                VAR70 = FUN5(VAR10, VAR69);
                                                                                if (VAR70 >= 0)
                                                                                {
                                                                                    VAR70 += (VAR71) << VAR68;
                                                                                }
                                                                                else
                                                                                {
                                                                                    VAR70 -= (VAR71 - 1) << VAR68;
                                                                                }
                                                                                else
                                                                                {
                                                                                    if (VAR70 > VAR66)
                                                                                        VAR70--;
                                                                                    if (VAR70 & 1)
                                                                                        VAR70 = -VAR70;
                                                                                    VAR70 >>= 1;
                                                                                    if (VAR68)
                                                                                    {
                                                                                        VAR70 <<= VAR68;
                                                                                        VAR70 |= FUN14(VAR10, VAR68);
                                                                                        *VAR22++ = VAR70;
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                        VAR22 = VAR4->VAR55 + VAR17;
                                                                                        for (VAR19 = 0; VAR19 < VAR14; VAR19++, VAR17 = 0)
                                                                                            for (; VAR17 < VAR16; VAR17++)
                                                                                                *VAR22++ = FUN5(VAR10, VAR12[VAR19]);
                                                                                        if (!VAR6->VAR72 || VAR2->VAR73)
                                                                                            FUN15(VAR10);
                                                                                        return 0;