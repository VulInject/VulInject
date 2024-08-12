static int FUN1(VAR1 *VAR2, int VAR3, VAR4 *VAR5, int VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *VAR11 = VAR2->VAR12[VAR3];
    ByteIOContext VAR13, *VAR14;
    AVPicture VAR15;
    int VAR16, VAR17, VAR18, VAR19;
    char VAR20[1024];
    VAR16 = VAR11->VAR21.VAR16;
    VAR17 = VAR11->VAR21.VAR17;
    switch (VAR11->VAR21.VAR22)
    {
    case VAR23:
        VAR19 = (VAR16 * VAR17 * 3) / 2;
        if (VAR6 != VAR19)
            return -VAR24;
        VAR15.VAR25[0] = VAR5;
        VAR15.VAR25[1] = VAR15.VAR25[0] + VAR16 * VAR17;
        VAR15.VAR25[2] = VAR15.VAR25[1] + (VAR16 * VAR17) / 4;
        VAR15.VAR26[0] = VAR16;
        VAR15.VAR26[1] = VAR16 >> 1;
        VAR15.VAR26[2] = VAR16 >> 1;
        break;
    case VAR27:
        VAR19 = (VAR16 * VAR17 * 3);
        if (VAR6 != VAR19)
            return -VAR24;
        VAR15.VAR25[0] = VAR5;
        VAR15.VAR26[0] = VAR16 * 3;
        break;
    default:
        return -VAR24;
    }
    if (FUN2(VAR20, sizeof(VAR20), VAR8->VAR28, VAR8->VAR29) < 0)
        return -VAR24;
    if (!VAR8->VAR30)
    {
        VAR14 = &VAR13;
        if (FUN3(VAR14, VAR20, VAR31) < 0)
            return -VAR24;
    }
    else
    {
        VAR14 = &VAR2->VAR14;
    }
    switch (VAR8->VAR32)
    {
    case VAR33:
        VAR18 = FUN4(&VAR15, VAR16, VAR17, VAR14, 1);
        break;
    case VAR34:
        VAR18 = FUN4(&VAR15, VAR16, VAR17, VAR14, 0);
        break;
    case VAR35:
        VAR18 = FUN5(&VAR15, VAR16, VAR17, VAR20);
        break;
    case VAR36:
        VAR18 = FUN6(&VAR15, VAR16, VAR17, VAR14);
        break;
    }
    if (!VAR8->VAR30)
    {
        FUN7(VAR14);
    }
    VAR8->VAR29++;
    return 0;
}