static void FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR1;
    switch (VAR2)
    {
    case 0x00:
        VAR6->VAR7 &= ~VAR3;
        FUN2("", VAR3, VAR6->VAR7);
        FUN3(VAR6);
        if (VAR3 & VAR8)
            VAR6->VAR9 = -1;
        break;
    case 0x04:
        FUN2("", VAR3, VAR6->VAR7);
        VAR6->VAR10 = VAR3;
        FUN3(VAR6);
        break;
    case 0x08:
        VAR6->VAR11 = VAR3;
        if (VAR3 & VAR12)
        {
            VAR6->VAR13 = 0;
            VAR6->VAR14 = 0;
            FUN3(VAR6);
        }
        break;
    case 0x0c:
        VAR6->VAR15 = VAR3;
        break;
    case 0x10:
        if (VAR6->VAR9 == -1)
        {
            VAR6->VAR9 = VAR3 & 0xffff;
            if (VAR6->VAR9 > 2032)
            {
                FUN2("", VAR6->VAR9);
                VAR6->VAR9 = 0;
                VAR6->VAR7 |= VAR8;
                FUN3(VAR6);
            }
            else
            {
                FUN2("", VAR6->VAR9);
                VAR6->VAR9 += 14;
                if ((VAR6->VAR15 & VAR16) == 0)
                    VAR6->VAR9 += 4;
                VAR6->VAR17 = 0;
                VAR6->VAR18[VAR6->VAR17++] = VAR3 >> 16;
                VAR6->VAR18[VAR6->VAR17++] = VAR3 >> 24;
            }
        }
        else
        {
            VAR6->VAR18[VAR6->VAR17++] = VAR3;
            VAR6->VAR18[VAR6->VAR17++] = VAR3 >> 8;
            VAR6->VAR18[VAR6->VAR17++] = VAR3 >> 16;
            VAR6->VAR18[VAR6->VAR17++] = VAR3 >> 24;
            if (VAR6->VAR17 >= VAR6->VAR9)
            {
                if ((VAR6->VAR15 & VAR16) == 0)
                    VAR6->VAR9 -= 4;
                if ((VAR6->VAR15 & VAR19) && VAR6->VAR9 < 60)
                {
                    memset(&VAR6->VAR18[VAR6->VAR9], 0, 60 - VAR6->VAR9);
                    VAR6->VAR17 = 60;
                }
                FUN4(FUN5(VAR6->VAR20), VAR6->VAR18, VAR6->VAR9);
                VAR6->VAR9 = -1;
                VAR6->VAR7 |= VAR21;
                FUN3(VAR6);
                FUN2("");
            }
        }
        break;
    case 0x14:
        VAR6->VAR22.VAR23.VAR24[0] = VAR3;
        VAR6->VAR22.VAR23.VAR24[1] = VAR3 >> 8;
        VAR6->VAR22.VAR23.VAR24[2] = VAR3 >> 16;
        VAR6->VAR22.VAR23.VAR24[3] = VAR3 >> 24;
        break;
    case 0x18:
        VAR6->VAR22.VAR23.VAR24[4] = VAR3;
        VAR6->VAR22.VAR23.VAR24[5] = VAR3 >> 8;
        break;
    case 0x1c:
        VAR6->VAR25 = VAR3;
        break;
    case 0x20:
        VAR6->VAR26 = VAR3;
        break;
    case 0x24:
        VAR6->VAR27 = VAR3;
        break;
    case 0x28:
        break;
    case 0x2c:
        VAR6->VAR28 = VAR3 & 0xff;
        break;
    case 0x30:
    case 0x34:
    case 0x38:
    case 0x3c:
        break;
    default:
        FUN6("", (int)VAR2);
    }
}