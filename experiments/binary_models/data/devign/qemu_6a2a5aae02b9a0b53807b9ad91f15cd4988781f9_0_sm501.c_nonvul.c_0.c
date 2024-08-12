static void FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR1;
    FUN2("", (unsigned)VAR2, (unsigned)VAR3);
    switch (VAR2)
    {
    case VAR7:
        VAR6->VAR8 = VAR3 & 0x0FFF73FF;
        break;
    case VAR9:
        VAR6->VAR10 = VAR3 & 0xFF3FFF3F;
        break;
    case VAR11:
        VAR6->VAR12 = VAR3 & 0x8FFFFFF0;
        break;
    case VAR13:
        VAR6->VAR14 = VAR3 & 0x3FF03FF0;
        break;
    case VAR15:
        VAR6->VAR16 = VAR3 & 0x0FFF0FFF;
        break;
    case VAR17:
        VAR6->VAR18 = VAR3 & 0x0FFF0FFF;
        break;
    case VAR19:
        VAR6->VAR20 = VAR3 & 0x07FF07FF;
        break;
    case VAR21:
        VAR6->VAR22 = VAR3 & 0x07FF07FF;
        break;
    case VAR23:
        VAR6->VAR24 = VAR3 & 0x0FFF0FFF;
        break;
    case VAR25:
        VAR6->VAR26 = VAR3 & 0x00FF0FFF;
        break;
    case VAR27:
        VAR6->VAR28 = VAR3 & 0x0FFF0FFF;
        break;
    case VAR29:
        VAR6->VAR30 = VAR3 & 0x003F0FFF;
        break;
    case VAR31:
        VAR3 &= 0x8FFFFFF0;
        if (VAR3 != VAR6->VAR32)
        {
            FUN3(VAR6, 0);
            VAR6->VAR32 = VAR3;
        }
        break;
    case VAR33:
        VAR3 &= 0x0FFF0FFF;
        if (VAR3 != VAR6->VAR34)
        {
            FUN3(VAR6, 0);
            VAR6->VAR34 = VAR3;
        }
        break;
    case VAR35:
        VAR6->VAR36 = VAR3;
        break;
    case VAR37:
        VAR6->VAR38 = VAR3 & 0x0000FFFF;
        break;
    case VAR39:
        VAR6->VAR40 = VAR3 & 0x0003FFFF;
        break;
    case VAR41:
        VAR6->VAR42 = VAR3 & 0x8FFFFFF0;
        break;
    case VAR43:
        VAR6->VAR44 = VAR3 & 0x3FF03FF0;
        break;
    case VAR45:
        VAR6->VAR46 = VAR3 & 0x0FFF0FFF;
        break;
    case VAR47:
        VAR6->VAR48 = VAR3 & 0x00FF0FFF;
        break;
    case VAR49:
        VAR6->VAR50 = VAR3 & 0x0FFF0FFF;
        break;
    case VAR51:
        VAR6->VAR52 = VAR3 & 0x003F0FFF;
        break;
    case VAR53:
        VAR3 &= 0x8FFFFFF0;
        if (VAR3 != VAR6->VAR54)
        {
            FUN3(VAR6, 1);
            VAR6->VAR54 = VAR3;
        }
        break;
    case VAR55:
        VAR3 &= 0x0FFF0FFF;
        if (VAR3 != VAR6->VAR56)
        {
            FUN3(VAR6, 1);
            VAR6->VAR56 = VAR3;
        }
        break;
    case VAR57:
        VAR6->VAR58 = VAR3;
        break;
    case VAR59:
        VAR6->VAR60 = VAR3 & 0x0000FFFF;
        break;
    case VAR61 ... VAR61 + 0x400 * 3 - 4:
        FUN4(VAR1, VAR2 - VAR61, VAR3);
        break;
    default:
        FUN5(""
               "",
               (int)VAR2, (unsigned)VAR3);
        FUN6();
    }
}