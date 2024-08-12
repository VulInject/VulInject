static void FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = VAR1;
    unsigned char VAR7;
    FUN2("", VAR2, VAR3);
    switch (VAR2)
    {
    case 0x00:
        VAR6->VAR8 = VAR3 & ((VAR6->VAR9 & VAR10) ? 0x7b : 0xff);
        return;
    case 0x04:
        VAR6->VAR11 = VAR3;
        return;
    case 0x08:
        VAR6->VAR12 = VAR3 & ((VAR6->VAR9 & VAR10) ? 0xfa : 0xff);
        if (!(VAR3 & (1 << 5)))
            VAR6->VAR13 |= VAR14;
        if ((VAR6->VAR9 & VAR10) && VAR6->VAR15)
        {
            FUN3(VAR6->VAR15, VAR3 & (1 << 7));
        }
        if (!(VAR3 & (1 << 6)))
        {
            FUN3(VAR6->VAR16, 0);
        }
        return;
    case 0x0c:
        if (VAR6->VAR17)
        {
            VAR7 = VAR3;
            FUN4(VAR6->VAR17, &VAR7, 1);
        }
        VAR6->VAR18 = VAR3;
        VAR6->VAR13 &= ~VAR19;
        return;
    case 0x14:
        VAR20 = 0;
        break;
    }
    if (VAR6->VAR9 & VAR10)
    {
        switch (VAR2)
        {
        case 0x10:
            if (!(VAR3 & (1 << 6)))
                VAR6->VAR13 &= ~VAR14;
            if (!(VAR3 & (1 << 5)))
                VAR6->VAR13 &= ~VAR19;
            if (!(VAR3 & (1 << 4)))
                VAR6->VAR13 &= ~VAR21;
            if (!(VAR3 & (1 << 1)))
                VAR6->VAR13 &= ~VAR22;
            if (!(VAR3 & (1 << 0)))
                VAR6->VAR13 &= ~VAR23;
            if (!(VAR3 & (1 << 1)) || !(VAR3 & (1 << 0)))
            {
                if (VAR6->VAR16)
                {
                    FUN3(VAR6->VAR16, 0);
                }
            }
            return;
        case 0x18:
            VAR6->VAR24 = VAR3;
            switch ((VAR3 >> 6) & 3)
            {
            case 0:
                VAR6->VAR25 = 1;
                break;
            case 1:
                VAR6->VAR25 = 4;
                break;
            case 2:
                VAR6->VAR25 = 8;
                break;
            case 3:
                VAR6->VAR25 = 14;
                break;
            }
            if (VAR3 & (1 << 1))
            {
                FUN5(VAR6);
                VAR6->VAR26 &= ~(1 << 1);
            }
            return;
        case 0x20:
            VAR6->VAR27 = VAR3 & 0xf3;
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
            VAR20 = VAR6->VAR18;
            break;
        case 0x10:
            VAR20 = 0;
            break;
        case 0x1c:
            VAR6->VAR27 = VAR3 & 0x8f;
            return;
        }
    }
    fprintf(VAR28, "" VAR29 "", VAR2);
    FUN6();
}