static VAR1 FUN1(void *VAR2, hwaddr VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR2;
    if (VAR3 < 0x20)
    {
        return FUN2(VAR6);
    }
    switch (VAR3)
    {
    case 0x40:
        return FUN3(VAR6);
    case 0x44:
        return VAR6->VAR7[VAR6->VAR8];
    case 0x48:
        return FUN4(VAR6);
    case 0x4c:
        return VAR6->VAR9[VAR6->VAR8];
    case VAR10:
        return 0x01180001;
    case VAR11:
        return VAR6->VAR12;
    case VAR13:
        return VAR6->VAR14;
    case VAR15:
        return VAR6->VAR16;
    case VAR17:
        return 0x87654321;
    case VAR18:
        return VAR6->VAR19;
    case VAR20:
        return VAR6->VAR21;
    case VAR22:
        return VAR6->VAR23;
    case VAR24:
        return VAR6->VAR25;
    case VAR26:
        return 0;
    case VAR27:
        return (VAR6->VAR28 << 16) | (VAR6->VAR29 << 2);
    case VAR30:
        return (VAR6->VAR31 << 16) | (VAR6->VAR32 - VAR6->VAR33->VAR34);
    case VAR35:
        return VAR6->VAR36;
    case VAR37:
        return VAR6->VAR38;
    case VAR39:
        return VAR6->VAR40;
    case VAR41:
        return FUN5(VAR6->VAR42);
    case VAR43:
        return VAR6->VAR44;
    case VAR45:
        return (FUN6(VAR46) / 40) - VAR6->VAR47;
    case VAR48:
        return 0;
    case VAR49:
        return VAR6->VAR50;
    case VAR51:
        return VAR6->VAR52;
    case VAR53:
        return VAR6->VAR54;
    case VAR55:
        return VAR6->VAR56;
    case VAR57:
        return VAR6->VAR58;
    }
    FUN7(VAR59, "", (int)VAR3);
    return 0;
}