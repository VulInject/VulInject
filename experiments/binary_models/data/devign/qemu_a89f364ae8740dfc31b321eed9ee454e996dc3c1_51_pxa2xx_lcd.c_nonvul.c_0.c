static VAR1 FUN1(void *VAR2, hwaddr VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR2;
    int VAR7;
    switch (VAR3)
    {
    case VAR8:
        return VAR6->VAR9[0];
    case VAR10:
        return VAR6->VAR9[1];
    case VAR11:
        return VAR6->VAR9[2];
    case VAR12:
        return VAR6->VAR9[3];
    case VAR13:
        return VAR6->VAR9[4];
    case VAR14:
        return VAR6->VAR9[5];
    case VAR15:
        return VAR6->VAR16[0];
    case VAR17:
        return VAR6->VAR16[1];
    case VAR18:
        return VAR6->VAR19[0];
    case VAR20:
        return VAR6->VAR19[1];
    case VAR21:
        return VAR6->VAR22;
    case VAR23:
        return VAR6->VAR24;
    case VAR25:
        return VAR6->VAR26;
    case VAR27:
        return VAR6->VAR28;
    case 0x200 ... 0x1000:
        VAR7 = (VAR3 - 0x200) >> 4;
        if (!(VAR7 >= 0 && VAR7 < VAR29))
            goto VAR30;
        switch (VAR3 & 0xf)
        {
        case VAR31:
            return VAR6->VAR32[VAR7].VAR33;
        case VAR34:
            return VAR6->VAR32[VAR7].VAR35;
        case VAR36:
            return VAR6->VAR32[VAR7].VAR37;
        case VAR38:
            return VAR6->VAR32[VAR7].VAR39;
        default:
            goto VAR30;
        }
    case VAR40:
        return VAR6->VAR32[0].VAR41;
    case VAR42:
        return VAR6->VAR32[1].VAR41;
    case VAR43:
        return VAR6->VAR32[2].VAR41;
    case VAR44:
        return VAR6->VAR32[3].VAR41;
    case VAR45:
        return VAR6->VAR32[4].VAR41;
    case VAR46:
        return VAR6->VAR32[5].VAR41;
    case VAR47:
        return VAR6->VAR32[6].VAR41;
    case VAR48:
        return VAR6->VAR49;
    case VAR50:
        return 0;
    case VAR51:
        return VAR6->VAR52[0];
    case VAR53:
        return VAR6->VAR52[1];
    case VAR54:
        return VAR6->VAR55;
    default:
    VAR30:
        FUN2("" VAR56 "", VAR57, VAR3);
    }
    return 0;
}