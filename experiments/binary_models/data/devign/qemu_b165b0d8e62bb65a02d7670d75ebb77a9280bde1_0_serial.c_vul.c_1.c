static VAR1 FUN1(void *VAR2, hwaddr VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = VAR2;
    uint32_t VAR7;
    VAR3 &= 7;
    switch (VAR3)
    {
    default:
    case 0:
        if (VAR6->VAR8 & VAR9)
        {
            VAR7 = VAR6->VAR10 & 0xff;
        }
        else
        {
            if (VAR6->VAR11 & VAR12)
            {
                VAR7 = FUN2(&VAR6->VAR13) ? 0 : FUN3(&VAR6->VAR13);
                if (VAR6->VAR13.VAR14 == 0)
                {
                    VAR6->VAR15 &= ~(VAR16 | VAR17);
                }
                else
                {
                    FUN4(VAR6->VAR18, FUN5(VAR19) + VAR6->VAR20 * 4);
                }
                VAR6->VAR21 = 0;
            }
            else
            {
                VAR7 = VAR6->VAR22;
                VAR6->VAR15 &= ~(VAR16 | VAR17);
            }
            FUN6(VAR6);
            if (!(VAR6->VAR23 & VAR24))
            {
                FUN7(VAR6->VAR25);
            }
        }
        break;
    case 1:
        if (VAR6->VAR8 & VAR9)
        {
            VAR7 = (VAR6->VAR10 >> 8) & 0xff;
        }
        else
        {
            VAR7 = VAR6->VAR26;
        }
        break;
    case 2:
        VAR7 = VAR6->VAR27;
        if ((VAR7 & VAR28) == VAR29)
        {
            VAR6->VAR30 = 0;
            FUN6(VAR6);
        }
        break;
    case 3:
        VAR7 = VAR6->VAR8;
        break;
    case 4:
        VAR7 = VAR6->VAR23;
        break;
    case 5:
        VAR7 = VAR6->VAR15;
        if (VAR6->VAR15 & (VAR17 | VAR31))
        {
            VAR6->VAR15 &= ~(VAR17 | VAR31);
            FUN6(VAR6);
        }
        break;
    case 6:
        if (VAR6->VAR23 & VAR24)
        {
            VAR7 = (VAR6->VAR23 & 0x0c) << 4;
            VAR7 |= (VAR6->VAR23 & 0x02) << 3;
            VAR7 |= (VAR6->VAR23 & 0x01) << 5;
        }
        else
        {
            if (VAR6->VAR32 >= 0)
                FUN8(VAR6);
            VAR7 = VAR6->VAR33;
            if (VAR6->VAR33 & VAR34)
            {
                VAR6->VAR33 &= 0xF0;
                FUN6(VAR6);
            }
        }
        break;
    case 7:
        VAR7 = VAR6->VAR35;
        break;
    }
    FUN9("" VAR36 "", VAR3, VAR7);
    return VAR7;
}