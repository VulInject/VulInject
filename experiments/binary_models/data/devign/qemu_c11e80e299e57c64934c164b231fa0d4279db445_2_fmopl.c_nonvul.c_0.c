static void FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    VAR5 *VAR6;
    int VAR7;
    int VAR8;
    switch (VAR3 & 0xe0)
    {
    case 0x00:
        switch (VAR3 & 0x1f)
        {
        case 0x01:
            if (VAR2->VAR9 & VAR10)
            {
                VAR2->VAR11 = VAR4 & 0x20;
                if (!VAR2->VAR11)
                {
                    int VAR12;
                    for (VAR12 = 0; VAR12 < VAR2->VAR13; VAR12++)
                    {
                        VAR2->VAR14[VAR12].VAR15[VAR16].VAR17 = &VAR18[0];
                        VAR2->VAR14[VAR12].VAR15[VAR19].VAR17 = &VAR18[0];
                    }
                }
            }
            return;
        case 0x02:
            VAR2->VAR20[0] = (256 - VAR4) * 4;
            break;
        case 0x03:
            VAR2->VAR20[1] = (256 - VAR4) * 16;
            return;
        case 0x04:
            if (VAR4 & 0x80)
            {
                FUN2(VAR2, 0x7f);
            }
            else
            {
                UINT8 VAR21 = VAR4 & 1;
                UINT8 VAR22 = (VAR4 >> 1) & 1;
                FUN2(VAR2, VAR4 & 0x78);
                FUN3(VAR2, ((~VAR4) & 0x78) | 0x01);
                if (VAR2->VAR23[1] != VAR22)
                {
                    double VAR24 = VAR22 ? (double)VAR2->VAR20[1] * VAR2->VAR25 : 0.0;
                    VAR2->VAR23[1] = VAR22;
                    if (VAR2->VAR26)
                        (VAR2->VAR26)(VAR2->VAR27 + 1, VAR24);
                }
                if (VAR2->VAR23[0] != VAR21)
                {
                    double VAR24 = VAR21 ? (double)VAR2->VAR20[0] * VAR2->VAR25 : 0.0;
                    VAR2->VAR23[0] = VAR21;
                    if (VAR2->VAR26)
                        (VAR2->VAR26)(VAR2->VAR27 + 0, VAR24);
                }
            }
            return;
        case 0x06:
            if (VAR2->VAR9 & VAR28)
            {
                if (VAR2->VAR29)
                    VAR2->FUN4(VAR2->VAR30, VAR4);
                else
                    FUN5(VAR31, (""));
            }
            return;
        case 0x07:
            if (VAR2->VAR9 & VAR32)
                FUN6(VAR2->VAR33, VAR3 - 0x07, VAR4);
            return;
        case 0x08:
            VAR2->VAR34 = VAR4;
            VAR4 &= 0x1f;
        case 0x09:
        case 0x0a:
        case 0x0b:
        case 0x0c:
        case 0x0d:
        case 0x0e:
        case 0x0f:
        case 0x10:
        case 0x11:
        case 0x12:
            if (VAR2->VAR9 & VAR32)
                FUN6(VAR2->VAR33, VAR3 - 0x07, VAR4);
            return;
        case 0x15:
        case 0x16:
        case 0x17:
            return;
        case 0x18:
            if (VAR2->VAR9 & VAR35)
                VAR2->VAR36 = VAR4 & 0x0f;
            return;
        case 0x19:
            if (VAR2->VAR9 & VAR35)
            {
                VAR2->VAR37 = VAR4;
                if (VAR2->VAR38)
                    VAR2->FUN7(VAR2->VAR39, VAR4 & VAR2->VAR36);
            }
            return;
        case 0x1a:
            return;
        }
        break;
    case 0x20:
        VAR7 = VAR40[VAR3 & 0x1f];
        if (VAR7 == -1)
            return;
        FUN8(VAR2, VAR7, VAR4);
        return;
    case 0x40:
        VAR7 = VAR40[VAR3 & 0x1f];
        if (VAR7 == -1)
            return;
        FUN9(VAR2, VAR7, VAR4);
        return;
    case 0x60:
        VAR7 = VAR40[VAR3 & 0x1f];
        if (VAR7 == -1)
            return;
        FUN10(VAR2, VAR7, VAR4);
        return;
    case 0x80:
        VAR7 = VAR40[VAR3 & 0x1f];
        if (VAR7 == -1)
            return;
        FUN11(VAR2, VAR7, VAR4);
        return;
    case 0xa0:
        switch (VAR3)
        {
        case 0xbd:
        {
            UINT8 VAR41 = VAR2->VAR42 ^ VAR4;
            VAR2->VAR43 = &VAR44[VAR4 & 0x80 ? VAR45 : 0];
            VAR2->VAR46 = &VAR47[VAR4 & 0x40 ? VAR48 : 0];
            VAR2->VAR42 = VAR4 & 0x3f;
            if (VAR2->VAR42 & 0x20)
            {
                FUN12("");
                if (VAR41 & 0x10)
                {
                    if (VAR4 & 0x10)
                    {
                        VAR2->VAR14[6].VAR49[0] = VAR2->VAR14[6].VAR49[1] = 0;
                        FUN13(&VAR2->VAR14[6].VAR15[VAR16]);
                        FUN13(&VAR2->VAR14[6].VAR15[VAR19]);
                    }
                    else
                    {
                        FUN14(&VAR2->VAR14[6].VAR15[VAR16]);
                        FUN14(&VAR2->VAR14[6].VAR15[VAR19]);
                    }
                }
                if (VAR41 & 0x08)
                {
                    if (VAR4 & 0x08)
                        FUN13(&VAR2->VAR14[7].VAR15[VAR19]);
                    else
                        FUN14(&VAR2->VAR14[7].VAR15[VAR19]);
                }
                if (VAR41 & 0x04)
                {
                    if (VAR4 & 0x04)
                        FUN13(&VAR2->VAR14[8].VAR15[VAR16]);
                    else
                        FUN14(&VAR2->VAR14[8].VAR15[VAR16]);
                }
                if (VAR41 & 0x02)
                {
                    if (VAR4 & 0x02)
                        FUN13(&VAR2->VAR14[8].VAR15[VAR19]);
                    else
                        FUN14(&VAR2->VAR14[8].VAR15[VAR19]);
                }
                if (VAR41 & 0x01)
                {
                    if (VAR4 & 0x01)
                        FUN13(&VAR2->VAR14[7].VAR15[VAR16]);
                    else
                        FUN14(&VAR2->VAR14[7].VAR15[VAR16]);
                }
            }
        }
            return;
        }
        if ((VAR3 & 0x0f) > 8)
            return;
        VAR6 = &VAR2->VAR14[VAR3 & 0x0f];
        if (!(VAR3 & 0x10))
        {
            VAR8 = (VAR6->VAR8 & 0x1f00) | VAR4;
        }
        else
        {
            int VAR50 = (VAR4 >> 5) & 1;
            VAR8 = ((VAR4 & 0x1f) << 8) | (VAR6->VAR8 & 0xff);
            if (VAR6->VAR50 != VAR50)
            {
                if ((VAR6->VAR50 = VAR50))
                {
                    VAR6->VAR49[0] = VAR6->VAR49[1] = 0;
                    FUN13(&VAR6->VAR15[VAR16]);
                    FUN13(&VAR6->VAR15[VAR19]);
                }
                else
                {
                    FUN14(&VAR6->VAR15[VAR16]);
                    FUN14(&VAR6->VAR15[VAR19]);
                }
            }
        }
        if (VAR6->VAR8 != VAR8)
        {
            int VAR51 = 7 - (VAR8 >> 10);
            int VAR52 = VAR8 & 0x3ff;
            VAR6->VAR8 = VAR8;
            VAR6->VAR53 = VAR54[VAR8 >> 6];
            VAR6->VAR55 = VAR2->VAR56[VAR52] >> VAR51;
            VAR6->VAR57 = VAR6->VAR8 >> 9;
            if ((VAR2->VAR34 & 0x40) && VAR6->VAR8 & 0x100)
                VAR6->VAR57 |= 1;
            FUN15(VAR6, &VAR6->VAR15[VAR16]);
            FUN15(VAR6, &VAR6->VAR15[VAR19]);
        }
        return;
    case 0xc0:
        if ((VAR3 & 0x0f) > 8)
            return;
        VAR6 = &VAR2->VAR14[VAR3 & 0x0f];
        {
            int VAR58 = (VAR4 >> 1) & 7;
            VAR6->VAR59 = VAR58 ? (8 + 1) - VAR58 : 0;
            VAR6->VAR60 = VAR4 & 1;
            FUN16(VAR6);
        }
        return;
    case 0xe0:
        VAR7 = VAR40[VAR3 & 0x1f];
        if (VAR7 == -1)
            return;
        VAR6 = &VAR2->VAR14[VAR7 / 2];
        if (VAR2->VAR11)
        {
            VAR6->VAR15[VAR7 & 1].VAR17 = &VAR18[(VAR4 & 0x03) * VAR61];
        }
        return;
    }
}