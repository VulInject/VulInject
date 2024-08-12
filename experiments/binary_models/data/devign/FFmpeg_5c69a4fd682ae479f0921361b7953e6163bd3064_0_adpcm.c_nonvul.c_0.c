static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    VAR11 *VAR12;
    int VAR13, VAR14, VAR15, VAR16;
    int VAR17[2];
    short *VAR18;
    VAR5 *VAR19;
    int VAR20;
    unsigned char VAR21 = 0;
    unsigned char VAR22;
    int VAR23 = 0;
    int VAR24;
    VAR18 = VAR3;
    VAR19 = VAR6;
    VAR20 = VAR2->VAR25 == 2;
    switch (VAR2->VAR26->VAR27)
    {
    case VAR28:
        VAR13 = (VAR7 - 2);
        VAR15 = VAR9->VAR15;
        VAR12 = &(VAR9->VAR29[VAR15]);
        VAR12->VAR30 = (*VAR19++) << 8;
        VAR12->VAR30 |= (*VAR19 & 0x80);
        VAR12->VAR30 &= 0xFF80;
        if (VAR12->VAR30 & 0x8000)
            VAR12->VAR30 -= 0x10000;
        FUN2(VAR12->VAR30);
        VAR12->VAR31 = (*VAR19++) & 0x7F;
        if (VAR12->VAR31 > 88)
            fprintf(VAR32, "", VAR12->VAR31);
        if (VAR12->VAR31 > 88)
            VAR12->VAR31 = 88;
        VAR12->VAR33 = VAR34[VAR12->VAR31];
        if (VAR20 && VAR15)
            VAR18++;
        *VAR18++ = VAR12->VAR30;
        VAR18 += VAR20;
        for (VAR14 = 32; VAR13 > 0 && VAR14 > 0; VAR13--, VAR14--)
        {
            *VAR18 = FUN3(VAR12, VAR19[0] & 0x0F);
            VAR18 += VAR2->VAR25;
            *VAR18 = FUN3(VAR12, (VAR19[0] >> 4) & 0x0F);
            VAR18 += VAR2->VAR25;
            VAR19++;
        }
        if (VAR20)
        {
            VAR9->VAR15 = (VAR15 + 1) % 2;
            if (VAR15 == 0)
            {
                *VAR4 = 0;
                return VAR19 - VAR6;
            }
        }
        break;
    case VAR35:
        if (VAR2->VAR36 != 0 && VAR7 > VAR2->VAR36)
            VAR7 = VAR2->VAR36;
        VAR12 = &(VAR9->VAR29[0]);
        VAR12->VAR30 = (*VAR19++) & 0x0FF;
        VAR12->VAR30 |= ((*VAR19++) << 8) & 0x0FF00;
        if (VAR12->VAR30 & 0x8000)
            VAR12->VAR30 -= 0x10000;
        FUN2(VAR12->VAR30);
        VAR12->VAR31 = *VAR19++;
        if (VAR12->VAR31 < 0)
            VAR12->VAR31 = 0;
        if (VAR12->VAR31 > 88)
            VAR12->VAR31 = 88;
        if (*VAR19++)
            fprintf(VAR32, "");
        if (VAR20)
        {
            VAR12 = &(VAR9->VAR29[1]);
            VAR12->VAR30 = (*VAR19++) & 0x0FF;
            VAR12->VAR30 |= ((*VAR19++) << 8) & 0x0FF00;
            if (VAR12->VAR30 & 0x8000)
                VAR12->VAR30 -= 0x10000;
            FUN2(VAR12->VAR30);
            VAR12->VAR31 = *VAR19++;
            if (VAR12->VAR31 < 0)
                VAR12->VAR31 = 0;
            if (VAR12->VAR31 > 88)
                VAR12->VAR31 = 88;
            VAR19++;
        }
        for (VAR14 = 4; VAR19 < (VAR6 + VAR7);)
        {
            *VAR18++ = FUN3(&VAR9->VAR29[0], VAR19[0] & 0x0F);
            if (VAR20)
                *VAR18++ = FUN3(&VAR9->VAR29[1], VAR19[4] & 0x0F);
            *VAR18++ = FUN3(&VAR9->VAR29[0], (VAR19[0] >> 4) & 0x0F);
            if (VAR20)
            {
                *VAR18++ = FUN3(&VAR9->VAR29[1], (VAR19[4] >> 4) & 0x0F);
                if (!--VAR14)
                {
                    VAR14 = 4;
                    VAR19 += 4;
                }
            }
            VAR19++;
        }
        break;
    case VAR37:
        VAR12 = &(VAR9->VAR29[0]);
        VAR9->VAR29[0].VAR30 = (VAR38)(VAR19[0] + (VAR19[1] << 8));
        VAR19 += 2;
        if (VAR20)
        {
            VAR9->VAR29[1].VAR30 = (VAR38)(VAR19[0] + (VAR19[1] << 8));
            VAR19 += 2;
        }
        VAR9->VAR29[0].VAR31 = (VAR38)(VAR19[0] + (VAR19[1] << 8));
        VAR19 += 2;
        if (VAR20)
        {
            VAR9->VAR29[1].VAR31 = (VAR38)(VAR19[0] + (VAR19[1] << 8));
            VAR19 += 2;
        }
        VAR14 = (VAR7 - (VAR19 - VAR6)) >> VAR20;
        for (VAR16 = 0; VAR16 < VAR14; VAR16++)
        {
            *VAR18++ = FUN4(&VAR9->VAR29[0], VAR19[VAR16] & 0x0F);
            if (VAR20)
                *VAR18++ = FUN4(&VAR9->VAR29[1], VAR19[VAR16 + VAR14] & 0x0F);
            *VAR18++ = FUN4(&VAR9->VAR29[0], VAR19[VAR16] >> 4);
            if (VAR20)
                *VAR18++ = FUN4(&VAR9->VAR29[1], VAR19[VAR16 + VAR14] >> 4);
        }
        VAR19 += VAR14 << VAR20;
        break;
    case VAR39:
        if (VAR2->VAR36 != 0 && VAR7 > VAR2->VAR36)
            VAR7 = VAR2->VAR36;
        VAR13 = VAR7 - 7 * VAR2->VAR25;
        if (VAR13 < 0)
            return -1;
        VAR17[0] = (*VAR19++);
        VAR17[0] = (VAR17[0] < 0) ? (0) : ((VAR17[0] > 7) ? (7) : (VAR17[0]));
        VAR17[1] = 0;
        if (VAR20)
            VAR17[1] = (*VAR19++);
        VAR17[1] = (VAR17[1] < 0) ? (0) : ((VAR17[1] > 7) ? (7) : (VAR17[1]));
        VAR9->VAR29[0].VAR40 = ((*VAR19 & 0xFF) | ((VAR19[1] << 8) & 0xFF00));
        if (VAR9->VAR29[0].VAR40 & 0x08000)
            VAR9->VAR29[0].VAR40 -= 0x10000;
        VAR19 += 2;
        if (VAR20)
            VAR9->VAR29[1].VAR40 = ((*VAR19 & 0xFF) | ((VAR19[1] << 8) & 0xFF00));
        if (VAR20 && VAR9->VAR29[1].VAR40 & 0x08000)
            VAR9->VAR29[1].VAR40 |= 0xFFFF0000;
        if (VAR20)
            VAR19 += 2;
        VAR9->VAR29[0].VAR41 = VAR42[VAR17[0]];
        VAR9->VAR29[0].VAR43 = VAR44[VAR17[0]];
        VAR9->VAR29[1].VAR41 = VAR42[VAR17[1]];
        VAR9->VAR29[1].VAR43 = VAR44[VAR17[1]];
        VAR9->VAR29[0].VAR45 = ((*VAR19 & 0xFF) | ((VAR19[1] << 8) & 0xFF00));
        VAR19 += 2;
        if (VAR20)
            VAR9->VAR29[1].VAR45 = ((*VAR19 & 0xFF) | ((VAR19[1] << 8) & 0xFF00));
        if (VAR20)
            VAR19 += 2;
        VAR9->VAR29[0].VAR46 = ((*VAR19 & 0xFF) | ((VAR19[1] << 8) & 0xFF00));
        VAR19 += 2;
        if (VAR20)
            VAR9->VAR29[1].VAR46 = ((*VAR19 & 0xFF) | ((VAR19[1] << 8) & 0xFF00));
        if (VAR20)
            VAR19 += 2;
        *VAR18++ = VAR9->VAR29[0].VAR45;
        if (VAR20)
            *VAR18++ = VAR9->VAR29[1].VAR45;
        *VAR18++ = VAR9->VAR29[0].VAR46;
        if (VAR20)
            *VAR18++ = VAR9->VAR29[1].VAR46;
        for (; VAR13 > 0; VAR13--)
        {
            *VAR18++ = FUN5(&VAR9->VAR29[0], (VAR19[0] >> 4) & 0x0F);
            *VAR18++ = FUN5(&VAR9->VAR29[VAR20], VAR19[0] & 0x0F);
            VAR19++;
        }
        break;
    case VAR47:
        if (VAR2->VAR36 != 0 && VAR7 > VAR2->VAR36)
            VAR7 = VAR2->VAR36;
        VAR9->VAR29[0].VAR30 = (VAR19[0] | (VAR19[1] << 8));
        VAR9->VAR29[0].VAR31 = VAR19[2];
        VAR19 += 4;
        if (VAR9->VAR29[0].VAR30 & 0x8000)
            VAR9->VAR29[0].VAR30 -= 0x10000;
        *VAR18++ = VAR9->VAR29[0].VAR30;
        if (VAR20)
        {
            VAR9->VAR29[1].VAR30 = (VAR19[0] | (VAR19[1] << 8));
            VAR9->VAR29[1].VAR31 = VAR19[2];
            VAR19 += 4;
            if (VAR9->VAR29[1].VAR30 & 0x8000)
                VAR9->VAR29[1].VAR30 -= 0x10000;
            *VAR18++ = VAR9->VAR29[1].VAR30;
        }
        while (VAR19 < VAR6 + VAR7)
        {
            *VAR18++ = FUN3(&VAR9->VAR29[0], (VAR19[0] >> 4) & 0x0F);
            if (VAR20)
                *VAR18++ = FUN3(&VAR9->VAR29[1], VAR19[0] & 0x0F);
            else
                *VAR18++ = FUN3(&VAR9->VAR29[0], VAR19[0] & 0x0F);
            VAR19++;
        }
        break;
    case VAR48:
        if (VAR2->VAR36 != 0 && VAR7 > VAR2->VAR36)
            VAR7 = VAR2->VAR36;
        VAR9->VAR29[0].VAR30 = (VAR19[10] | (VAR19[11] << 8));
        VAR9->VAR29[1].VAR30 = (VAR19[12] | (VAR19[13] << 8));
        VAR9->VAR29[0].VAR31 = VAR19[14];
        VAR9->VAR29[1].VAR31 = VAR19[15];
        if (VAR9->VAR29[0].VAR30 & 0x8000)
            VAR9->VAR29[0].VAR30 -= 0x10000;
        if (VAR9->VAR29[1].VAR30 & 0x8000)
            VAR9->VAR29[1].VAR30 -= 0x10000;
        VAR19 += 16;
        VAR24 = VAR9->VAR29[1].VAR30;
        while (1)
        {
            FUN6();
            FUN3(&VAR9->VAR29[0], VAR22);
            FUN6();
            FUN3(&VAR9->VAR29[1], VAR22);
            VAR24 = (VAR24 + VAR9->VAR29[1].VAR30) / 2;
            *VAR18++ = VAR9->VAR29[0].VAR30 + VAR9->VAR29[1].VAR30;
            *VAR18++ = VAR9->VAR29[0].VAR30 - VAR9->VAR29[1].VAR30;
            FUN6();
            FUN3(&VAR9->VAR29[0], VAR22);
            VAR24 = (VAR24 + VAR9->VAR29[1].VAR30) / 2;
            *VAR18++ = VAR9->VAR29[0].VAR30 + VAR9->VAR29[1].VAR30;
            *VAR18++ = VAR9->VAR29[0].VAR30 - VAR9->VAR29[1].VAR30;
        }
        break;
    case VAR49:
        while (VAR19 < VAR6 + VAR7)
        {
            if (VAR20)
            {
                *VAR18++ = FUN3(&VAR9->VAR29[0], (VAR19[0] >> 4) & 0x0F);
                *VAR18++ = FUN3(&VAR9->VAR29[1], VAR19[0] & 0x0F);
            }
            else
            {
                *VAR18++ = FUN3(&VAR9->VAR29[0], (VAR19[0] >> 4) & 0x0F);
                *VAR18++ = FUN3(&VAR9->VAR29[0], VAR19[0] & 0x0F);
            }
            VAR19++;
        }
        break;
    case VAR50:
        VAR9->VAR29[0].VAR45 = VAR9->VAR29[0].VAR46 = VAR9->VAR29[1].VAR45 = VAR9->VAR29[1].VAR46 = 0;
        while (VAR7 >= 128)
        {
            FUN7(VAR18, VAR19, &VAR9->VAR29[0], &VAR9->VAR29[1], VAR2->VAR25);
            VAR19 += 128;
            VAR18 += 28 * 8;
            VAR7 -= 128;
        }
        break;
    default:
        *VAR4 = 0;
        return -1;
    }
    *VAR4 = (VAR5 *)VAR18 - (VAR5 *)VAR3;
    return VAR19 - VAR6;
}