VAR1 FUN1(VAR2)(VAR3 *VAR4, target_ulong VAR5, target_ulong VAR6, uint32_t VAR7)
{
    int VAR8 = (VAR6 | VAR7);
    int VAR9;
    VAR10 *VAR11 = FUN2(VAR4);
    switch (VAR8)
    {
    case FUN3(0, 0):
        return VAR4->VAR12 & VAR13;
    case FUN3(0, 1):
        return VAR4->VAR14;
    case FUN3(0, 2):
        return VAR4->VAR15;
    case FUN3(0, 3):
        return VAR4->VAR16;
    case FUN3(0, 4):
        return VAR4->VAR17;
    case FUN3(0, 16):
        return VAR4->VAR18;
    case FUN3(0, 17):
        return VAR4->VAR19;
    case FUN3(0, 18):
        return VAR4->VAR20;
    case FUN3(0, 32):
        return VAR4->VAR21;
    case FUN3(0, 48):
        return VAR4->VAR22;
    case FUN3(0, 64):
        return VAR4->VAR23;
    case FUN3(1, 512)... FUN3(1, 512 + VAR24 - 1):
        VAR9 = VAR8 - FUN3(1, 512);
        return VAR4->VAR25->VAR26[0][VAR9].VAR27;
    case FUN3(1, 640)... FUN3(1, 640 + VAR24 - 1):
        VAR9 = VAR8 - FUN3(1, 640);
        return VAR4->VAR25->VAR26[0][VAR9].VAR28;
    case FUN3(1, 768)... FUN3(1, 895):
    case FUN3(1, 896)... FUN3(1, 1023):
    case FUN3(1, 1024)... FUN3(1, 1151):
    case FUN3(1, 1152)... FUN3(1, 1279):
    case FUN3(1, 1280)... FUN3(1, 1407):
    case FUN3(1, 1408)... FUN3(1, 1535):
        break;
    case FUN3(2, 512)... FUN3(2, 512 + VAR29 - 1):
        VAR9 = VAR8 - FUN3(2, 512);
        return VAR4->VAR25->VAR30[0][VAR9].VAR27;
    case FUN3(2, 640)... FUN3(2, 640 + VAR29 - 1):
        VAR9 = VAR8 - FUN3(2, 640);
        return VAR4->VAR25->VAR30[0][VAR9].VAR28;
    case FUN3(2, 768)... FUN3(2, 895):
    case FUN3(2, 896)... FUN3(2, 1023):
    case FUN3(2, 1024)... FUN3(2, 1151):
    case FUN3(2, 1152)... FUN3(2, 1279):
    case FUN3(2, 1280)... FUN3(2, 1407):
    case FUN3(2, 1408)... FUN3(2, 1535):
        break;
    case FUN3(9, 0):
        return VAR4->VAR31;
    case FUN3(9, 2):
        return VAR4->VAR32;
    case FUN3(10, 0):
        return VAR4->VAR33;
    case FUN3(10, 1):
        FUN4(VAR11);
        return VAR4->VAR34;
    default:
        break;
    }
    return VAR5;
}