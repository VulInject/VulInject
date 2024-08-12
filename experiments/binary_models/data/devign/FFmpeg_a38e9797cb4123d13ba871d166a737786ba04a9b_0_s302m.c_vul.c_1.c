static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *VAR11 = VAR3;
    const VAR12 *VAR13 = VAR6->VAR3;
    int VAR14 = VAR6->VAR15;
    int VAR16, VAR17;
    int VAR18;
    int VAR19 = -1;
    int VAR20 = FUN2(VAR2, VAR13, VAR14);
    if (VAR20 < 0)
        return VAR20;
    VAR14 -= VAR21;
    VAR13 += VAR21;
    VAR16 = (VAR2->VAR22 + 4) / 4;
    VAR11->VAR23 = 2 * (VAR14 / VAR16) / VAR2->VAR24;
    if ((VAR17 = FUN3(VAR2, VAR11, 0)) < 0)
        return VAR17;
    VAR2->VAR25 = 48000 * VAR2->VAR24 * (VAR2->VAR22 + 4) + 32 * 48000 / VAR11->VAR23;
    VAR14 = (VAR11->VAR23 * VAR2->VAR24 / 2) * VAR16;
    if (VAR2->VAR22 == 24)
    {
        VAR26 *VAR27 = (VAR26 *)VAR11->VAR3[0];
        for (; VAR14 > 6; VAR14 -= 7)
        {
            *VAR27++ = (VAR28[VAR13[2]] << 24) | (VAR28[VAR13[1]] << 16) | (VAR28[VAR13[0]] << 8);
            *VAR27++ = (VAR28[VAR13[6] & 0xf0] << 28) | (VAR28[VAR13[5]] << 20) | (VAR28[VAR13[4]] << 12) | (VAR28[VAR13[3] & 0x0f] << 4);
            VAR13 += 7;
        }
        VAR27 = (VAR26 *)VAR11->VAR3[0];
        if (VAR2->VAR24 == 2)
            for (VAR18 = 0; VAR18 < VAR11->VAR23 * 2 - 6; VAR18 += 2)
            {
                if (VAR27[VAR18] || VAR27[VAR18 + 1] || VAR27[VAR18 + 2] || VAR27[VAR18 + 3])
                    break;
                if (VAR27[VAR18 + 4] == 0x96F87200U && VAR27[VAR18 + 5] == 0xA54E1F00)
                {
                    VAR19 = (VAR27[VAR18 + 6] >> 16) & 0x1F;
                    break;
                }
            }
    }
    else if (VAR2->VAR22 == 20)
    {
        VAR26 *VAR27 = (VAR26 *)VAR11->VAR3[0];
        for (; VAR14 > 5; VAR14 -= 6)
        {
            *VAR27++ = (VAR28[VAR13[2] & 0xf0] << 28) | (VAR28[VAR13[1]] << 20) | (VAR28[VAR13[0]] << 12);
            *VAR27++ = (VAR28[VAR13[5] & 0xf0] << 28) | (VAR28[VAR13[4]] << 20) | (VAR28[VAR13[3]] << 12);
            VAR13 += 6;
        }
        VAR27 = (VAR26 *)VAR11->VAR3[0];
        if (VAR2->VAR24 == 2)
            for (VAR18 = 0; VAR18 < VAR11->VAR23 * 2 - 6; VAR18 += 2)
            {
                if (VAR27[VAR18] || VAR27[VAR18 + 1] || VAR27[VAR18 + 2] || VAR27[VAR18 + 3])
                    break;
                if (VAR27[VAR18 + 4] == 0x6F872000U && VAR27[VAR18 + 5] == 0x54E1F000)
                {
                    VAR19 = (VAR27[VAR18 + 6] >> 16) & 0x1F;
                    break;
                }
            }
    }
    else
    {
        VAR29 *VAR27 = (VAR29 *)VAR11->VAR3[0];
        for (; VAR14 > 4; VAR14 -= 5)
        {
            *VAR27++ = (VAR28[VAR13[1]] << 8) | VAR28[VAR13[0]];
            *VAR27++ = (VAR28[VAR13[4] & 0xf0] << 12) | (VAR28[VAR13[3]] << 4) | (VAR28[VAR13[2]] >> 4);
            VAR13 += 5;
        }
        VAR27 = (VAR29 *)VAR11->VAR3[0];
        if (VAR2->VAR24 == 2)
            for (VAR18 = 0; VAR18 < VAR11->VAR23 * 2 - 6; VAR18 += 2)
            {
                if (VAR27[VAR18] || VAR27[VAR18 + 1] || VAR27[VAR18 + 2] || VAR27[VAR18 + 3])
                    break;
                if (VAR27[VAR18 + 4] == 0xF872U && VAR27[VAR18 + 5] == 0x4E1F)
                {
                    VAR19 = (VAR27[VAR18 + 6] & 0x1F);
                    break;
                }
            }
    }
    if (VAR19 != -1)
    {
        if (VAR8->VAR30 == 3)
        {
            FUN4(VAR2, VAR31, "", VAR19);
            return VAR32;
        }
        if (VAR8->VAR30 & 1)
        {
            return VAR6->VAR15;
        }
    }
    VAR2->VAR33 = 48000;
    *VAR4 = 1;
    return VAR6->VAR15;
}