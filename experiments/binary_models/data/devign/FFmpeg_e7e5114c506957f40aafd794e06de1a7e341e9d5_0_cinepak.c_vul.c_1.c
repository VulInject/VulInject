static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6, const VAR7 *VAR8)
{
    const VAR7 *VAR9 = (VAR8 + VAR6);
    uint32_t VAR10, VAR11;
    VAR7 *VAR12, *VAR13, *VAR14, *VAR15;
    unsigned int VAR16, VAR17;
    char *VAR18, *VAR19, *VAR20, *VAR21;
    VAR10 = 0;
    VAR11 = 0;
    for (VAR17 = VAR4->VAR22; VAR17 < VAR4->VAR23; VAR17 += 4)
    {
        VAR18 = VAR19 = VAR20 = VAR21 = VAR2->VAR24->VAR8[0] + (VAR2->VAR25 ? VAR4->VAR26 : VAR4->VAR26 * 3) + (VAR17 * VAR2->VAR24->VAR27[0]);
        if (VAR2->VAR28->VAR29 - VAR17 > 1)
        {
            VAR19 = VAR18 + VAR2->VAR24->VAR27[0];
            if (VAR2->VAR28->VAR29 - VAR17 > 2)
            {
                VAR20 = VAR19 + VAR2->VAR24->VAR27[0];
                if (VAR2->VAR28->VAR29 - VAR17 > 3)
                {
                    VAR21 = VAR20 + VAR2->VAR24->VAR27[0];
                }
            }
        }
        for (VAR16 = VAR4->VAR26; VAR16 < VAR4->VAR30; VAR16 += 4)
        {
            if ((VAR5 & 0x01) && !(VAR11 >>= 1))
            {
                if ((VAR8 + 4) > VAR9)
                    return VAR31;
                VAR10 = FUN2(VAR8);
                VAR8 += 4;
                VAR11 = 0x80000000;
            }
            if (!(VAR5 & 0x01) || (VAR10 & VAR11))
            {
                if (!(VAR5 & 0x02) && !(VAR11 >>= 1))
                {
                    if ((VAR8 + 4) > VAR9)
                        return VAR31;
                    VAR10 = FUN2(VAR8);
                    VAR8 += 4;
                    VAR11 = 0x80000000;
                }
                if ((VAR5 & 0x02) || (~VAR10 & VAR11))
                {
                    VAR7 *VAR32;
                    if (VAR8 >= VAR9)
                        return VAR31;
                    VAR32 = VAR4->VAR33[*VAR8++];
                    if (VAR2->VAR25)
                    {
                        VAR21[0] = VAR21[1] = VAR20[0] = VAR20[1] = VAR32[6];
                        VAR21[2] = VAR21[3] = VAR20[2] = VAR20[3] = VAR32[9];
                        VAR19[0] = VAR19[1] = VAR18[0] = VAR18[1] = VAR32[0];
                        VAR19[2] = VAR19[3] = VAR18[2] = VAR18[3] = VAR32[3];
                    }
                    else
                    {
                        VAR32 += 6;
                        memcpy(VAR21 + 0, VAR32, 3);
                        memcpy(VAR21 + 3, VAR32, 3);
                        memcpy(VAR20 + 0, VAR32, 3);
                        memcpy(VAR20 + 3, VAR32, 3);
                        VAR32 += 3;
                        memcpy(VAR21 + 6, VAR32, 3);
                        memcpy(VAR21 + 9, VAR32, 3);
                        memcpy(VAR20 + 6, VAR32, 3);
                        memcpy(VAR20 + 9, VAR32, 3);
                        VAR32 -= 9;
                        memcpy(VAR19 + 0, VAR32, 3);
                        memcpy(VAR19 + 3, VAR32, 3);
                        memcpy(VAR18 + 0, VAR32, 3);
                        memcpy(VAR18 + 3, VAR32, 3);
                        VAR32 += 3;
                        memcpy(VAR19 + 6, VAR32, 3);
                        memcpy(VAR19 + 9, VAR32, 3);
                        memcpy(VAR18 + 6, VAR32, 3);
                        memcpy(VAR18 + 9, VAR32, 3);
                    }
                }
                else if (VAR10 & VAR11)
                {
                    if ((VAR8 + 4) > VAR9)
                        return VAR31;
                    VAR12 = VAR4->VAR34[*VAR8++];
                    VAR13 = VAR4->VAR34[*VAR8++];
                    VAR14 = VAR4->VAR34[*VAR8++];
                    VAR15 = VAR4->VAR34[*VAR8++];
                    if (VAR2->VAR25)
                    {
                        VAR7 *VAR32;
                        VAR32 = VAR21;
                        *VAR32++ = VAR14[6];
                        *VAR32++ = VAR14[9];
                        *VAR32++ = VAR15[6];
                        *VAR32 = VAR15[9];
                        VAR32 = VAR20;
                        *VAR32++ = VAR14[0];
                        *VAR32++ = VAR14[3];
                        *VAR32++ = VAR15[0];
                        *VAR32 = VAR15[3];
                        VAR32 = VAR19;
                        *VAR32++ = VAR12[6];
                        *VAR32++ = VAR12[9];
                        *VAR32++ = VAR13[6];
                        *VAR32 = VAR13[9];
                        VAR32 = VAR18;
                        *VAR32++ = VAR12[0];
                        *VAR32++ = VAR12[3];
                        *VAR32++ = VAR13[0];
                        *VAR32 = VAR13[3];
                    }
                    else
                    {
                        memcpy(VAR21 + 0, VAR14 + 6, 6);
                        memcpy(VAR21 + 6, VAR15 + 6, 6);
                        memcpy(VAR20 + 0, VAR14 + 0, 6);
                        memcpy(VAR20 + 6, VAR15 + 0, 6);
                        memcpy(VAR19 + 0, VAR12 + 6, 6);
                        memcpy(VAR19 + 6, VAR13 + 6, 6);
                        memcpy(VAR18 + 0, VAR12 + 0, 6);
                        memcpy(VAR18 + 6, VAR13 + 0, 6);
                    }
                }
            }
            if (VAR2->VAR25)
            {
                VAR18 += 4;
                VAR19 += 4;
                VAR20 += 4;
                VAR21 += 4;
            }
            else
            {
                VAR18 += 12;
                VAR19 += 12;
                VAR20 += 12;
                VAR21 += 12;
            }
        }
    }
    return 0;
}