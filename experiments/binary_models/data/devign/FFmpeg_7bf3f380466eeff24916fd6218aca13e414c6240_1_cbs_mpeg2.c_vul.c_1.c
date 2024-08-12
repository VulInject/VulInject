static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    BitstreamContext VAR5;
    int VAR6;
    VAR6 = FUN2(&VAR5, VAR4->VAR7, 8 * VAR4->VAR8);
    if (VAR6 < 0)
        return VAR6;
    if (FUN3(VAR4->VAR9))
    {
        VAR10 *VAR11;
        int VAR12, VAR13;
        VAR11 = FUN4(sizeof(*VAR11));
        if (!VAR11)
            return FUN5(VAR14);
        VAR6 = FUN6(VAR2, &VAR5, &VAR11->VAR15);
        if (VAR6 < 0)
        {
            FUN7(VAR11);
            return VAR6;
        }
        VAR12 = FUN8(&VAR5);
        VAR13 = VAR4->VAR8;
        VAR11->VAR8 = VAR13 - VAR12 / 8;
        VAR11->VAR7 = FUN9(VAR11->VAR8);
        if (!VAR11->VAR7)
        {
            FUN7(VAR11);
            return FUN5(VAR14);
        }
        memcpy(VAR11->VAR7, VAR4->VAR7 + VAR12 / 8, VAR11->VAR8);
        VAR11->VAR16 = VAR12 % 8;
        VAR4->VAR17 = VAR11;
    }
    else
    {
        switch (VAR4->VAR9)
        {
        case VAR18:
        {
            VAR9 *VAR15;
            VAR15 = FUN4(sizeof(*VAR15));
            if (!VAR15)
                return FUN5(VAR14);
            VAR6 = VAR19##FUN10(VAR2, &VAR5, VAR15);
            if (VAR6 < 0)
            {
                FUN7(VAR15);
                return VAR6;
            }
            VAR4->VAR17 = VAR15;
        }
        break;
            FUN11(0x00, VAR20, VAR21);
            FUN11(0xb2, VAR22, VAR23);
            FUN11(0xb3, VAR24, VAR25);
            FUN11(0xb5, VAR26, VAR27);
            FUN11(0xb8, VAR28, VAR29);
        default:
            FUN12(VAR2->VAR30, VAR31, "", VAR4->VAR9);
            return VAR32;
        }
    }
    return 0;
}