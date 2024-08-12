static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6, int *VAR7)
{
    int VAR8, VAR9, VAR10, VAR11, VAR12;
    const int *VAR13;
    int VAR14;
    int VAR15 = 0;
    unsigned int VAR16, VAR17;
    FUN2(VAR4);
    FUN3(VAR4);
    if (VAR2->VAR18)
    {
        if (!VAR2->VAR19)
        {
            if (VAR5 < 4)
                VAR12 = VAR2->VAR20;
            else
                VAR12 = VAR2->VAR21;
            VAR12 = VAR12 << 3;
        }
        else
            VAR12 = 1 << 3;
        VAR4[0] = (VAR4[0] + (VAR12 >> 1)) / VAR12;
        VAR8 = 1;
        VAR11 = 0;
        VAR13 = VAR2->VAR22[VAR6];
        VAR14 = VAR2->VAR23 << (VAR24 - 3 - VAR25);
    }
    else
    {
        VAR8 = 0;
        VAR11 = -1;
        VAR13 = VAR2->VAR26[VAR6];
        VAR14 = VAR2->VAR27 << (VAR24 - 3 - VAR25);
    }
    VAR16 = (1 << (VAR24 - 3)) - VAR14 - 1;
    VAR17 = VAR16 << 1;
    for (; VAR8 < 64; VAR8++)
    {
        VAR9 = VAR28[VAR8];
        VAR10 = VAR4[VAR9];
        VAR10 = VAR10 * VAR13[VAR9];
        if (((unsigned)(VAR10 + VAR16)) > VAR17)
        {
            if (VAR10 > 0)
            {
                VAR10 = (VAR14 + VAR10) >> (VAR24 - 3);
                VAR4[VAR9] = VAR10;
            }
            else
            {
                VAR10 = (VAR14 - VAR10) >> (VAR24 - 3);
                VAR4[VAR9] = -VAR10;
            }
            VAR15 |= VAR10;
            VAR11 = VAR8;
        }
        else
        {
            VAR4[VAR9] = 0;
        }
    }
    *VAR7 = VAR2->VAR29 < VAR15;
    return VAR11;
}
static void FUN4(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6)
{
    int VAR8, VAR10, VAR30;
    const VAR31 *VAR32;
    if (VAR2->VAR33)
        VAR30 = 64;
    else
        VAR30 = VAR2->VAR34[VAR5] + 1;
    if (VAR2->VAR18)
    {
        if (VAR5 < 4)
            VAR4[0] = VAR4[0] * VAR2->VAR20;
        else
            VAR4[0] = VAR4[0] * VAR2->VAR21;
        VAR32 = VAR2->VAR35;
        for (VAR8 = 1; VAR8 < VAR30; VAR8++)
        {
            int VAR9 = VAR28[VAR8];
            VAR10 = VAR4[VAR9];
            if (VAR10)
            {
                if (VAR10 < 0)
                {
                    VAR10 = -VAR10;
                    VAR10 = (int)(VAR10 * VAR6 * VAR32[VAR9]) >> 3;
                    VAR10 = (VAR10 - 1) | 1;
                    VAR10 = -VAR10;
                }
                else
                {
                    VAR10 = (int)(VAR10 * VAR6 * VAR32[VAR9]) >> 3;
                    VAR10 = (VAR10 - 1) | 1;
                }
                if (VAR10 < -2048 || VAR10 > 2047)
                    fprintf(VAR36, "", VAR8, VAR10);
                VAR4[VAR9] = VAR10;
            }
        }
    }
    else
    {
        VAR8 = 0;
        VAR32 = VAR2->VAR37;
        for (; VAR8 < VAR30; VAR8++)
        {
            int VAR9 = VAR28[VAR8];
            VAR10 = VAR4[VAR9];
            if (VAR10)
            {
                if (VAR10 < 0)
                {
                    VAR10 = -VAR10;
                    VAR10 = (((VAR10 << 1) + 1) * VAR6 * ((int)(VAR32[VAR9]))) >> 4;
                    VAR10 = (VAR10 - 1) | 1;
                    VAR10 = -VAR10;
                }
                else
                {
                    VAR10 = (((VAR10 << 1) + 1) * VAR6 * ((int)(VAR32[VAR9]))) >> 4;
                    VAR10 = (VAR10 - 1) | 1;
                }
                if (VAR10 < -2048 || VAR10 > 2047)
                    fprintf(VAR36, "", VAR8, VAR10);
                VAR4[VAR9] = VAR10;
            }
        }
    }
}
static void FUN5(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6)
{
    int VAR8, VAR10, VAR30;
    const VAR31 *VAR32;
    if (VAR2->VAR33)
        VAR30 = 64;
    else
        VAR30 = VAR2->VAR34[VAR5] + 1;
    if (VAR2->VAR18)
    {
        if (VAR5 < 4)
            VAR4[0] = VAR4[0] * VAR2->VAR20;
        else
            VAR4[0] = VAR4[0] * VAR2->VAR21;
        VAR32 = VAR2->VAR35;
        for (VAR8 = 1; VAR8 < VAR30; VAR8++)
        {
            int VAR9 = VAR28[VAR8];
            VAR10 = VAR4[VAR9];
            if (VAR10)
            {
                if (VAR10 < 0)
                {
                    VAR10 = -VAR10;
                    VAR10 = (int)(VAR10 * VAR6 * VAR32[VAR9]) >> 3;
                    VAR10 = -VAR10;
                }
                else
                {
                    VAR10 = (int)(VAR10 * VAR6 * VAR32[VAR9]) >> 3;
                }
                if (VAR10 < -2048 || VAR10 > 2047)
                    fprintf(VAR36, "", VAR8, VAR10);
                VAR4[VAR9] = VAR10;
            }
        }
    }
    else
    {
        int VAR38 = -1;
        VAR8 = 0;
        VAR32 = VAR2->VAR37;
        for (; VAR8 < VAR30; VAR8++)
        {
            int VAR9 = VAR28[VAR8];
            VAR10 = VAR4[VAR9];
            if (VAR10)
            {
                if (VAR10 < 0)
                {
                    VAR10 = -VAR10;
                    VAR10 = (((VAR10 << 1) + 1) * VAR6 * ((int)(VAR32[VAR9]))) >> 4;
                    VAR10 = -VAR10;
                }
                else
                {
                    VAR10 = (((VAR10 << 1) + 1) * VAR6 * ((int)(VAR32[VAR9]))) >> 4;
                }
                if (VAR10 < -2048 || VAR10 > 2047)
                    fprintf(VAR36, "", VAR8, VAR10);
                VAR4[VAR9] = VAR10;
                VAR38 += VAR10;
            }
        }
        VAR4[63] ^= VAR38 & 1;
    }
}
static void FUN6(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6)
{
    int VAR8, VAR10, VAR39, VAR40;
    int VAR30;
    if (VAR2->VAR18)
    {
        if (!VAR2->VAR19)
        {
            if (VAR5 < 4)
                VAR4[0] = VAR4[0] * VAR2->VAR20;
            else
                VAR4[0] = VAR4[0] * VAR2->VAR21;
        }
        VAR8 = 1;
        VAR30 = 64;
    }
    else
    {
        VAR8 = 0;
        VAR30 = VAR41[VAR2->VAR34[VAR5]];
    }
    VAR39 = VAR2->VAR6 << 1;
    if (VAR2->VAR19 && VAR2->VAR18)
        VAR40 = 0;
    else
        VAR40 = (VAR2->VAR6 - 1) | 1;
    for (; VAR8 < VAR30; VAR8++)
    {
        VAR10 = VAR4[VAR8];
        if (VAR10)
        {
            if (VAR10 < 0)
            {
                VAR10 = VAR10 * VAR39 - VAR40;
            }
            else
            {
                VAR10 = VAR10 * VAR39 + VAR40;
            }
            if (VAR10 < -2048 || VAR10 > 2047)
                fprintf(VAR36, "", VAR8, VAR10);
            VAR4[VAR8] = VAR10;
        }
    }
}
static void FUN7(VAR1 *VAR2, VAR42 *VAR43, VAR42 *VAR44, VAR42 *VAR45, int VAR46, int VAR47)
{
    int VAR48, VAR49, VAR50, VAR51, VAR8;
    for (VAR8 = 0; VAR8 < 4; VAR8++)
    {
        VAR48 = VAR2->VAR52[0][VAR46 * 2 + 1 + (VAR8 & 1) + (VAR47 * 2 + 1 + (VAR8 >> 1)) * (VAR2->VAR53 * 2 + 2)];
        for (VAR51 = 0; VAR51 < 8; VAR51++)
        {
            int VAR54;
            for (VAR54 = 0; VAR54 < 8; VAR54++)
            {
                VAR43[VAR54 + (VAR8 & 1) * 8 + (VAR51 + (VAR8 >> 1) * 8) * VAR2->VAR55] = VAR48 / 8;
            }
        }
    }
    VAR49 = VAR2->VAR52[1][VAR46 + 1 + (VAR47 + 1) * (VAR2->VAR53 + 2)];
    VAR50 = VAR2->VAR52[2][VAR46 + 1 + (VAR47 + 1) * (VAR2->VAR53 + 2)];
    for (VAR51 = 0; VAR51 < 8; VAR51++)
    {
        int VAR54;
        for (VAR54 = 0; VAR54 < 8; VAR54++)
        {
            VAR44[VAR54 + VAR51 * (VAR2->VAR55 >> 1)] = VAR49 / 8;
            VAR45[VAR54 + VAR51 * (VAR2->VAR55 >> 1)] = VAR50 / 8;
        }
    }
}
void FUN8(VAR1 *VAR2, int VAR56)
{
    int VAR46 = VAR2->VAR46;
    int VAR47 = VAR2->VAR47;
    int VAR57 = 0;
    int VAR8, VAR58 = 0, VAR59 = 0;
    int VAR60 = VAR2->VAR61 ? 50 : 50;
    int VAR62 = VAR2->VAR61 ? 50 : 50;
    if (VAR46 >= VAR2->VAR53)
        VAR46 = VAR2->VAR53 - 1;
    if (VAR47 >= VAR2->VAR63)
        VAR47 = VAR2->VAR63 - 1;
    if (VAR2->VAR64 == 0 && VAR56)
    {
        if (VAR2->VAR65 && VAR2->VAR66 != VAR67)
            VAR2->VAR64 = VAR68;
        else
            VAR2->VAR64 = VAR69;
    }
    if (VAR2->VAR64 == VAR69 && VAR2->VAR66 != VAR67)
        VAR2->VAR70 = 1;
    for (VAR8 = VAR46 + VAR47 * VAR2->VAR53; VAR8 >= 0; VAR8--)
    {
        if (VAR2->VAR71[VAR8])
            VAR58++;
        else
            VAR59++;
    }
    if (VAR2->VAR64 == VAR68)
    {
        VAR60 *= 2;
        VAR62 *= 2;
    }
    else if (VAR2->VAR64 == VAR72)
    {
        VAR60 *= 2;
        VAR62 *= 2;
    }
    if (VAR56 && (VAR58 < VAR59))
    {
        VAR60 = VAR62 = VAR2->VAR73;
    }
    fprintf(VAR36, "");
    for (; VAR47 >= 0 && VAR47 >= VAR2->VAR74; VAR47--)
    {
        for (; VAR46 >= 0; VAR46--)
        {
            VAR42 *VAR43 = VAR2->VAR75[0] + (VAR47 * 16 * VAR2->VAR55) + VAR46 * 16;
            VAR42 *VAR44 = VAR2->VAR75[1] + (VAR47 * 8 * (VAR2->VAR55 >> 1)) + VAR46 * 8;
            VAR42 *VAR45 = VAR2->VAR75[2] + (VAR47 * 8 * (VAR2->VAR55 >> 1)) + VAR46 * 8;
            int VAR76 = VAR2->VAR46;
            int VAR77 = VAR2->VAR47;
            VAR2->VAR46 = VAR46;
            VAR2->VAR47 = VAR47;
            if (VAR2->VAR71[VAR47 * VAR2->VAR53 + VAR46] && VAR57 < VAR60)
            {
                if (VAR2->VAR64 == VAR68)
                {
                    FUN7(VAR2, VAR43, VAR44, VAR45, VAR46, VAR47);
                }
                else
                {
                    FUN9(VAR2, VAR43, VAR44, VAR45, 0, VAR2->VAR78, 0, 0, VAR79, 0, 0, 16);
                }
            }
            else if (!VAR2->VAR71[VAR47 * VAR2->VAR53 + VAR46] && VAR57 < VAR62)
            {
                int VAR80 = 0;
                int VAR81 = 0;
                if (VAR2->VAR64 != VAR69)
                {
                    int VAR82 = VAR46 * 2 + 1 + (VAR47 * 2 + 1) * (VAR2->VAR53 * 2 + 2);
                    VAR80 = VAR2->VAR83[VAR82][0];
                    VAR81 = VAR2->VAR83[VAR82][1];
                }
                FUN9(VAR2, VAR43, VAR44, VAR45, 0, VAR2->VAR78, 0, 0, VAR79, VAR80, VAR81, 16);
            }
            VAR2->VAR46 = VAR76;
            VAR2->VAR47 = VAR77;
            if (VAR46 == VAR2->VAR84 && VAR47 == VAR2->VAR74)
                return;
            if (!VAR2->VAR85[VAR46 + VAR47 * VAR2->VAR53])
                VAR57++;
        }
        VAR46 = VAR2->VAR53 - 1;
    }
}
AVCodec VAR86 = {
    "",
    VAR87,
    VAR88,
    sizeof(VAR1),
    VAR89,
    VAR90,
    VAR91,
};
AVCodec VAR92 = {
    "",
    VAR87,
    VAR93,
    sizeof(VAR1),
    VAR89,
    VAR90,
    VAR91,
};
AVCodec VAR94 = {
    "",
    VAR87,
    VAR95,
    sizeof(VAR1),
    VAR89,
    VAR90,
    VAR91,
};
AVCodec VAR96 = {
    "",
    VAR87,
    VAR97,
    sizeof(VAR1),
    VAR89,
    VAR90,
    VAR91,
};
AVCodec VAR98 = {
    "",
    VAR87,
    VAR99,
    sizeof(VAR1),
    VAR89,
    VAR90,
    VAR91,
};
AVCodec VAR100 = {
    "",
    VAR87,
    VAR101,
    sizeof(VAR1),
    VAR89,
    VAR90,
    VAR91,
};
AVCodec VAR102 = {
    "",
    VAR87,
    VAR103,
    sizeof(VAR1),
    VAR89,
    VAR90,
    VAR91,
};
AVCodec VAR104 = {
    "",
    VAR87,
    VAR105,
    sizeof(VAR1),
    VAR89,
    VAR90,
    VAR91,
};
AVCodec VAR106 = {
    "",
    VAR87,
    VAR107,
    sizeof(VAR1),
    VAR89,
    VAR90,
    VAR91,
};