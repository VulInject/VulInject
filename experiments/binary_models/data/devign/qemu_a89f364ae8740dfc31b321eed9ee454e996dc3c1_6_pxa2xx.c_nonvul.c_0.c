static void FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR1;
    uint32_t VAR7 = VAR3;
    switch (VAR2)
    {
    case VAR8:
        VAR6->VAR9[0] = VAR7 & 0xc7ffffff;
        VAR6->VAR10 = VAR7 & VAR11;
        if (VAR7 & VAR12)
            FUN2("", VAR13);
        if (VAR6->VAR10 && FUN3(VAR7) < 4)
            FUN2("", VAR13, FUN3(VAR7));
        if (!(VAR7 & VAR11))
        {
            VAR6->VAR14 = 0;
            VAR6->VAR15 = 0;
            VAR6->VAR16 = 0;
        }
        FUN4(VAR6);
        break;
    case VAR17:
        VAR6->VAR9[1] = VAR7;
        if (VAR7 & (VAR18 | VAR19))
            FUN2("", VAR13);
        FUN4(VAR6);
        break;
    case VAR20:
        VAR6->VAR21 = VAR7;
        break;
    case VAR22:
        VAR6->VAR23 = VAR7;
        break;
    case VAR24:
        VAR6->VAR15 = VAR7 & VAR25;
        FUN5(VAR6);
        break;
    case VAR26:
        VAR6->VAR14 &= ~(VAR7 & VAR27);
        FUN5(VAR6);
        break;
    case VAR28:
        if (FUN6(VAR6->VAR9[0]))
        {
            if (VAR6->VAR9[1] & VAR29)
                VAR7 &= 0xffff;
            else
                VAR7 &= 0xff;
        }
        else
            VAR7 &= (1 << FUN3(VAR6->VAR9[0])) - 1;
        if (VAR6->VAR10)
        {
            uint32_t VAR30;
            VAR30 = FUN7(VAR6->VAR31, VAR7);
            if (VAR6->VAR16 < 0x10)
            {
                VAR6->VAR32[(VAR6->VAR33 + VAR6->VAR16++) & 0xf] = VAR30;
            }
            else
            {
                VAR6->VAR14 |= VAR34;
            }
        }
        FUN4(VAR6);
        break;
    case VAR35:
        VAR6->VAR36 = VAR7;
        break;
    case VAR37:
        VAR6->VAR38 = VAR7;
        break;
    case VAR39:
        VAR6->VAR40 = VAR7;
        break;
    default:
        FUN2("" VAR41 "", VAR13, VAR2);
        break;
    }
}