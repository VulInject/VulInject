static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    static const int VAR7[5] = {
        [0] = 2048 + 4,
        [1] = 4 + 4,
        [3] = 188 + 4,
        [4] = 2048 + 4,
    };
    uint8_t VAR8 = VAR4->VAR9.VAR10.VAR11[1];
    uint8_t VAR12 = VAR4->VAR9.VAR10.VAR11[6];
    uint8_t VAR13 = VAR4->VAR9.VAR10.VAR11[7];
    int VAR14 = -1;
    if (VAR2->VAR15.VAR16 != VAR17)
    {
        return -1;
    }
    if (VAR8 != 0)
    {
        FUN2(VAR4, FUN3(VAR18));
        return -1;
    }
    if (VAR13 != 0xff)
    {
        if (VAR2->VAR19 || !FUN4(VAR2->VAR15.VAR20.VAR21))
        {
            FUN2(VAR4, FUN3(VAR22));
            return -1;
        }
        if (FUN5(VAR2))
        {
            FUN2(VAR4, FUN3(VAR23));
            return -1;
        }
        if (VAR13 >= FUN6(VAR7))
        {
            return -1;
        }
        VAR14 = VAR7[VAR13];
        memset(VAR6, 0, VAR14);
    }
    switch (VAR13)
    {
    case 0x00:
    {
        uint64_t VAR24;
        if (VAR12 != 0)
        {
            goto VAR25;
        }
        FUN7(VAR2->VAR15.VAR20.VAR21, &VAR24);
        VAR6[4] = 1;
        VAR6[5] = 0xf;
        VAR6[6] = 1;
        VAR6[7] = 0;
        FUN8(&VAR6[12], (VAR24 >> 2) - 1);
        FUN8(&VAR6[16], (VAR24 >> 2) - 1);
        break;
    }
    case 0x01:
        break;
    case 0x03:
        return -1;
    case 0x04:
        break;
    case 0xff:
    {
        int VAR26;
        VAR14 = 4;
        for (VAR26 = 0; VAR26 < FUN6(VAR7); VAR26++)
        {
            if (!VAR7[VAR26])
            {
                continue;
            }
            VAR6[VAR14] = VAR26;
            VAR6[VAR14 + 1] = 0x40;
            FUN9(&VAR6[VAR14 + 2], VAR7[VAR26]);
            VAR14 += 4;
        }
        break;
    }
    default:
        return -1;
    }
    FUN9(VAR6, VAR14 - 2);
    return VAR14;
VAR25:
    return -1;
}