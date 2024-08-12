static void FUN1(void *VAR1, uint32_t VAR2, uint32_t VAR3)
{
    VAR4 *VAR5 = VAR1;
    unsigned char VAR6;
    FUN2("", VAR2, VAR3);
    switch (VAR2)
    {
    case 0x00:
        VAR5->VAR7 = VAR3 & ((VAR5->VAR8 & VAR9) ? 0x7b : 0xff);
        return;
    case 0x04:
        VAR5->VAR10 = VAR3;
        return;
    case 0x08:
        VAR5->VAR11 = VAR3 & ((VAR5->VAR8 & VAR9) ? 0xfa : 0xff);
        if (!(VAR3 & (1 << 5)))
            VAR5->VAR12 |= VAR13;
        if ((VAR5->VAR8 & VAR9) && VAR5->VAR14)
        {
            FUN3(VAR5->VAR14, VAR3 & (1 << 7));
        }
        if (!(VAR3 & (1 << 6)))
        {
            FUN3(VAR5->VAR15, 0);
        }
        return;
    case 0x0c:
        if (VAR5->VAR16)
        {
            VAR6 = VAR3;
            FUN4(VAR5->VAR16, &VAR6, 1);
        }
        VAR5->VAR17 = VAR3;
        VAR5->VAR12 &= ~VAR18;
        return;
    case 0x14:
        VAR19 = 0;
        break;
    }
    if (VAR5->VAR8 & VAR9)
    {
        switch (VAR2)
        {
        case 0x10:
            if (!(VAR3 & (1 << 6)))
                VAR5->VAR12 &= ~VAR13;
            if (!(VAR3 & (1 << 5)))
                VAR5->VAR12 &= ~VAR18;
            if (!(VAR3 & (1 << 4)))
                VAR5->VAR12 &= ~VAR20;
            if (!(VAR3 & (1 << 1)))
                VAR5->VAR12 &= ~VAR21;
            if (!(VAR3 & (1 << 0)))
                VAR5->VAR12 &= ~VAR22;
            if (!(VAR3 & (1 << 1)) || !(VAR3 & (1 << 0)))
            {
                if (VAR5->VAR15)
                {
                    FUN3(VAR5->VAR15, 0);
                }
            }
            return;
        case 0x18:
            VAR5->VAR23 = VAR3;
            switch ((VAR3 >> 6) & 3)
            {
            case 0:
                VAR5->VAR24 = 1;
                break;
            case 1:
                VAR5->VAR24 = 4;
                break;
            case 2:
                VAR5->VAR24 = 8;
                break;
            case 3:
                VAR5->VAR24 = 14;
                break;
            }
            if (VAR3 & (1 << 1))
            {
                FUN5(VAR5);
                VAR5->VAR25 &= ~(1 << 1);
            }
            return;
        case 0x20:
            VAR5->VAR26 = VAR3 & 0xf3;
            return;
        case 0x24:
            return;
        }
    }
    else
    {
        switch (VAR2)
        {
        case 0x0c:
            VAR19 = VAR5->VAR17;
            break;
        case 0x10:
            VAR19 = 0;
            break;
        case 0x1c:
            VAR19 = VAR5->VAR26;
            break;
        }
    }
    fprintf(VAR27, "", VAR2);
    assert(0);
}