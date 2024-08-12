static void FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = VAR1;
    uint64_t VAR7, VAR8;
    switch (VAR2)
    {
    case 0x0000:
        break;
    case 0x0040:
        break;
    case 0x0080:
        VAR8 = VAR7 = VAR6->VAR9.VAR10;
        VAR8 &= ~(VAR3 & 0x10000ff0);
        if (VAR3 & 0x100000)
        {
            VAR8 &= ~0xff0000ull;
        }
        else
        {
            VAR8 |= VAR3 & 0x00f00000;
            if ((VAR8 & 0xf0000) == 0)
            {
                VAR8 |= VAR3 & 0xf0000;
            }
        }
        VAR8 |= (VAR3 & 0xf000) >> 4;
        VAR8 &= ~0xf0000000000ull;
        VAR8 |= VAR3 & 0xf0000000000ull;
        VAR6->VAR9.VAR10 = VAR8;
        if ((VAR8 ^ VAR7) & 0xff0)
        {
            int VAR11;
            for (VAR11 = 0; VAR11 < 4; ++VAR11)
            {
                VAR12 *VAR13 = VAR6->VAR9.VAR13[VAR11];
                if (VAR13 != NULL)
                {
                    VAR14 *VAR15 = FUN2(VAR13);
                    if (VAR8 & (1 << (VAR11 + 8)))
                    {
                        FUN3(VAR15, VAR16);
                    }
                    else
                    {
                        FUN4(VAR15, VAR16);
                    }
                    if ((VAR8 & (1 << (VAR11 + 4))) == 0)
                    {
                        FUN4(VAR15, VAR17);
                    }
                }
            }
        }
        break;
    case 0x00c0:
        break;
    case 0x0100:
    case 0x0140:
    case 0x0180:
    case 0x01c0:
        break;
    case 0x0200:
        VAR6->VAR9.VAR18[0] = VAR3;
        FUN5(VAR6->VAR9.VAR13[0], VAR3 & VAR6->VAR9.VAR19);
        break;
    case 0x0240:
        VAR6->VAR9.VAR18[1] = VAR3;
        FUN5(VAR6->VAR9.VAR13[1], VAR3 & VAR6->VAR9.VAR19);
        break;
    case 0x0280:
    case 0x02c0:
    case 0x0300:
        break;
    case 0x0340:
        break;
    case 0x0380:
        VAR6->VAR9.VAR20[0] = VAR3 & 0xffffff;
        break;
    case 0x03c0:
        VAR6->VAR9.VAR20[1] = VAR3 & 0xffffff;
        break;
    case 0x0400:
    case 0x0440:
    case 0x0480:
    case 0x04c0:
        break;
    case 0x0580:
        break;
    case 0x05c0:
        break;
    case 0x0600:
        VAR6->VAR9.VAR18[2] = VAR3;
        FUN5(VAR6->VAR9.VAR13[2], VAR3 & VAR6->VAR9.VAR19);
        break;
    case 0x0640:
        VAR6->VAR9.VAR18[3] = VAR3;
        FUN5(VAR6->VAR9.VAR13[3], VAR3 & VAR6->VAR9.VAR19);
        break;
    case 0x0680:
    case 0x06c0:
        break;
    case 0x0700:
        VAR6->VAR9.VAR20[2] = VAR3 & 0xffffff;
        break;
    case 0x0740:
        VAR6->VAR9.VAR20[3] = VAR3 & 0xffffff;
        break;
    case 0x0780:
        break;
    case 0x0c00:
    case 0x0c40:
    case 0x0c80:
    case 0x0cc0:
        break;
    default:
        FUN6(VAR21, VAR2, true, false, 0, VAR4);
        return;
    }
}