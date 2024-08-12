static void FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR1;
    unsigned char VAR7;
    FUN2("" VAR8 "", VAR2, (unsigned int)VAR3, VAR6->VAR9 ? VAR6->VAR9->VAR10 : "");
    switch (VAR2 >> 2)
    {
    case 0x10:
        VAR7 = VAR3;
        if (VAR6->VAR11 & VAR12)
        {
            if (VAR6->VAR9)
            {
                FUN3(VAR6->VAR9, &VAR7, 1);
            }
            VAR6->VAR13 &= ~VAR14;
            FUN4(VAR6);
            VAR6->VAR13 |= VAR14;
            FUN4(VAR6);
        }
        break;
    case 0x20:
        VAR6->VAR15 = VAR3 & 0xffff;
        FUN2("", (unsigned int)VAR3);
        FUN4(VAR6);
        break;
    case 0x21:
        if (!(VAR3 & VAR16))
        {
            FUN5(VAR6);
            FUN4(VAR6);
            VAR3 |= VAR16;
        }
        if (VAR3 & VAR17)
        {
            if (!(VAR6->VAR11 & VAR17))
            {
                if (VAR6->VAR9)
                {
                    FUN6(VAR6->VAR9);
                }
            }
        }
        VAR6->VAR11 = VAR3 & 0xffff;
        break;
    case 0x25:
        VAR3 &= VAR18 | VAR19 | VAR20 | VAR21 | VAR22 | VAR23 | VAR24 | VAR25;
        VAR6->VAR13 &= ~VAR3;
        break;
    case 0x26:
        VAR3 &= VAR26 | VAR27 | VAR28 | VAR29 | VAR30 | VAR31 | VAR32 | VAR33 | VAR34 | VAR35 | VAR36;
        VAR6->VAR37 &= ~VAR3;
        break;
    case 0x29:
        VAR6->VAR38 = VAR3 & 0xffff;
        break;
    case 0x2a:
        VAR6->VAR39 = VAR3 & 0xffff;
        break;
    case 0x2c:
        VAR6->VAR40 = VAR3 & 0xffff;
        break;
    case 0x24:
        VAR6->VAR41 = VAR3 & 0xffff;
        break;
    case 0x22:
        VAR6->VAR42 = VAR3 & 0xffff;
        break;
    case 0x2d:
    case 0x23:
        FUN7(VAR43, "" VAR8 "", VAR44, VAR45, VAR2);
        break;
    default:
        FUN7(VAR46, "" VAR8 "", VAR44, VAR45, VAR2);
    }
}