static void FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR1;
    int VAR7;
    switch (VAR2)
    {
    case VAR8:
        if ((VAR6->VAR9[0] & VAR10) && !(VAR3 & VAR10))
            VAR6->VAR11[0] |= VAR12;
        if (!(VAR6->VAR9[0] & VAR13) && (VAR3 & VAR13))
            FUN2("", VAR14);
        if ((VAR6->VAR9[3] & VAR15) && (VAR3 & VAR10) && !(VAR3 & VAR13))
            VAR6->VAR11[0] |= VAR16;
        VAR6->VAR9[0] = VAR3 & 0x07ffffff;
        FUN3(VAR6);
        VAR6->VAR17[0].VAR18 = !!(VAR3 & VAR10);
        VAR6->VAR17[1].VAR18 = (VAR6->VAR19[0] & VAR20) || (VAR3 & VAR21);
        break;
    case VAR22:
        VAR6->VAR9[1] = VAR3;
        break;
    case VAR23:
        VAR6->VAR9[2] = VAR3;
        break;
    case VAR24:
        VAR6->VAR9[3] = VAR3 & 0xefffffff;
        VAR6->VAR25 = FUN4(VAR3);
        break;
    case VAR26:
        VAR6->VAR9[4] = VAR3 & 0x83ff81ff;
        break;
    case VAR27:
        VAR6->VAR9[5] = VAR3 & 0x3f3f3f3f;
        break;
    case VAR28:
        if (!(VAR6->VAR19[0] & VAR20) && (VAR3 & VAR20))
            FUN2("", VAR14);
        VAR6->VAR19[0] = VAR3 & 0x80ffffff;
        VAR6->VAR17[1].VAR18 = (VAR3 & VAR20) || (VAR6->VAR9[0] & VAR21);
        break;
    case VAR29:
        VAR6->VAR19[1] = VAR3 & 0x000fffff;
        break;
    case VAR30:
        if (!(VAR6->VAR31[0] & VAR20) && (VAR3 & VAR20))
            FUN2("", VAR14);
        VAR6->VAR31[0] = VAR3 & 0x80ffffff;
        VAR6->VAR17[2].VAR18 = !!(VAR3 & VAR20);
        VAR6->VAR17[3].VAR18 = !!(VAR3 & VAR20);
        VAR6->VAR17[4].VAR18 = !!(VAR3 & VAR20);
        break;
    case VAR32:
        VAR6->VAR31[1] = VAR3 & 0x007fffff;
        break;
    case VAR33:
        if (!(VAR6->VAR34 & VAR35) && (VAR3 & VAR35))
            FUN2("", VAR14);
        VAR6->VAR34 = VAR3 & 0x81ffffe7;
        VAR6->VAR17[5].VAR18 = !!(VAR3 & VAR35);
        break;
    case VAR36:
        VAR6->VAR37 = VAR3 & 0xff;
        break;
    case VAR38:
        VAR6->VAR39 = VAR3 & 0x00ffffff;
        break;
    case VAR40:
        VAR6->VAR41 = VAR3 & 0x7fff;
        break;
    case 0x200 ... 0x1000:
        VAR7 = (VAR2 - 0x200) >> 4;
        if (!(VAR7 >= 0 && VAR7 < VAR42))
            goto VAR43;
        switch (VAR2 & 0xf)
        {
        case VAR44:
            VAR6->VAR17[VAR7].VAR45 = VAR3 & 0xfffffff0;
            break;
        default:
            goto VAR43;
        }
        break;
    case VAR46:
        VAR6->VAR17[0].VAR47 = VAR3 & 0xfffffff3;
        break;
    case VAR48:
        VAR6->VAR17[1].VAR47 = VAR3 & 0xfffffff3;
        break;
    case VAR49:
        VAR6->VAR17[2].VAR47 = VAR3 & 0xfffffff3;
        break;
    case VAR50:
        VAR6->VAR17[3].VAR47 = VAR3 & 0xfffffff3;
        break;
    case VAR51:
        VAR6->VAR17[4].VAR47 = VAR3 & 0xfffffff3;
        break;
    case VAR52:
        VAR6->VAR17[5].VAR47 = VAR3 & 0xfffffff3;
        break;
    case VAR53:
        VAR6->VAR17[6].VAR47 = VAR3 & 0xfffffff3;
        break;
    case VAR54:
        VAR6->VAR55 = VAR3 & 0xf;
        break;
    case VAR56:
        break;
    case VAR57:
        VAR6->VAR11[0] &= ~(VAR3 & 0xfff);
        if (VAR3 & VAR58)
            VAR6->VAR11[0] &= ~FUN5(7);
        break;
    case VAR59:
        VAR6->VAR11[1] &= ~(VAR3 & 0x3e3f3f);
        break;
    default:
    VAR43:
        FUN6("" VAR60 "", VAR14, VAR2);
    }
}