static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6, int VAR7, int VAR8, VAR9 *VAR10)
{
    struct VAR11 *VAR12 = (struct VAR11 *)VAR2->VAR13;
    int VAR14;
    VAR14 = FUN2(VAR2, VAR4, VAR5, VAR6, VAR7, VAR8, VAR10);
    if (VAR14 >= 0)
    {
        switch (VAR5)
        {
        case VAR15 | VAR16:
            VAR12->VAR17 = 0;
            break;
        case VAR18 | VAR19:
            VAR12->VAR17 = 1;
            FUN3(&VAR12->VAR20);
            FUN3(&VAR12->VAR21);
            FUN3(&VAR12->VAR22);
            break;
        }
        return VAR14;
    }
    VAR14 = 0;
    switch (VAR5)
    {
    case VAR23 | VAR24:
    case VAR25 | VAR24:
        VAR10[0] = 0x00;
        VAR10[1] = 0x00;
        VAR14 = 2;
        break;
    case VAR26 | VAR27:
    case VAR28 | VAR27:
        goto VAR29;
    case VAR26 | VAR30:
    case VAR28 | VAR30:
        goto VAR29;
        break;
    case VAR23 | VAR31:
        if (VAR6 != 0 || (VAR7 & ~1) || VAR8 != 1)
            goto VAR29;
        if (VAR7 == 1)
            VAR10[0] = VAR12->VAR32;
        else
            VAR10[0] = 0;
        VAR14 = 1;
        break;
    case VAR26 | VAR33:
        if ((VAR7 & ~1) || VAR8 != 0 || (VAR7 == 1 && (VAR6 < 0 || VAR6 > 4)) || (VAR7 == 0 && VAR6 != 0))
        {
            FUN4("", VAR34, VAR7, VAR6);
            goto VAR29;
        }
        VAR12->VAR32 = VAR6;
        VAR14 = 0;
        break;
    case ((VAR35 | VAR36 | VAR37) << 8):
        if (VAR12->VAR17)
            FUN5(VAR12, &VAR12->VAR38, VAR12->VAR39->VAR40, VAR41, VAR10, VAR8);
        break;
    default:
    VAR29:
        VAR14 = VAR42;
        break;
    }
    return VAR14;
}