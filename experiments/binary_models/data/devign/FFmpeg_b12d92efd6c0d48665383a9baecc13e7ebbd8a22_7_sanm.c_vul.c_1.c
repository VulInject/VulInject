static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    int VAR10, VAR11;
    FUN2(&VAR8->VAR12, VAR6->VAR3, VAR6->VAR13);
    if (VAR8->VAR14->VAR3[0])
        VAR2->FUN3(VAR2, VAR8->VAR14);
    if (!VAR8->VAR15)
    {
        int VAR16 = 0;
        while (FUN4(&VAR8->VAR12) >= 8)
        {
            uint32_t VAR17, VAR13;
            int VAR18;
            VAR17 = FUN5(&VAR8->VAR12);
            VAR13 = FUN5(&VAR8->VAR12);
            VAR18 = FUN6(&VAR8->VAR12);
            if (FUN4(&VAR8->VAR12) < VAR13)
            {
                FUN7(VAR2, VAR19, "", VAR13);
                break;
            }
            switch (VAR17)
            {
            case FUN8('', '', '', ''):
                if (VAR13 != 256 * 3)
                {
                    FUN7(VAR2, VAR19, "", VAR13);
                    return VAR20;
                }
                for (VAR10 = 0; VAR10 < 256; VAR10++)
                    VAR8->VAR21[VAR10] = 0xFF << 24 | FUN9(&VAR8->VAR12);
                break;
            case FUN8('', '', '', ''):
                if (VAR13 < 16)
                    return VAR20;
                if (VAR11 = FUN10(VAR8))
                    return VAR11;
                break;
            case FUN8('', '', '', ''):
                if (VAR13 == 6 || VAR13 == 4)
                {
                    uint8_t VAR22[3];
                    int VAR23;
                    for (VAR10 = 0; VAR10 < 256; VAR10++)
                    {
                        for (VAR23 = 0; VAR23 < 3; VAR23++)
                        {
                            int VAR24 = (VAR8->VAR21[VAR10] >> (16 - VAR23 * 8)) & 0xFF;
                            VAR22[VAR23] = FUN11((VAR24 * 129 + VAR8->VAR25[VAR10 * 3 + VAR23]) >> 7);
                        }
                        VAR8->VAR21[VAR10] = 0xFF << 24 | FUN12(VAR22);
                    }
                }
                else
                {
                    if (VAR13 < 768 * 2 + 4)
                    {
                        FUN7(VAR2, VAR19, "", VAR13);
                        return VAR20;
                    }
                    FUN13(&VAR8->VAR12, 4);
                    for (VAR10 = 0; VAR10 < 768; VAR10++)
                        VAR8->VAR25[VAR10] = FUN14(&VAR8->VAR12);
                    if (VAR13 >= 768 * 5 + 4)
                    {
                        for (VAR10 = 0; VAR10 < 256; VAR10++)
                            VAR8->VAR21[VAR10] = 0xFF << 24 | FUN9(&VAR8->VAR12);
                    }
                    else
                    {
                        memset(VAR8->VAR21, 0, sizeof(VAR8->VAR21));
                    }
                }
                break;
            case FUN8('', '', '', ''):
                VAR16 = 1;
                break;
            case FUN8('', '', '', ''):
                memcpy(VAR8->VAR26, VAR8->VAR27, VAR8->VAR28);
                break;
            default:
                FUN15(&VAR8->VAR12, VAR13);
                FUN7(VAR2, VAR29, "", VAR17);
                break;
            }
            FUN16(&VAR8->VAR12, VAR18 + VAR13, VAR30);
            if (VAR13 & 1)
                FUN15(&VAR8->VAR12, 1);
        }
        if (VAR16)
            memcpy(VAR8->VAR27, VAR8->VAR26, VAR8->VAR28);
        if ((VAR11 = FUN17(VAR8, NULL)))
            return VAR11;
        memcpy(VAR8->VAR14->VAR3[1], VAR8->VAR21, 1024);
    }
    else
    {
        SANMFrameHeader VAR31;
        if ((VAR11 = FUN18(VAR8, &VAR31)))
            return VAR11;
        VAR8->VAR32 = VAR31.VAR32;
        if ((VAR8->VAR14->VAR33 = !VAR31.VAR34))
        {
            VAR8->VAR14->VAR35 = VAR36;
            FUN19(VAR8->VAR37, VAR8->VAR38, VAR31.VAR39);
            FUN19(VAR8->VAR40, VAR8->VAR38, VAR31.VAR39);
        }
        else
        {
            VAR8->VAR14->VAR35 = VAR41;
        }
        if (VAR31.VAR42 < FUN20(VAR43))
        {
            if ((VAR11 = VAR43[VAR31.VAR42](VAR8)))
            {
                FUN7(VAR2, VAR19, "", VAR31.VAR42);
                return VAR11;
            }
        }
        else
        {
            FUN21(VAR2, "", VAR31.VAR42);
            return VAR44;
        }
        if ((VAR11 = FUN17(VAR8, &VAR31)))
            return VAR11;
    }
    if (VAR8->VAR32)
        FUN22(VAR8, VAR8->VAR32);
    *VAR4 = 1;
    *(VAR45 *)VAR3 = *VAR8->VAR14;
    return VAR6->VAR13;
}