static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5, VAR6 *VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    int VAR11, VAR12;
    VAR11 = FUN2(&VAR9->VAR13, VAR4, VAR5, VAR7, 0, 0, VAR14, 1);
    if (VAR11 < 0)
        return VAR11;
    for (VAR12 = 0; VAR12 < VAR9->VAR13.VAR15; VAR12++)
    {
        VAR16 *VAR17 = &VAR9->VAR13.VAR18[VAR12];
        switch (VAR17->VAR19)
        {
        case VAR20:
            FUN3(&VAR17->VAR21, VAR7, &VAR9->VAR22);
            break;
        case VAR23:
            FUN4(&VAR17->VAR21, VAR7, &VAR9->VAR22, 1);
            break;
        case VAR24:
            FUN5(&VAR17->VAR21, VAR7, &VAR9->VAR22);
            break;
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
        case VAR37:
        case VAR38:
        case VAR39:
        case VAR40:
            if (VAR4 == VAR7->VAR41)
            {
                FUN6(VAR7, VAR42, "", VAR17->VAR19);
                return VAR43;
            }
            FUN7(VAR2, VAR17, VAR7);
            break;
        }
    }
    return 0;
}