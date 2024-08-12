void FUN1(VAR1)(VAR2 *VAR3, target_ulong VAR4, target_ulong VAR5, target_ulong VAR6)
{
    int VAR7 = (VAR4 | VAR6);
    int VAR8;
    VAR9 *VAR10 = FUN2(VAR3);
    VAR11 *VAR12 = FUN3(VAR10);
    switch (VAR7)
    {
    case FUN4(0, 0):
        VAR3->VAR13 = VAR5;
        break;
    case FUN4(0, 16):
        VAR3->VAR14 = VAR5;
        break;
    case FUN4(0, 17):
        if ((VAR3->VAR15 & (VAR16 | VAR17 | VAR18)) ^ (VAR5 & (VAR16 | VAR17 | VAR18)))
        {
            FUN5(VAR3, 1);
        }
        VAR3->VAR15 = VAR5;
        VAR3->VAR15 |= VAR19;
        if (VAR3->VAR15 & VAR17)
        {
            VAR3->VAR20->VAR21 = &VAR22;
        }
        else
        {
            VAR3->VAR20->VAR21 = &VAR23;
        }
        if (VAR3->VAR15 & VAR16)
        {
            VAR3->VAR20->VAR24 = &VAR25;
        }
        else
        {
            VAR3->VAR20->VAR24 = &VAR23;
        }
        break;
    case FUN4(0, 18):
        VAR3->VAR26 = VAR5;
        break;
    case FUN4(0, 32):
        VAR3->VAR27 = VAR5;
        break;
    case FUN4(0, 48):
        VAR3->VAR28 = VAR5;
        break;
    case FUN4(0, 64):
        VAR3->VAR29 = VAR5;
        break;
    case FUN4(1, 512)... FUN4(1, 512 + VAR30 - 1):
        VAR8 = VAR7 - FUN4(1, 512);
        if (!(VAR5 & 1))
        {
            FUN6(VAR3, VAR3->VAR20->VAR31[0][VAR8].VAR32 & VAR33);
        }
        VAR3->VAR20->VAR31[0][VAR8].VAR32 = VAR5;
        break;
    case FUN4(1, 640)... FUN4(1, 640 + VAR30 - 1):
        VAR8 = VAR7 - FUN4(1, 640);
        VAR3->VAR20->VAR31[0][VAR8].VAR34 = VAR5;
        break;
    case FUN4(1, 768)... FUN4(1, 895):
    case FUN4(1, 896)... FUN4(1, 1023):
    case FUN4(1, 1024)... FUN4(1, 1151):
    case FUN4(1, 1152)... FUN4(1, 1279):
    case FUN4(1, 1280)... FUN4(1, 1407):
    case FUN4(1, 1408)... FUN4(1, 1535):
        break;
    case FUN4(2, 512)... FUN4(2, 512 + VAR35 - 1):
        VAR8 = VAR7 - FUN4(2, 512);
        if (!(VAR5 & 1))
        {
            FUN6(VAR3, VAR3->VAR20->VAR36[0][VAR8].VAR32 & VAR33);
        }
        VAR3->VAR20->VAR36[0][VAR8].VAR32 = VAR5;
        break;
    case FUN4(2, 640)... FUN4(2, 640 + VAR35 - 1):
        VAR8 = VAR7 - FUN4(2, 640);
        VAR3->VAR20->VAR36[0][VAR8].VAR34 = VAR5;
        break;
    case FUN4(2, 768)... FUN4(2, 895):
    case FUN4(2, 896)... FUN4(2, 1023):
    case FUN4(2, 1024)... FUN4(2, 1151):
    case FUN4(2, 1152)... FUN4(2, 1279):
    case FUN4(2, 1280)... FUN4(2, 1407):
    case FUN4(2, 1408)... FUN4(2, 1535):
        break;
    case FUN4(9, 0):
        VAR3->VAR37 |= VAR5;
        break;
    case FUN4(9, 2):
        VAR3->VAR38 &= ~VAR5;
        break;
    case FUN4(10, 0):
    {
        if ((VAR3->VAR39 & VAR40) ^ (VAR5 & VAR40))
        {
            switch (VAR5 & VAR40)
            {
            case VAR41:
                FUN7(VAR10);
                break;
            case VAR42:
            case VAR43:
            case VAR44:
                FUN8(VAR10);
                break;
            default:
                break;
            }
        }
        int VAR45 = VAR3->VAR39 & VAR46;
        if (VAR5 & VAR46)
        {
            VAR3->VAR39 = (VAR5 & ~VAR46) | VAR45;
        }
        else
        {
            VAR3->VAR39 = VAR5 & ~VAR46;
            VAR12->VAR47 &= ~VAR48;
        }
        FUN9(VAR10);
    }
    break;
    case FUN4(10, 1):
        VAR3->VAR49 = VAR5;
        if (VAR3->VAR39 & VAR41)
        {
            return;
        }
        FUN9(VAR10);
        break;
    default:
        break;
    }
}