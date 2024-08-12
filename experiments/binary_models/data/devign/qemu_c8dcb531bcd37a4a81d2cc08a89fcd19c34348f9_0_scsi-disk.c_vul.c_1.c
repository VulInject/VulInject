static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = FUN2(VAR5, VAR7, VAR2->VAR8);
    int VAR9 = 0;
    int VAR10;
    if (VAR2->VAR11.VAR12[1] & 0x1)
    {
        uint8_t VAR13 = VAR2->VAR11.VAR12[2];
        VAR4[VAR9++] = VAR6->VAR7.VAR14 & 0x1f;
        VAR4[VAR9++] = VAR13;
        VAR4[VAR9++] = 0x00;
        VAR4[VAR9++] = 0x00;
        VAR10 = VAR9;
        switch (VAR13)
        {
        case 0x00:
        {
            FUN3(""
                    "",
                    VAR2->VAR11.VAR15);
            VAR4[VAR9++] = 0x00;
            if (VAR6->VAR16)
            {
                VAR4[VAR9++] = 0x80;
            }
            VAR4[VAR9++] = 0x83;
            if (VAR6->VAR7.VAR14 == VAR17)
            {
                VAR4[VAR9++] = 0xb0;
                VAR4[VAR9++] = 0xb2;
            }
            break;
        }
        case 0x80:
        {
            int VAR18;
            if (!VAR6->VAR16)
            {
                FUN3("");
                return -1;
            }
            VAR18 = strlen(VAR6->VAR16);
            if (VAR18 > 20)
            {
                VAR18 = 20;
            }
            FUN3(""
                    "",
                    VAR2->VAR11.VAR15);
            memcpy(VAR4 + VAR9, VAR6->VAR16, VAR18);
            VAR9 += VAR18;
            break;
        }
        case 0x83:
        {
            const char *VAR19 = VAR6->VAR16 ?: FUN4(VAR6->VAR7.VAR20.VAR21);
            int VAR22 = VAR6->VAR16 ? 20 : 255 - 8;
            int VAR23 = strlen(VAR19);
            if (VAR23 > VAR22)
            {
                VAR23 = VAR22;
            }
            FUN3(""
                    "",
                    VAR2->VAR11.VAR15);
            VAR4[VAR9++] = 0x2;
            VAR4[VAR9++] = 0;
            VAR4[VAR9++] = 0;
            VAR4[VAR9++] = VAR23;
            memcpy(VAR4 + VAR9, VAR19, VAR23);
            VAR9 += VAR23;
            if (VAR6->VAR24)
            {
                VAR4[VAR9++] = 0x1;
                VAR4[VAR9++] = 0x3;
                VAR4[VAR9++] = 0;
                VAR4[VAR9++] = 8;
                FUN5(&VAR4[VAR9], VAR6->VAR24);
                VAR9 += 8;
            }
            break;
        }
        case 0xb0:
        {
            unsigned int VAR25 = VAR6->VAR7.VAR20.VAR26 / VAR6->VAR7.VAR27;
            unsigned int VAR28 = VAR6->VAR7.VAR20.VAR28 / VAR6->VAR7.VAR27;
            unsigned int VAR29 = VAR6->VAR7.VAR20.VAR29 / VAR6->VAR7.VAR27;
            if (VAR6->VAR7.VAR14 == VAR30)
            {
                FUN3("", VAR13);
                return -1;
            }
            VAR9 = 0x40;
            memset(VAR4 + 4, 0, VAR9 - 4);
            VAR4[6] = (VAR28 >> 8) & 0xff;
            VAR4[7] = VAR28 & 0xff;
            VAR4[12] = (VAR29 >> 24) & 0xff;
            VAR4[13] = (VAR29 >> 16) & 0xff;
            VAR4[14] = (VAR29 >> 8) & 0xff;
            VAR4[15] = VAR29 & 0xff;
            VAR4[28] = (VAR25 >> 24) & 0xff;
            VAR4[29] = (VAR25 >> 16) & 0xff;
            VAR4[30] = (VAR25 >> 8) & 0xff;
            VAR4[31] = VAR25 & 0xff;
            break;
        }
        case 0xb2:
        {
            VAR9 = 8;
            VAR4[4] = 0;
            VAR4[5] = 0xe0;
            VAR4[6] = VAR6->VAR7.VAR20.VAR26 ? 2 : 1;
            VAR4[7] = 0;
            break;
        }
        default:
            return -1;
        }
        assert(VAR9 - VAR10 <= 255);
        VAR4[VAR10 - 1] = VAR9 - VAR10;
        return VAR9;
    }
    if (VAR2->VAR11.VAR12[2] != 0)
    {
        return -1;
    }
    VAR9 = VAR2->VAR11.VAR15;
    if (VAR9 > VAR31)
    {
        VAR9 = VAR31;
    }
    memset(VAR4, 0, VAR9);
    VAR4[0] = VAR6->VAR7.VAR14 & 0x1f;
    VAR4[1] = (VAR6->VAR32 & (1 << VAR33)) ? 0x80 : 0;
    FUN6((char *)&VAR4[16], 16, VAR6->VAR34, '');
    FUN6((char *)&VAR4[8], 8, VAR6->VAR35, '');
    memset(&VAR4[32], 0, 4);
    memcpy(&VAR4[32], VAR6->VAR36, FUN7(4, strlen(VAR6->VAR36)));
    VAR4[2] = 5;
    VAR4[3] = 2 | 0x10;
    if (VAR9 > 36)
    {
        VAR4[4] = VAR9 - 5;
    }
    else
    {
        VAR4[4] = 36 - 5;
    }
    VAR4[7] = 0x10 | (VAR2->VAR37->VAR38->VAR39 ? 0x02 : 0);
    return VAR9;
}