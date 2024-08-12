void FUN1(VAR1)(VAR2 *VAR3, uint32_t VAR4, uint32_t VAR5)
{
    uint32_t VAR6 = FUN2(VAR4, 8, 4);
    uint32_t VAR7 = FUN2(VAR4, 0, 8);
    if (FUN3(VAR3) == 0 && VAR7 > 7)
    {
        return;
    }
    switch (VAR7)
    {
    case 0 ... 7:
        if (!(VAR7 & 4))
        {
            uint32_t VAR8 = 0;
            if (VAR6 & 8)
            {
                VAR8 |= 0xf8000000;
            }
            if ((VAR6 & 4) && FUN4(VAR3, VAR9))
            {
                VAR8 |= 0x000f0000;
            }
            FUN5(VAR3, VAR5, VAR8);
        }
        break;
    case 8:
        if (VAR3->VAR10.VAR11 & VAR12)
        {
            VAR3->VAR10.VAR13 = VAR5;
        }
        else
        {
            VAR3->VAR14[13] = VAR5;
        }
        break;
    case 9:
        if (VAR3->VAR10.VAR11 & VAR12)
        {
            VAR3->VAR14[13] = VAR5;
        }
        else
        {
            VAR3->VAR10.VAR13 = VAR5;
        }
        break;
    case 16:
        if (VAR5 & 1)
        {
            VAR3->VAR15 |= VAR16;
        }
        else
        {
            VAR3->VAR15 &= ~VAR16;
        }
        break;
    case 17:
        VAR3->VAR10.VAR17 = VAR5 & 0xff;
        break;
    case 18:
        VAR5 &= 0xff;
        if (VAR5 != 0 && (VAR5 < VAR3->VAR10.VAR17 || VAR3->VAR10.VAR17 == 0))
            VAR3->VAR10.VAR17 = VAR5;
        break;
    case 19:
        if (VAR5 & 1)
        {
            VAR3->VAR15 |= VAR18;
        }
        else
        {
            VAR3->VAR15 &= ~VAR18;
        }
        break;
    case 20:
        FUN6(VAR3, (VAR5 & VAR12) != 0);
        VAR3->VAR10.VAR11 = VAR5 & (VAR12 | VAR19);
        break;
    default:
        FUN7(VAR20, ""
                                       "",
                      VAR7);
        return;
    }
}