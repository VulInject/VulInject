static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, unsigned char *VAR7, int VAR8)
{
    VAR9 *VAR10;
    static VAR9 *VAR11 = NULL;
    static VAR9 *VAR12 = NULL;
    const int VAR13 = 4 * VAR14;
    int VAR15, VAR16, VAR17;
    VAR18 *VAR19;
    if (!VAR11)
        VAR11 = FUN2(2 * VAR14);
    if (!VAR12)
        VAR12 = FUN2(VAR13);
    if (!VAR11 || !VAR12)
        return;
    VAR19 = &VAR4->VAR20->VAR21;
    if (VAR4->VAR22)
    {
        VAR10 = VAR11;
        VAR15 = FUN3(VAR4->VAR23, (short *)VAR10, (short *)VAR7, VAR8 / (VAR6->VAR20->VAR21.VAR24 * 2));
        VAR15 = VAR15 * VAR19->VAR24 * 2;
    }
    else
    {
        VAR10 = VAR7;
        VAR15 = VAR8;
    }
    if (VAR19->VAR25 > 1)
    {
        FUN4(&VAR4->VAR26, VAR10, VAR15, &VAR4->VAR26.VAR27);
        VAR16 = VAR19->VAR25 * 2 * VAR19->VAR24;
        while (FUN5(&VAR4->VAR26, VAR11, VAR16, &VAR4->VAR26.VAR28) == 0)
        {
            AVPacket VAR29;
            FUN6(&VAR29);
            VAR17 = FUN7(VAR19, VAR12, VAR13, (short *)VAR11);
            VAR30 += VAR17;
            VAR29.VAR31 = VAR4->VAR32;
            VAR29.VAR33 = VAR12;
            VAR29.VAR8 = VAR17;
            if (VAR19->VAR34)
                VAR29.VAR35 = VAR19->VAR34->VAR35;
            VAR29.VAR36 |= VAR37;
            FUN8(VAR2, &VAR29);
        }
    }
    else
    {
        AVPacket VAR29;
        FUN6(&VAR29);
        switch (VAR19->VAR21->VAR38)
        {
        case VAR39:
        case VAR40:
        case VAR41:
        case VAR42:
            break;
        default:
            VAR15 = VAR15 >> 1;
            break;
        }
        VAR17 = FUN7(VAR19, VAR12, VAR15, (short *)VAR10);
        VAR30 += VAR17;
        VAR29.VAR31 = VAR4->VAR32;
        VAR29.VAR33 = VAR12;
        VAR29.VAR8 = VAR17;
        if (VAR19->VAR34)
            VAR29.VAR35 = VAR19->VAR34->VAR35;
        VAR29.VAR36 |= VAR37;
        FUN8(VAR2, &VAR29);
    }
}