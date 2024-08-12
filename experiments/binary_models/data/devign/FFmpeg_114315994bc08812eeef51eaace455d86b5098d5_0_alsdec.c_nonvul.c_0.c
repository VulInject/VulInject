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
    VAR4->VAR23 = 0;
    VAR4->VAR18 = 1;
    VAR4->VAR24 = FUN2(VAR10);
    VAR18 = VAR4->VAR18;
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
    }
    VAR14 = 1 << VAR15;
    if (VAR4->VAR27 & (VAR14 - 1))
    {
        FUN4(VAR8, VAR28, "");
        return -1;
    }
    VAR16 = VAR4->VAR27 >> VAR15;
    if (VAR6->VAR25)
    {
        VAR12[0] = FUN3(VAR10, 8 + (VAR6->VAR29 > 1));
        for (VAR11 = 1; VAR11 < VAR14; VAR11++)
            VAR12[VAR11] = VAR12[VAR11 - 1] + FUN5(VAR10, 2);
        for (VAR11 = 0; VAR11 < VAR14; VAR11++)
        {
            VAR13[VAR11] = VAR12[VAR11] & 0x0F;
            VAR12[VAR11] >>= 4;
        }
    }
    else
    {
        VAR12[0] = FUN3(VAR10, 4 + (VAR6->VAR29 > 1));
        for (VAR11 = 1; VAR11 < VAR14; VAR11++)
            VAR12[VAR11] = VAR12[VAR11 - 1] + FUN5(VAR10, 0);
    }
    if (FUN2(VAR10))
        VAR4->VAR30 = FUN3(VAR10, 4) + 1;
    VAR4->VAR31 = (VAR4->VAR24 && VAR4->VAR32) || VAR4->VAR30;
    if (!VAR6->VAR33)
    {
        if (VAR6->VAR34)
        {
            int VAR35 = FUN6(FUN7((VAR4->VAR27 >> 3) - 1, 2, VAR6->VAR36 + 1));
            VAR4->VAR18 = FUN3(VAR10, VAR35);
        }
        else
        {
            VAR4->VAR18 = VAR6->VAR36;
        }
        VAR18 = VAR4->VAR18;
        if (VAR18)
        {
            int VAR37;
            if (VAR6->VAR38 == 3)
            {
                VAR37 = 0x7F;
                VAR21[0] = 32 * VAR39[FUN3(VAR10, 7)];
                if (VAR18 > 1)
                    VAR21[1] = -32 * VAR39[FUN3(VAR10, 7)];
                for (VAR11 = 2; VAR11 < VAR18; VAR11++)
                    VAR21[VAR11] = FUN3(VAR10, 7);
            }
            else
            {
                int VAR40;
                VAR37 = 1;
                VAR40 = FUN8(VAR18, 20);
                for (VAR11 = 0; VAR11 < VAR40; VAR11++)
                {
                    int VAR41 = VAR42[VAR6->VAR38][VAR11][1];
                    int VAR43 = VAR42[VAR6->VAR38][VAR11][0];
                    VAR21[VAR11] = FUN5(VAR10, VAR41) + VAR43;
                }
                VAR40 = FUN8(VAR18, 127);
                for (; VAR11 < VAR40; VAR11++)
                    VAR21[VAR11] = FUN5(VAR10, 2) + (VAR11 & 1);
                for (; VAR11 < VAR18; VAR11++)
                    VAR21[VAR11] = FUN5(VAR10, 1);
                VAR21[0] = 32 * VAR39[VAR21[0] + 64];
                if (VAR18 > 1)
                    VAR21[1] = -32 * VAR39[VAR21[1] + 64];
            }
            for (VAR11 = 2; VAR11 < VAR18; VAR11++)
                VAR21[VAR11] = (VAR21[VAR11] << 14) + (VAR37 << 13);
        }
    }
    if (VAR6->VAR44)
    {
        *VAR4->VAR45 = FUN2(VAR10);
        if (*VAR4->VAR45)
        {
            VAR4->VAR46[0] = FUN5(VAR10, 1) << 3;
            VAR4->VAR46[1] = FUN5(VAR10, 2) << 3;
            VAR4->VAR46[2] = VAR47[FUN9(VAR10, 0, 4)][FUN3(VAR10, 2)];
            VAR4->VAR46[3] = FUN5(VAR10, 2) << 3;
            VAR4->VAR46[4] = FUN5(VAR10, 1) << 3;
            *VAR4->VAR48 = FUN3(VAR10, VAR2->VAR49);
            *VAR4->VAR48 += FUN10(4, VAR18 + 1);
        }
    }
    if (VAR4->VAR50)
    {
        if (VAR18)
            VAR4->VAR51[0] = FUN5(VAR10, VAR8->VAR52 - 4);
        if (VAR18 > 1)
            VAR4->VAR51[1] = FUN5(VAR10, FUN8(VAR12[0] + 3, VAR2->VAR53));
        if (VAR18 > 2)
            VAR4->VAR51[2] = FUN5(VAR10, FUN8(VAR12[0] + 1, VAR2->VAR53));
        VAR17 = FUN8(VAR18, 3);
    }
    if (VAR6->VAR25)
    {
        unsigned int VAR54[VAR14];
        unsigned int VAR11[VAR14];
        unsigned int VAR55 = FUN7((FUN6(VAR4->VAR27) - 3) >> 1, 0, 5);
        unsigned int VAR56 = VAR17;
        unsigned int VAR57;
        unsigned int VAR58;
        unsigned int VAR59;
        FUN11(VAR10, &VAR57, &VAR58, &VAR59);
        VAR22 = VAR4->VAR51 + VAR17;
        for (VAR19 = 0; VAR19 < VAR14; VAR19++, VAR56 = 0)
        {
            VAR11[VAR19] = VAR12[VAR19] > VAR55 ? VAR12[VAR19] - VAR55 : 0;
            VAR54[VAR19] = 5 - VAR12[VAR19] + VAR11[VAR19];
            FUN12(VAR10, VAR16, VAR22, VAR54[VAR19], VAR13[VAR19], &VAR57, &VAR58, &VAR59, VAR2->VAR60, VAR2->VAR61);
            VAR22 += VAR16;
        }
        FUN13(VAR10);
        VAR56 = VAR17;
        VAR22 = VAR4->VAR51 + VAR17;
        for (VAR19 = 0; VAR19 < VAR14; VAR19++, VAR56 = 0)
        {
            unsigned int VAR62 = VAR63[VAR13[VAR19]][VAR54[VAR19]];
            unsigned int VAR64 = VAR11[VAR19];
            unsigned int VAR65 = VAR12[VAR19];
            for (; VAR56 < VAR16; VAR56++)
            {
                int32_t VAR66 = *VAR22;
                if (VAR66 == VAR62)
                {
                    unsigned int VAR67 = (2 + (VAR13[VAR19] > 2) + (VAR13[VAR19] > 10)) << (5 - VAR54[VAR19]);
                    VAR66 = FUN5(VAR10, VAR65);
                    if (VAR66 >= 0)
                    {
                        VAR66 += (VAR67) << VAR64;
                    }
                    else
                    {
                        VAR66 -= (VAR67 - 1) << VAR64;
                    }
                }
                else
                {
                    if (VAR66 > VAR62)
                        VAR66--;
                    if (VAR66 & 1)
                        VAR66 = -VAR66;
                    VAR66 >>= 1;
                    if (VAR64)
                    {
                        VAR66 <<= VAR64;
                        VAR66 |= FUN14(VAR10, VAR64);
                    }
                }
                *VAR22++ = VAR66;
            }
        }
    }
    else
    {
        VAR22 = VAR4->VAR51 + VAR17;
        for (VAR19 = 0; VAR19 < VAR14; VAR19++, VAR17 = 0)
            for (; VAR17 < VAR16; VAR17++)
                *VAR22++ = FUN5(VAR10, VAR12[VAR19]);
    }
    if (!VAR6->VAR68 || VAR2->VAR69)
        FUN15(VAR10);
    return 0;
}