static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    struct VAR5 *VAR6 = VAR2->VAR7;
    int VAR8 = FUN2(VAR6->VAR9);
    int VAR10, VAR11;
    struct pollfd VAR12 = {VAR8, VAR13, 0};
    uint8_t VAR14[1500];
    if (VAR6->VAR15)
        return VAR16;
    while (1)
    {
        VAR10 = FUN3(&VAR12, 1, 0);
        if (VAR10 <= 0 || !(VAR12.VAR17 & VAR13))
            break;
        VAR11 = FUN4(VAR6->VAR9, VAR14, sizeof(VAR14));
        if (VAR11 >= 8)
        {
            uint16_t VAR18 = FUN5(&VAR14[2]);
            if (VAR14[0] & 0x04 && VAR18 == VAR6->VAR18)
            {
                VAR6->VAR15 = 1;
                return VAR16;
            }
        }
    }
    VAR11 = FUN6(VAR6->VAR19, VAR4);
    if (VAR11 < 0)
        return VAR11;
    if (VAR2->VAR20 & VAR21)
    {
        while (VAR6->VAR19->VAR22 > VAR2->VAR22)
        {
            int VAR23 = VAR2->VAR22;
            VAR24 *VAR25 = FUN7(VAR2, VAR23);
            if (!VAR25)
            {
                FUN8(VAR4);
                return FUN9(VAR26);
            }
            FUN10(VAR25->VAR27, VAR6->VAR19->VAR28[VAR23]->VAR27);
            VAR25->VAR29 = VAR6->VAR19->VAR28[VAR23]->VAR29;
        }
    }
    return VAR11;
}