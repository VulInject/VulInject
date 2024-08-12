static int FUN1(VAR1 *VAR2, unsigned int VAR3)
{
    VAR4 *VAR5 = VAR2->VAR5;
    VAR6 *VAR7 = &VAR2->VAR7;
    VAR8 *VAR9 = VAR2->VAR9;
    int *VAR10 = VAR2->VAR10;
    int *VAR11 = VAR2->VAR11;
    int *VAR12 = VAR2->VAR12;
    int **VAR13 = VAR2->VAR13;
    int *VAR14 = VAR2->VAR14;
    unsigned char *VAR15 = VAR2->VAR15;
    int VAR16 = VAR2->VAR17;
    SoftFloat_IEEE754 VAR18 = FUN2(0x1u, 23);
    unsigned int VAR19;
    unsigned int VAR20;
    unsigned int VAR21;
    uint32_t VAR22;
    int VAR23;
    int VAR24;
    int VAR25;
    int VAR26;
    long VAR27;
    long VAR28;
    unsigned long VAR29;
    unsigned long VAR30;
    uint32_t VAR31;
    uint32_t VAR32;
    uint32_t VAR33;
    FUN3(VAR7, 32);
    VAR23 = FUN4(VAR7);
    if (VAR3)
    {
        memset(VAR12, 0, VAR5->VAR34 * sizeof(*VAR12));
        memset(VAR11, 0, VAR5->VAR34 * sizeof(*VAR11));
        FUN5(VAR2->VAR35);
    }
    for (VAR26 = 0; VAR26 < VAR5->VAR34; ++VAR26)
    {
        if (VAR23)
        {
            if (FUN4(VAR7))
            {
                VAR22 = FUN6(VAR7, 23);
                VAR12[VAR26] = VAR22;
            }
            else
            {
                VAR22 = VAR12[VAR26];
            }
            VAR9[VAR26] = FUN7(VAR22);
        }
        else
        {
            VAR9[VAR26] = VAR36;
        }
        VAR20 = FUN6(VAR7, 2);
        VAR19 = FUN4(VAR7);
        VAR21 = FUN4(VAR7);
        if (VAR21)
        {
            VAR10[VAR26] = FUN6(VAR7, 8);
            VAR11[VAR26] = VAR10[VAR26];
        }
        else
        {
            VAR10[VAR26] = VAR11[VAR26];
        }
        if (VAR19)
        {
            if (!FUN4(VAR7))
            {
                for (VAR25 = 0; VAR25 < VAR16; ++VAR25)
                {
                    if (VAR2->VAR37[VAR26][VAR25] == 0)
                    {
                        VAR2->VAR13[VAR26][VAR25] = FUN8(VAR7, 32);
                    }
                }
            }
            else
            {
                VAR24 = 0;
                for (VAR25 = 0; VAR25 < VAR16; ++VAR25)
                {
                    if (VAR2->VAR37[VAR26][VAR25] == 0)
                    {
                        VAR24 += 4;
                    }
                }
                VAR22 = FUN9(VAR2->VAR35, VAR7, VAR24, VAR15);
                if (VAR22 != VAR24)
                {
                    FUN10(VAR2->VAR5, VAR38, "", VAR22, VAR24);
                    return VAR39;
                }
                for (VAR25 = 0; VAR25 < VAR16; ++VAR25)
                {
                    VAR2->VAR13[VAR26][VAR25] = FUN11(VAR15);
                }
            }
        }
        if (VAR20)
        {
            for (VAR25 = 0; VAR25 < VAR16; ++VAR25)
            {
                if (VAR2->VAR37[VAR26][VAR25] != 0)
                {
                    if (FUN12(VAR9[VAR26], VAR36))
                    {
                        VAR14[VAR25] = 23 - FUN13(FUN14(VAR2->VAR37[VAR26][VAR25]));
                    }
                    else
                    {
                        VAR14[VAR25] = 23;
                    }
                    VAR14[VAR25] = FUN15(VAR14[VAR25], VAR20 * 8);
                }
            }
            if (!FUN4(VAR7))
            {
                for (VAR25 = 0; VAR25 < VAR16; ++VAR25)
                {
                    if (VAR2->VAR37[VAR26][VAR25] != 0)
                    {
                        VAR13[VAR26][VAR25] = FUN6(VAR7, VAR14[VAR25]);
                    }
                }
            }
            else
            {
                VAR24 = 0;
                for (VAR25 = 0; VAR25 < VAR16; ++VAR25)
                {
                    if (VAR2->VAR37[VAR26][VAR25])
                    {
                        VAR24 += (int)VAR14[VAR25] / 8;
                        if (VAR14[VAR25] & 7)
                        {
                            ++VAR24;
                        }
                    }
                }
                VAR22 = FUN9(VAR2->VAR35, VAR7, VAR24, VAR15);
                if (VAR22 != VAR24)
                {
                    FUN10(VAR2->VAR5, VAR38, "", VAR22, VAR24);
                    return VAR39;
                }
                VAR30 = 0;
                for (VAR25 = 0; VAR25 < VAR16; ++VAR25)
                {
                    if (VAR2->VAR37[VAR26][VAR25])
                    {
                        if (VAR14[VAR25] & 7)
                        {
                            VAR28 = 8 * ((unsigned int)(VAR14[VAR25] / 8) + 1);
                        }
                        else
                        {
                            VAR28 = VAR14[VAR25];
                        }
                        VAR29 = 0;
                        for (VAR27 = 0; VAR27 < VAR28 / 8; ++VAR27)
                        {
                            VAR29 = (VAR29 << 8) + VAR15[VAR30++];
                        }
                        VAR29 >>= (VAR28 - VAR14[VAR25]);
                        VAR13[VAR26][VAR25] = VAR29;
                    }
                }
            }
        }
        for (VAR25 = 0; VAR25 < VAR16; ++VAR25)
        {
            SoftFloat_IEEE754 VAR40 = FUN2(VAR2->VAR37[VAR26][VAR25], 0);
            VAR40 = FUN16(VAR40, VAR18);
            if (VAR2->VAR37[VAR26][VAR25] != 0)
            {
                if (!FUN12(VAR9[VAR26], VAR36))
                {
                    VAR40 = FUN17(VAR9[VAR26], VAR40);
                }
                VAR31 = VAR40.VAR31;
                VAR32 = VAR40.VAR41;
                VAR33 = (VAR40.VAR42 | 0x800000) + VAR13[VAR26][VAR25];
                while (VAR33 >= 0x1000000)
                {
                    VAR32++;
                    VAR33 >>= 1;
                }
                if (VAR33)
                    VAR32 += (VAR10[VAR26] - 127);
                VAR33 &= 0x007fffffUL;
                VAR22 = (VAR31 << 31) | ((VAR32 + VAR43) << 23) | (VAR33);
                VAR2->VAR37[VAR26][VAR25] = VAR22;
            }
            else
            {
                VAR2->VAR37[VAR26][VAR25] = VAR13[VAR26][VAR25] & 0x007fffffUL;
            }
        }
        FUN18(VAR7);
    }
    return 0;
}