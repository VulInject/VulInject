static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    VAR11 *VAR12;
    int VAR13, VAR14, VAR15, VAR16;
    int VAR17[2];
    short *VAR18;
    short *VAR19;
    VAR5 *VAR20;
    int VAR21;
    unsigned char VAR22 = 0;
    unsigned char VAR23;
    int VAR24 = 0;
    int VAR25;
    uint32_t VAR26;
    int32_t VAR27, VAR28;
    int32_t VAR29, VAR30;
    int32_t VAR31, VAR32;
    int32_t VAR33, VAR34, VAR35, VAR36;
    uint8_t VAR37, VAR38;
    int VAR39, VAR40;
    if (!VAR7)
        return 0;
    if (*VAR4 / 4 < VAR7 + 8)
        return -1;
    VAR18 = VAR3;
    VAR19 = VAR18 + *VAR4 / 2;
    *VAR4 = 0;
    VAR20 = VAR6;
    VAR21 = VAR2->VAR41 == 2 ? 1 : 0;
    switch (VAR2->VAR42->VAR43)
    {
    case VAR44:
        VAR13 = (VAR7 - 2);
        VAR15 = VAR9->VAR15;
        VAR12 = &(VAR9->VAR45[VAR15]);
        VAR12->VAR46 = (*VAR20++) << 8;
        VAR12->VAR46 |= (*VAR20 & 0x80);
        VAR12->VAR46 &= 0xFF80;
        if (VAR12->VAR46 & 0x8000)
            VAR12->VAR46 -= 0x10000;
        FUN2(VAR12->VAR46);
        VAR12->VAR47 = (*VAR20++) & 0x7F;
        if (VAR12->VAR47 > 88)
        {
            FUN3(VAR2, VAR48, "", VAR12->VAR47);
            VAR12->VAR47 = 88;
        }
        VAR12->VAR49 = VAR50[VAR12->VAR47];
        if (VAR21 && VAR15)
            VAR18++;
        for (VAR14 = 32; VAR13 > 0 && VAR14 > 0; VAR13--, VAR14--)
        {
            *VAR18 = FUN4(VAR12, VAR20[0] & 0x0F, 3);
            VAR18 += VAR2->VAR41;
            *VAR18 = FUN4(VAR12, (VAR20[0] >> 4) & 0x0F, 3);
            VAR18 += VAR2->VAR41;
            VAR20++;
        }
        if (VAR21)
        {
            VAR9->VAR15 = (VAR15 + 1) % 2;
            if (VAR15 == 1)
            {
                return VAR20 - VAR6;
            }
        }
        break;
    case VAR51:
        if (VAR2->VAR52 != 0 && VAR7 > VAR2->VAR52)
            VAR7 = VAR2->VAR52;
        for (VAR16 = 0; VAR16 < VAR2->VAR41; VAR16++)
        {
            VAR12 = &(VAR9->VAR45[VAR16]);
            VAR12->VAR46 = (VAR53)(VAR20[0] + (VAR20[1] << 8));
            VAR20 += 2;
            VAR12->VAR47 = *VAR20++;
            if (VAR12->VAR47 > 88)
            {
                FUN3(VAR2, VAR48, "", VAR12->VAR47);
                VAR12->VAR47 = 88;
            }
            if (*VAR20++)
                FUN3(VAR2, VAR48, "", VAR20[-1]);
        }
        while (VAR20 < VAR6 + VAR7)
        {
            for (VAR14 = 0; VAR14 < 4; VAR14++)
            {
                for (VAR16 = 0; VAR16 <= VAR21; VAR16++)
                    *VAR18++ = FUN4(&VAR9->VAR45[VAR16], VAR20[4 * VAR16] & 0x0F, 3);
                for (VAR16 = 0; VAR16 <= VAR21; VAR16++)
                    *VAR18++ = FUN4(&VAR9->VAR45[VAR16], VAR20[4 * VAR16] >> 4, 3);
                VAR20++;
            }
            VAR20 += 4 * VAR21;
        }
        break;
    case VAR54:
        VAR12 = &(VAR9->VAR45[0]);
        VAR9->VAR45[0].VAR46 = (VAR53)(VAR20[0] + (VAR20[1] << 8));
        VAR20 += 2;
        if (VAR21)
        {
            VAR9->VAR45[1].VAR46 = (VAR53)(VAR20[0] + (VAR20[1] << 8));
            VAR20 += 2;
        }
        VAR9->VAR45[0].VAR47 = (VAR53)(VAR20[0] + (VAR20[1] << 8));
        VAR20 += 2;
        if (VAR21)
        {
            VAR9->VAR45[1].VAR47 = (VAR53)(VAR20[0] + (VAR20[1] << 8));
            VAR20 += 2;
        }
        if (VAR12->VAR47 < 0)
            VAR12->VAR47 = 0;
        if (VAR12->VAR47 > 88)
            VAR12->VAR47 = 88;
        VAR14 = (VAR7 - (VAR20 - VAR6)) >> VAR21;
        for (VAR16 = 0; VAR16 < VAR14; VAR16++)
        {
            *VAR18++ = FUN4(&VAR9->VAR45[0], VAR20[VAR16] & 0x0F, 4);
            if (VAR21)
                *VAR18++ = FUN4(&VAR9->VAR45[1], VAR20[VAR16 + VAR14] & 0x0F, 4);
            *VAR18++ = FUN4(&VAR9->VAR45[0], VAR20[VAR16] >> 4, 4);
            if (VAR21)
                *VAR18++ = FUN4(&VAR9->VAR45[1], VAR20[VAR16 + VAR14] >> 4, 4);
        }
        VAR20 += VAR14 << VAR21;
        break;
    case VAR55:
        if (VAR2->VAR52 != 0 && VAR7 > VAR2->VAR52)
            VAR7 = VAR2->VAR52;
        VAR13 = VAR7 - 7 * VAR2->VAR41;
        if (VAR13 < 0)
            return -1;
        VAR17[0] = FUN5(*VAR20++, 0, 7);
        VAR17[1] = 0;
        if (VAR21)
            VAR17[1] = FUN5(*VAR20++, 0, 7);
        VAR9->VAR45[0].VAR56 = (VAR53)((*VAR20 & 0xFF) | ((VAR20[1] << 8) & 0xFF00));
        VAR20 += 2;
        if (VAR21)
        {
            VAR9->VAR45[1].VAR56 = (VAR53)((*VAR20 & 0xFF) | ((VAR20[1] << 8) & 0xFF00));
            VAR20 += 2;
        }
        VAR9->VAR45[0].VAR57 = VAR58[VAR17[0]];
        VAR9->VAR45[0].VAR59 = VAR60[VAR17[0]];
        VAR9->VAR45[1].VAR57 = VAR58[VAR17[1]];
        VAR9->VAR45[1].VAR59 = VAR60[VAR17[1]];
        VAR9->VAR45[0].VAR61 = ((*VAR20 & 0xFF) | ((VAR20[1] << 8) & 0xFF00));
        VAR20 += 2;
        if (VAR21)
            VAR9->VAR45[1].VAR61 = ((*VAR20 & 0xFF) | ((VAR20[1] << 8) & 0xFF00));
        if (VAR21)
            VAR20 += 2;
        VAR9->VAR45[0].VAR62 = ((*VAR20 & 0xFF) | ((VAR20[1] << 8) & 0xFF00));
        VAR20 += 2;
        if (VAR21)
            VAR9->VAR45[1].VAR62 = ((*VAR20 & 0xFF) | ((VAR20[1] << 8) & 0xFF00));
        if (VAR21)
            VAR20 += 2;
        *VAR18++ = VAR9->VAR45[0].VAR61;
        if (VAR21)
            *VAR18++ = VAR9->VAR45[1].VAR61;
        *VAR18++ = VAR9->VAR45[0].VAR62;
        if (VAR21)
            *VAR18++ = VAR9->VAR45[1].VAR62;
        for (; VAR13 > 0; VAR13--)
        {
            *VAR18++ = FUN6(&VAR9->VAR45[0], (VAR20[0] >> 4) & 0x0F);
            *VAR18++ = FUN6(&VAR9->VAR45[VAR21], VAR20[0] & 0x0F);
            VAR20++;
        }
        break;
    case VAR63:
        if (VAR2->VAR52 != 0 && VAR7 > VAR2->VAR52)
            VAR7 = VAR2->VAR52;
        VAR9->VAR45[0].VAR46 = (VAR53)(VAR20[0] | (VAR20[1] << 8));
        VAR9->VAR45[0].VAR47 = VAR20[2];
        VAR20 += 4;
        *VAR18++ = VAR9->VAR45[0].VAR46;
        if (VAR21)
        {
            VAR9->VAR45[1].VAR46 = (VAR53)(VAR20[0] | (VAR20[1] << 8));
            VAR9->VAR45[1].VAR47 = VAR20[2];
            VAR20 += 4;
            *VAR18++ = VAR9->VAR45[1].VAR46;
        }
        while (VAR20 < VAR6 + VAR7)
        {
            *VAR18++ = FUN4(&VAR9->VAR45[0], (VAR20[0] >> 4) & 0x0F, 3);
            if (VAR21)
                *VAR18++ = FUN4(&VAR9->VAR45[1], VAR20[0] & 0x0F, 3);
            else
                *VAR18++ = FUN4(&VAR9->VAR45[0], VAR20[0] & 0x0F, 3);
            VAR20++;
        }
        break;
    case VAR64:
        if (VAR2->VAR52 != 0 && VAR7 > VAR2->VAR52)
            VAR7 = VAR2->VAR52;
        if (VAR7 + 16 > (VAR19 - VAR18) * 3 / 8)
            return -1;
        VAR9->VAR45[0].VAR46 = (VAR53)(VAR20[10] | (VAR20[11] << 8));
        VAR9->VAR45[1].VAR46 = (VAR53)(VAR20[12] | (VAR20[13] << 8));
        VAR9->VAR45[0].VAR47 = VAR20[14];
        VAR9->VAR45[1].VAR47 = VAR20[15];
        VAR20 += 16;
        VAR25 = VAR9->VAR45[1].VAR46;
        while (1)
        {
            FUN7();
            FUN4(&VAR9->VAR45[0], VAR23, 3);
            FUN7();
            FUN4(&VAR9->VAR45[1], VAR23, 3);
            VAR25 = (VAR25 + VAR9->VAR45[1].VAR46) / 2;
            *VAR18++ = VAR9->VAR45[0].VAR46 + VAR9->VAR45[1].VAR46;
            *VAR18++ = VAR9->VAR45[0].VAR46 - VAR9->VAR45[1].VAR46;
            FUN7();
            FUN4(&VAR9->VAR45[0], VAR23, 3);
            VAR25 = (VAR25 + VAR9->VAR45[1].VAR46) / 2;
            *VAR18++ = VAR9->VAR45[0].VAR46 + VAR9->VAR45[1].VAR46;
            *VAR18++ = VAR9->VAR45[0].VAR46 - VAR9->VAR45[1].VAR46;
        }
        break;
    case VAR65:
        while (VAR20 < VAR6 + VAR7)
        {
            if (VAR21)
            {
                *VAR18++ = FUN4(&VAR9->VAR45[0], (VAR20[0] >> 4) & 0x0F, 3);
                *VAR18++ = FUN4(&VAR9->VAR45[1], VAR20[0] & 0x0F, 3);
            }
            else
            {
                *VAR18++ = FUN4(&VAR9->VAR45[0], (VAR20[0] >> 4) & 0x0F, 3);
                *VAR18++ = FUN4(&VAR9->VAR45[0], VAR20[0] & 0x0F, 3);
            }
            VAR20++;
        }
        break;
    case VAR66:
        VAR9->VAR45[0].VAR61 = VAR9->VAR45[0].VAR62 = VAR9->VAR45[1].VAR61 = VAR9->VAR45[1].VAR62 = 0;
        while (VAR7 >= 128)
        {
            FUN8(VAR18, VAR20, &VAR9->VAR45[0], &VAR9->VAR45[1], VAR2->VAR41);
            VAR20 += 128;
            VAR18 += 28 * 8;
            VAR7 -= 128;
        }
        break;
    case VAR67:
        VAR26 = FUN9(VAR20);
        if (VAR26 >= ((VAR7 - 12) * 2))
        {
            VAR20 += VAR7;
            break;
        }
        VAR20 += 4;
        VAR29 = (VAR53)FUN10(VAR20);
        VAR20 += 2;
        VAR27 = (VAR53)FUN10(VAR20);
        VAR20 += 2;
        VAR30 = (VAR53)FUN10(VAR20);
        VAR20 += 2;
        VAR28 = (VAR53)FUN10(VAR20);
        VAR20 += 2;
        for (VAR39 = 0; VAR39 < VAR26 / 28; VAR39++)
        {
            VAR33 = VAR68[(*VAR20 >> 4) & 0x0F];
            VAR34 = VAR68[((*VAR20 >> 4) & 0x0F) + 4];
            VAR35 = VAR68[*VAR20 & 0x0F];
            VAR36 = VAR68[(*VAR20 & 0x0F) + 4];
            VAR20++;
            VAR37 = ((*VAR20 >> 4) & 0x0F) + 8;
            VAR38 = (*VAR20 & 0x0F) + 8;
            VAR20++;
            for (VAR40 = 0; VAR40 < 28; VAR40++)
            {
                VAR31 = (((*VAR20 & 0xF0) << 24) >> VAR37);
                VAR32 = (((*VAR20 & 0x0F) << 28) >> VAR38);
                VAR20++;
                VAR31 = (VAR31 + (VAR29 * VAR33) + (VAR27 * VAR34) + 0x80) >> 8;
                VAR32 = (VAR32 + (VAR30 * VAR35) + (VAR28 * VAR36) + 0x80) >> 8;
                FUN2(VAR31);
                FUN2(VAR32);
                VAR27 = VAR29;
                VAR29 = VAR31;
                VAR28 = VAR30;
                VAR30 = VAR32;
                *VAR18++ = (unsigned short)VAR29;
                *VAR18++ = (unsigned short)VAR30;
            }
        }
        break;
    case VAR69:
        VAR9->VAR45[0].VAR46 = *VAR20;
        VAR20 += 2;
        VAR9->VAR45[0].VAR47 = *VAR20++;
        VAR20++;
        while (VAR20 < VAR6 + VAR7)
        {
            *VAR18++ = FUN4(&VAR9->VAR45[0], *VAR20 & 0x0F, 3);
            *VAR18++ = FUN4(&VAR9->VAR45[0], (*VAR20 >> 4) & 0x0F, 3);
            VAR20++;
        }
        break;
    case VAR70:
        while (VAR20 < VAR6 + VAR7)
        {
            if (VAR21)
            {
                *VAR18++ = FUN11(&VAR9->VAR45[0], (VAR20[0] >> 4) & 0x0F);
                *VAR18++ = FUN11(&VAR9->VAR45[1], VAR20[0] & 0x0F);
            }
            else
            {
                *VAR18++ = FUN11(&VAR9->VAR45[0], (VAR20[0] >> 4) & 0x0F);
                *VAR18++ = FUN11(&VAR9->VAR45[0], VAR20[0] & 0x0F);
            }
            VAR20++;
        }
        break;
    case VAR71:
    case VAR72:
    case VAR73:
        if (!VAR9->VAR45[0].VAR47)
        {
            *VAR18++ = 128 * (*VAR20++ - 0x80);
            if (VAR21)
                *VAR18++ = 128 * (*VAR20++ - 0x80);
            VAR9->VAR45[0].VAR47 = 1;
        }
        if (VAR2->VAR42->VAR43 == VAR71)
        {
            while (VAR20 < VAR6 + VAR7)
            {
                *VAR18++ = FUN12(&VAR9->VAR45[0], (VAR20[0] >> 4) & 0x0F, 4, 0);
                *VAR18++ = FUN12(&VAR9->VAR45[VAR21], VAR20[0] & 0x0F, 4, 0);
                VAR20++;
            }
        }
        else if (VAR2->VAR42->VAR43 == VAR72)
        {
            while (VAR20 < VAR6 + VAR7 && VAR18 + 2 < VAR19)
            {
                *VAR18++ = FUN12(&VAR9->VAR45[0], (VAR20[0] >> 5) & 0x07, 3, 0);
                *VAR18++ = FUN12(&VAR9->VAR45[0], (VAR20[0] >> 2) & 0x07, 3, 0);
                *VAR18++ = FUN12(&VAR9->VAR45[0], VAR20[0] & 0x03, 2, 0);
                VAR20++;
            }
        }
        else
        {
            while (VAR20 < VAR6 + VAR7 && VAR18 + 3 < VAR19)
            {
                *VAR18++ = FUN12(&VAR9->VAR45[0], (VAR20[0] >> 6) & 0x03, 2, 2);
                *VAR18++ = FUN12(&VAR9->VAR45[VAR21], (VAR20[0] >> 4) & 0x03, 2, 2);
                *VAR18++ = FUN12(&VAR9->VAR45[0], (VAR20[0] >> 2) & 0x03, 2, 2);
                *VAR18++ = FUN12(&VAR9->VAR45[VAR21], VAR20[0] & 0x03, 2, 2);
                VAR20++;
            }
        }
        break;
    case VAR74:
    {
        GetBitContext VAR75;
        const int *VAR76;
        int VAR77, VAR78, VAR79;
        int VAR80 = VAR7 * 8;
        FUN13(&VAR75, VAR6, VAR80);
        VAR79 = FUN14(&VAR75, 2) + 2;
        VAR76 = VAR81[VAR79 - 2];
        VAR77 = 1 << (VAR79 - 2);
        VAR78 = 1 << (VAR79 - 1);
        for (VAR16 = 0; VAR16 < VAR2->VAR41; VAR16++)
        {
            *VAR18++ = VAR9->VAR45[VAR16].VAR46 = FUN15(&VAR75, 16);
            VAR9->VAR45[VAR16].VAR47 = FUN14(&VAR75, 6);
        }
        while (FUN16(&VAR75) < VAR80)
        {
            int VAR16;
            for (VAR16 = 0; VAR16 < VAR2->VAR41; VAR16++)
            {
                int VAR82 = FUN14(&VAR75, VAR79);
                int VAR49 = VAR50[VAR9->VAR45[VAR16].VAR47];
                long VAR83 = 0;
                int VAR84 = VAR77;
                do
                {
                    if (VAR82 & VAR84)
                        VAR83 += VAR49;
                    VAR49 >>= 1;
                    VAR84 >>= 1;
                } while (VAR84);
                VAR83 += VAR49;
                if (VAR82 & VAR78)
                    VAR9->VAR45[VAR16].VAR46 -= VAR83;
                else
                    VAR9->VAR45[VAR16].VAR46 += VAR83;
                VAR9->VAR45[VAR16].VAR47 += VAR76[VAR82 & (~VAR78)];
                VAR9->VAR45[VAR16].VAR47 = FUN5(VAR9->VAR45[VAR16].VAR47, 0, 88);
                VAR9->VAR45[VAR16].VAR46 = FUN5(VAR9->VAR45[VAR16].VAR46, -32768, 32767);
                *VAR18++ = VAR9->VAR45[VAR16].VAR46;
                if (VAR18 >= VAR19)
                {
                    FUN3(VAR2, VAR48, "");
                    return -1;
                }
            }
        }
        VAR20 += VAR7;
        break;
    }
    case VAR85:
        while (VAR20 < VAR6 + VAR7)
        {
            if (VAR21)
            {
                *VAR18++ = FUN17(&VAR9->VAR45[0], VAR20[0] & 0x0F);
                *VAR18++ = FUN17(&VAR9->VAR45[1], (VAR20[0] >> 4) & 0x0F);
            }
            else
            {
                *VAR18++ = FUN17(&VAR9->VAR45[0], VAR20[0] & 0x0F);
                *VAR18++ = FUN17(&VAR9->VAR45[0], (VAR20[0] >> 4) & 0x0F);
            }
            VAR20++;
        }
        break;
    case VAR86:
    {
        int VAR76[2][16];
        unsigned int VAR87;
        int VAR88[2][2];
        int VAR89;
        if (VAR7 < 80)
        {
            FUN3(VAR2, VAR48, "");
            return -1;
        }
        VAR20 += 4;
        VAR87 = FUN18(&VAR20);
        for (VAR16 = 0; VAR16 < 32; VAR16++)
            VAR76[0][VAR16] = (VAR53)FUN19(&VAR20);
        for (VAR16 = 0; VAR16 < 4; VAR16++)
            VAR88[0][VAR16] = (VAR53)FUN19(&VAR20);
        if (VAR87 >= (VAR19 - VAR18) / (VAR21 + 1))
        {
            FUN3(VAR2, VAR48, "");
            return -1;
        }
        for (VAR89 = 0; VAR89 <= VAR21; VAR89++)
        {
            VAR18 = (unsigned short *)VAR3 + VAR89;
            for (VAR16 = 0; VAR16 < VAR87 / 14; VAR16++)
            {
                int VAR90 = (*VAR20 >> 4) & 7;
                unsigned int VAR91 = 28 - (*VAR20++ & 15);
                int VAR92 = VAR76[VAR89][VAR90 * 2];
                int VAR93 = VAR76[VAR89][VAR90 * 2 + 1];
                for (VAR13 = 0; VAR13 < 14; VAR13++)
                {
                    int32_t VAR94;
                    if (VAR13 & 1)
                        VAR94 = *VAR20++ << 28;
                    else
                        VAR94 = (*VAR20 & 0xF0) << 24;
                    *VAR18 = ((VAR88[VAR89][0] * VAR92 + VAR88[VAR89][1] * VAR93) >> 11) + (VAR94 >> VAR91);
                    VAR88[VAR89][1] = VAR88[VAR89][0];
                    VAR88[VAR89][0] = *VAR18++;
                    VAR18 += VAR21;
                }
            }
        }
        VAR18 -= VAR21;
        break;
    }
    default:
        return -1;
    }
    *VAR4 = (VAR5 *)VAR18 - (VAR5 *)VAR3;
    return VAR20 - VAR6;
}