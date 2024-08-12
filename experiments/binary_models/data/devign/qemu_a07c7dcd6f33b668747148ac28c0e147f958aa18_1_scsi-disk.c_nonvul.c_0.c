static int FUN1(VAR1 *VAR2, int VAR3, VAR4 **VAR5, int VAR6)
{
    static const int VAR7[0x3f] = {
        [VAR8] = (1 << VAR9),
        [VAR10] = (1 << VAR9),
        [VAR11] = (1 << VAR9) | (1 << VAR12),
        [VAR13] = (1 << VAR9) | (1 << VAR12),
        [VAR14] = (1 << VAR12),
        [VAR15] = (1 << VAR12),
    };
    VAR16 *VAR17 = VAR2->VAR18;
    int VAR19, VAR20, VAR21;
    VAR4 *VAR22 = *VAR5;
    if ((VAR7[VAR3] & (1 << VAR2->VAR23.VAR24)) == 0)
    {
        return -1;
    }
    VAR22[0] = VAR3;
    switch (VAR3)
    {
    case VAR8:
        VAR22[1] = 0x16;
        if (VAR6 == 1)
        {
            break;
        }
        FUN2(VAR17, &VAR19, &VAR20, &VAR21);
        VAR22[2] = (VAR19 >> 16) & 0xff;
        VAR22[3] = (VAR19 >> 8) & 0xff;
        VAR22[4] = VAR19 & 0xff;
        VAR22[5] = VAR20 & 0xff;
        VAR22[6] = (VAR19 >> 16) & 0xff;
        VAR22[7] = (VAR19 >> 8) & 0xff;
        VAR22[8] = VAR19 & 0xff;
        VAR22[9] = (VAR19 >> 16) & 0xff;
        VAR22[10] = (VAR19 >> 8) & 0xff;
        VAR22[11] = VAR19 & 0xff;
        VAR22[12] = 0;
        VAR22[13] = 200;
        VAR22[14] = 0xff;
        VAR22[15] = 0xff;
        VAR22[16] = 0xff;
        VAR22[20] = (5400 >> 8) & 0xff;
        VAR22[21] = 5400 & 0xff;
        break;
    case VAR10:
        VAR22[1] = 0x1e;
        if (VAR6 == 1)
        {
            break;
        }
        VAR22[2] = 5000 >> 8;
        VAR22[3] = 5000 & 0xff;
        FUN2(VAR17, &VAR19, &VAR20, &VAR21);
        VAR22[4] = VAR20 & 0xff;
        VAR22[5] = VAR21 & 0xff;
        VAR22[6] = VAR2->VAR25 * 2;
        VAR22[8] = (VAR19 >> 8) & 0xff;
        VAR22[9] = VAR19 & 0xff;
        VAR22[10] = (VAR19 >> 8) & 0xff;
        VAR22[11] = VAR19 & 0xff;
        VAR22[12] = (VAR19 >> 8) & 0xff;
        VAR22[13] = VAR19 & 0xff;
        VAR22[14] = 0;
        VAR22[15] = 1;
        VAR22[16] = 1;
        VAR22[17] = 0;
        VAR22[18] = 1;
        VAR22[19] = 1;
        VAR22[20] = 1;
        VAR22[28] = (5400 >> 8) & 0xff;
        VAR22[29] = 5400 & 0xff;
        break;
    case VAR11:
        VAR22[0] = 8;
        VAR22[1] = 0x12;
        if (VAR6 == 1)
        {
            break;
        }
        if (FUN3(VAR2->VAR18))
        {
            VAR22[2] = 4;
        }
        break;
    case VAR13:
        VAR22[1] = 10;
        VAR22[2] = 0x80;
        if (VAR2->VAR23.VAR24 == VAR12)
        {
            VAR22[3] = 0x20;
        }
        break;
    case VAR14:
        VAR22[1] = 14;
        break;
    case VAR15:
        VAR22[1] = 0x14;
        if (VAR6 == 1)
        {
            break;
        }
        VAR22[2] = 0x3b;
        VAR22[3] = 0;
        VAR22[4] = 0x7f;
        VAR22[5] = 0xff;
        VAR22[6] = 0x2d | (VAR2->VAR26 ? 2 : 0);
        VAR22[7] = 0;
        VAR22[8] = (50 * 176) >> 8;
        VAR22[9] = (50 * 176) & 0xff;
        VAR22[10] = 2 >> 8;
        VAR22[11] = 2 & 0xff;
        VAR22[12] = 2048 >> 8;
        VAR22[13] = 2048 & 0xff;
        VAR22[14] = (16 * 176) >> 8;
        VAR22[15] = (16 * 176) & 0xff;
        VAR22[18] = (16 * 176) >> 8;
        VAR22[19] = (16 * 176) & 0xff;
        VAR22[20] = (16 * 176) >> 8;
        VAR22[21] = (16 * 176) & 0xff;
        break;
    default:
        return -1;
    }
    *VAR5 += VAR22[1] + 2;
    return VAR22[1] + 2;
}