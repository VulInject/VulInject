static int FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, int VAR6, VAR7 *VAR8)
{
    struct VAR9 *VAR10 = (struct VAR9 *)VAR2->VAR11;
    int VAR12;
    VAR12 = FUN2(VAR2, VAR3, VAR4, VAR5, VAR6, VAR8);
    if (VAR12 >= 0)
    {
        switch (VAR3)
        {
        case VAR13 | VAR14:
            VAR10->VAR15 = 0;
            break;
        case VAR16 | VAR17:
            VAR10->VAR15 = 1;
            FUN3(&VAR10->VAR18);
            FUN3(&VAR10->VAR19);
            FUN3(&VAR10->VAR20);
            break;
        }
        return VAR12;
    }
    VAR12 = 0;
    switch (VAR3)
    {
    case VAR13 | VAR21:
    case VAR22 | VAR21:
    case VAR23 | VAR21:
        VAR8[0] = (1 << VAR24) | (VAR2->VAR25 << VAR26);
        VAR8[1] = 0x00;
        VAR12 = 2;
        break;
    case VAR16 | VAR27:
    case VAR28 | VAR27:
    case VAR29 | VAR27:
        if (VAR4 == VAR26)
        {
            VAR2->VAR25 = 0;
        }
        else
        {
            goto VAR30;
        }
        VAR12 = 0;
        break;
    case VAR16 | VAR31:
    case VAR28 | VAR31:
    case VAR29 | VAR31:
        if (VAR4 == VAR26)
        {
            VAR2->VAR25 = 1;
        }
        else
        {
            goto VAR30;
        }
        VAR12 = 0;
        break;
    case VAR22 | VAR32:
        if (VAR4 != 0 || (VAR5 & ~1) || VAR6 != 1)
            goto VAR30;
        if (VAR5 == 1)
            VAR8[0] = VAR10->VAR33;
        else
            VAR8[0] = 0;
        VAR12 = 1;
        break;
    case VAR28 | VAR34:
        if ((VAR5 & ~1) || VAR6 != 0 || (VAR5 == 1 && (VAR4 < 0 || VAR4 > 4)) || (VAR5 == 0 && VAR4 != 0))
        {
            FUN4("", VAR35, VAR5, VAR4);
            goto VAR30;
        }
        VAR10->VAR33 = VAR4;
        VAR12 = 0;
        break;
    case ((VAR36 | VAR37 | VAR38) << 8):
        if (VAR10->VAR15)
            FUN5(VAR10, &VAR10->VAR39, VAR10->VAR40->VAR41, VAR42, VAR8, VAR6);
        break;
    default:
    VAR30:
        VAR12 = VAR43;
        break;
    }
    return VAR12;
}