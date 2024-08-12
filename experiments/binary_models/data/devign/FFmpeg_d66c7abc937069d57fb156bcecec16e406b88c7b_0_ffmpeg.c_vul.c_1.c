static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, unsigned char *VAR7, int VAR8)
{
    VAR9 *VAR10;
    uint8_t VAR11[2 * VAR12];
    uint8_t VAR13[4 * VAR12];
    int VAR14, VAR15, VAR16;
    VAR17 *VAR18;
    VAR18 = &VAR4->VAR19->VAR20;
    if (VAR4->VAR21)
    {
        VAR10 = VAR11;
        VAR14 = FUN2(VAR4->VAR22, (short *)VAR10, (short *)VAR7, VAR8 / (VAR6->VAR19->VAR20.VAR23 * 2));
        VAR14 = VAR14 * VAR18->VAR23 * 2;
    }
    else
    {
        VAR10 = VAR7;
        VAR14 = VAR8;
    }
    if (VAR18->VAR24 > 1)
    {
        FUN3(&VAR4->VAR25, VAR10, VAR14, &VAR4->VAR25.VAR26);
        VAR15 = VAR18->VAR24 * 2 * VAR18->VAR23;
        while (FUN4(&VAR4->VAR25, VAR11, VAR15, &VAR4->VAR25.VAR27) == 0)
        {
            VAR16 = FUN5(VAR18, VAR13, sizeof(VAR13), (short *)VAR11);
            FUN6(VAR2, VAR4->VAR28, VAR13, VAR16);
        }
    }
    else
    {
        switch (VAR18->VAR20->VAR29)
        {
        case VAR30:
        case VAR31:
        case VAR32:
        case VAR33:
            break;
        default:
            VAR14 = VAR14 >> 1;
            break;
        }
        VAR16 = FUN5(VAR18, VAR13, VAR14, (short *)VAR10);
        FUN6(VAR2, VAR4->VAR28, VAR13, VAR16);
    }
}