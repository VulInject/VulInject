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
                VAR8 |= VAR9 | VAR10;
            }
            if ((VAR6 & 4) && FUN4(VAR3, VAR11))
            {
                VAR8 |= VAR12;
            }
            FUN5(VAR3, VAR5, VAR8);
        }
        break;
    case 8:
        if (VAR3->VAR13.VAR14 & VAR15)
        {
            VAR3->VAR13.VAR16 = VAR5;
        }
        else
        {
            VAR3->VAR17[13] = VAR5;
        }
        break;
    case 9:
        if (VAR3->VAR13.VAR14 & VAR15)
        {
            VAR3->VAR17[13] = VAR5;
        }
        else
        {
            VAR3->VAR13.VAR16 = VAR5;
        }
        break;
    case 16:
        VAR3->VAR13.VAR18[VAR3->VAR13.VAR19] = VAR5 & 1;
        break;
    case 17:
        VAR3->VAR13.VAR20[VAR3->VAR13.VAR19] = VAR5 & 0xff;
        break;
    case 18:
        VAR5 &= 0xff;
        if (VAR5 != 0 && (VAR5 < VAR3->VAR13.VAR20[VAR3->VAR13.VAR19] || VAR3->VAR13.VAR20[VAR3->VAR13.VAR19] == 0))
        {
            VAR3->VAR13.VAR20[VAR3->VAR13.VAR19] = VAR5;
        }
        break;
    case 19:
        VAR3->VAR13.VAR21[VAR3->VAR13.VAR19] = VAR5 & 1;
        break;
    case 20:
        if (!FUN6(VAR3))
        {
            FUN7(VAR3, (VAR5 & VAR15) != 0);
        }
        VAR3->VAR13.VAR14 &= ~VAR22;
        VAR3->VAR13.VAR14 |= VAR5 & VAR22;
        break;
    default:
        FUN8(VAR23, ""
                                       "",
                      VAR7);
        return;
    }
}