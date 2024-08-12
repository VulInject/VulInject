static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    struct VAR5 *VAR6 = (struct VAR5 *)VAR2->VAR7;
    int VAR8 = 0;
    if (!VAR6->VAR9)
        goto VAR10;
    switch (VAR4->VAR11)
    {
    case VAR12:
        switch (VAR4->VAR13 & 0xf)
        {
        case VAR14:
            VAR8 = FUN2(&VAR6->VAR15, VAR4);
            break;
        case VAR16:
            VAR8 = FUN2(&VAR6->VAR17, VAR4);
            break;
        case VAR18:
            VAR8 = FUN2(&VAR6->VAR19, VAR4);
            break;
        default:
            goto VAR10;
        }
        break;
    case VAR20:
        switch (VAR4->VAR13 & 0xf)
        {
        case VAR16:
            FUN3(VAR6, &VAR6->VAR21, VAR6->VAR22->VAR23, VAR24, VAR4->VAR25, VAR4->VAR26);
            break;
        case VAR18:
            FUN3(VAR6, &VAR6->VAR27, VAR6->VAR22->VAR28, VAR29, VAR4->VAR25, VAR4->VAR26);
            break;
        default:
            goto VAR10;
        }
        break;
    default:
    VAR10:
        VAR8 = VAR30;
        break;
    }
    return VAR8;
}