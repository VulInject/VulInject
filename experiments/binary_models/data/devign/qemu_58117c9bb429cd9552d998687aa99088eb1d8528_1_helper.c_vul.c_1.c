void FUN1(VAR1)(VAR2 *VAR3, uint32_t VAR4, uint32_t VAR5)
{
    VAR6 *VAR7 = FUN2(VAR3);
    switch (VAR4)
    {
    case 0:
        FUN3(VAR3, VAR5, 0xf8000000);
        break;
    case 1:
        FUN3(VAR3, VAR5, 0xf8000000);
        break;
    case 2:
        FUN3(VAR3, VAR5, 0xfe00fc00);
        break;
    case 3:
        FUN3(VAR3, VAR5, 0xfe00fc00);
        break;
    case 5:
        break;
    case 6:
        FUN3(VAR3, VAR5, 0x0600fc00);
        break;
    case 7:
        FUN3(VAR3, VAR5, 0x0600fc00);
        break;
    case 8:
        if (VAR3->VAR8.VAR9)
            VAR3->VAR8.VAR10 = VAR5;
        else
            VAR3->VAR11[13] = VAR5;
        break;
    case 9:
        if (VAR3->VAR8.VAR9)
            VAR3->VAR11[13] = VAR5;
        else
            VAR3->VAR8.VAR10 = VAR5;
        break;
    case 16:
        if (VAR5 & 1)
        {
            VAR3->VAR12 |= VAR13;
        }
        else
        {
            VAR3->VAR12 &= ~VAR13;
        }
        break;
    case 17:
        VAR3->VAR8.VAR14 = VAR5 & 0xff;
        break;
    case 18:
        VAR5 &= 0xff;
        if (VAR5 != 0 && (VAR5 < VAR3->VAR8.VAR14 || VAR3->VAR8.VAR14 == 0))
            VAR3->VAR8.VAR14 = VAR5;
        break;
    case 19:
        if (VAR5 & 1)
        {
            VAR3->VAR12 |= VAR15;
        }
        else
        {
            VAR3->VAR12 &= ~VAR15;
        }
        break;
    case 20:
        VAR3->VAR8.VAR16 = VAR5 & 3;
        FUN4(VAR3, (VAR5 & 2) != 0);
        break;
    default:
        FUN5(FUN6(VAR7), "", VAR4);
        return;
    }
}