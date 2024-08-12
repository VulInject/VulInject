static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    int VAR7 = 0, VAR8;
    const int VAR9 = VAR2->VAR9;
    VAR10 *VAR11 = VAR3;
    VAR12 *VAR13, *VAR14, *VAR15;
    const VAR16 *VAR17, *VAR18 = VAR6->VAR3;
    int VAR19 = VAR2->VAR9 * 8 / 3;
    if (VAR9 == 1)
    {
        FUN2(VAR2, VAR20, "");
        return VAR21;
    }
    if (VAR2->VAR22 == FUN3('', '', '', '') && VAR6->VAR23 % VAR2->VAR24 == 0 && VAR6->VAR23 / VAR2->VAR24 * 3 >= VAR9 * 8)
        VAR19 = VAR6->VAR23 / VAR2->VAR24;
    if (VAR6->VAR23 < VAR2->VAR24 * VAR19)
    {
        FUN2(VAR2, VAR20, "", VAR6->VAR23, VAR2->VAR24 * VAR19);
        return VAR21;
    }
    if ((VAR8 = FUN4(VAR2, VAR11, 0)) < 0)
        return VAR8;
    VAR11->VAR25 = VAR26;
    VAR11->VAR27 = 1;
    VAR13 = (VAR12 *)VAR11->VAR3[0];
    VAR14 = (VAR12 *)VAR11->VAR3[1];
    VAR15 = (VAR12 *)VAR11->VAR3[2];
    VAR17 = VAR6->VAR3 + VAR19;
    while (VAR7++ < VAR2->VAR24)
    {
        while (1)
        {
            uint32_t VAR28 = FUN5(VAR18);
            VAR18 += 4;
            *VAR14++ = VAR28 << 6 & 0xFFC0;
            *VAR13++ = VAR28 >> 4 & 0xFFC0;
            *VAR15++ = VAR28 >> 14 & 0xFFC0;
            if (VAR18 >= VAR17 - 1)
            {
                *VAR13 = 0x80;
                VAR18++;
                VAR17 += VAR19;
                VAR13 = (VAR12 *)(VAR11->VAR3[0] + VAR7 * VAR11->VAR29[0]);
                VAR14 = (VAR12 *)(VAR11->VAR3[1] + VAR7 * VAR11->VAR29[1]);
                VAR15 = (VAR12 *)(VAR11->VAR3[2] + VAR7 * VAR11->VAR29[2]);
                break;
            }
            VAR28 = FUN5(VAR18);
            VAR18 += 4;
            *VAR13++ = VAR28 << 6 & 0xFFC0;
            *VAR14++ = VAR28 >> 4 & 0xFFC0;
            *VAR13++ = VAR28 >> 14 & 0xFFC0;
            if (VAR18 >= VAR17 - 2)
            {
                if (!(VAR9 & 1))
                {
                    *VAR13 = 0x80;
                    VAR18 += 2;
                }
                VAR17 += VAR19;
                VAR13 = (VAR12 *)(VAR11->VAR3[0] + VAR7 * VAR11->VAR29[0]);
                VAR14 = (VAR12 *)(VAR11->VAR3[1] + VAR7 * VAR11->VAR29[1]);
                VAR15 = (VAR12 *)(VAR11->VAR3[2] + VAR7 * VAR11->VAR29[2]);
                break;
            }
            VAR28 = FUN5(VAR18);
            VAR18 += 4;
            *VAR15++ = VAR28 << 6 & 0xFFC0;
            *VAR13++ = VAR28 >> 4 & 0xFFC0;
            *VAR14++ = VAR28 >> 14 & 0xFFC0;
            if (VAR18 >= VAR17 - 1)
            {
                *VAR13 = 0x80;
                VAR18++;
                VAR17 += VAR19;
                VAR13 = (VAR12 *)(VAR11->VAR3[0] + VAR7 * VAR11->VAR29[0]);
                VAR14 = (VAR12 *)(VAR11->VAR3[1] + VAR7 * VAR11->VAR29[1]);
                VAR15 = (VAR12 *)(VAR11->VAR3[2] + VAR7 * VAR11->VAR29[2]);
                break;
            }
            VAR28 = FUN5(VAR18);
            VAR18 += 4;
            *VAR13++ = VAR28 << 6 & 0xFFC0;
            *VAR15++ = VAR28 >> 4 & 0xFFC0;
            *VAR13++ = VAR28 >> 14 & 0xFFC0;
            if (VAR18 >= VAR17 - 2)
            {
                if (VAR9 & 1)
                {
                    *VAR13 = 0x80;
                    VAR18 += 2;
                }
                VAR17 += VAR19;
                VAR13 = (VAR12 *)(VAR11->VAR3[0] + VAR7 * VAR11->VAR29[0]);
                VAR14 = (VAR12 *)(VAR11->VAR3[1] + VAR7 * VAR11->VAR29[1]);
                VAR15 = (VAR12 *)(VAR11->VAR3[2] + VAR7 * VAR11->VAR29[2]);
                break;
            }
        }
    }
    *VAR4 = 1;
    return VAR6->VAR23;
}