static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    BitstreamContext VAR5;
    int VAR6;
    VAR6 = FUN2(&VAR5, VAR4->VAR7, 8 * VAR4->VAR8);
    if (VAR6 < 0)
        return VAR6;
    switch (VAR4->VAR9)
    {
    case VAR10:
    {
        VAR11 *VAR12;
        VAR12 = FUN3(sizeof(*VAR12));
        if (!VAR12)
            return FUN4(VAR13);
        VAR6 = FUN5(VAR2, &VAR5, VAR12);
        if (VAR6 >= 0)
            VAR6 = FUN6(VAR2, VAR12);
        if (VAR6 < 0)
        {
            FUN7(VAR12);
            return VAR6;
        }
        VAR4->VAR14 = VAR12;
    }
    break;
    case VAR15:
    {
        VAR16 *VAR17;
        VAR17 = FUN3(sizeof(*VAR17));
        if (!VAR17)
            return FUN4(VAR13);
        VAR6 = FUN8(VAR2, &VAR5, VAR17);
        if (VAR6 >= 0)
            VAR6 = FUN9(VAR2, VAR17);
        if (VAR6 < 0)
        {
            FUN7(VAR17);
            return VAR6;
        }
        VAR4->VAR14 = VAR17;
    }
    break;
    case VAR18:
    {
        VAR19 *VAR20;
        VAR20 = FUN3(sizeof(*VAR20));
        if (!VAR20)
            return FUN4(VAR13);
        VAR6 = FUN10(VAR2, &VAR5, VAR20);
        if (VAR6 >= 0)
            VAR6 = FUN11(VAR2, VAR20);
        if (VAR6 < 0)
        {
            FUN7(VAR20);
            return VAR6;
        }
        VAR4->VAR14 = VAR20;
    }
    break;
    case VAR21:
    case VAR22:
    case VAR23:
    case VAR24:
    case VAR25:
    case VAR26:
    case VAR27:
    case VAR28:
    case VAR29:
    case VAR30:
    case VAR31:
    case VAR32:
    case VAR33:
    case VAR34:
    case VAR35:
    case VAR36:
    {
        VAR37 *VAR38;
        int VAR39, VAR40;
        VAR38 = FUN3(sizeof(*VAR38));
        if (!VAR38)
            return FUN4(VAR13);
        VAR6 = FUN12(VAR2, &VAR5, &VAR38->VAR41);
        if (VAR6 < 0)
        {
            FUN7(VAR38);
            return VAR6;
        }
        VAR39 = FUN13(&VAR5);
        VAR40 = VAR4->VAR8;
        if (!VAR4->VAR7[VAR40 - 1])
        {
            int VAR42;
            for (VAR42 = 0; VAR42 < VAR40 && !VAR4->VAR7[VAR40 - VAR42 - 1]; VAR42++)
                ;
            FUN14(VAR2->VAR43, VAR44, ""
                                               "",
                   VAR42);
            VAR40 -= VAR42;
        }
        VAR38->VAR8 = VAR40 - VAR39 / 8;
        VAR38->VAR7 = FUN15(VAR38->VAR8);
        if (!VAR38->VAR7)
        {
            FUN7(VAR38);
            return FUN4(VAR13);
        }
        memcpy(VAR38->VAR7, VAR4->VAR7 + VAR39 / 8, VAR38->VAR8);
        VAR38->VAR45 = VAR39 % 8;
        VAR4->VAR14 = VAR38;
    }
    break;
    case VAR46:
    {
        VAR47 *VAR48;
        VAR48 = FUN3(sizeof(*VAR48));
        if (!VAR48)
            return FUN4(VAR13);
        VAR6 = FUN16(VAR2, &VAR5, VAR48);
        if (VAR6 < 0)
        {
            FUN7(VAR48);
            return VAR6;
        }
        VAR4->VAR14 = VAR48;
    }
    break;
    default:
        return FUN4(VAR49);
    }
    return 0;
}