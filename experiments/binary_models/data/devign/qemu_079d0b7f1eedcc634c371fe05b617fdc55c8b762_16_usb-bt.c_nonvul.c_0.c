static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    struct VAR5 *VAR6 = (struct VAR5 *)VAR2->VAR7;
    int VAR8 = 0;
    if (!VAR6->VAR9)
        goto VAR10;
    switch (VAR4->VAR11)
    {
    case VAR12:
        switch (VAR4->VAR13->VAR14)
        {
        case VAR15:
            VAR8 = FUN2(&VAR6->VAR16, VAR4);
            break;
        case VAR17:
            VAR8 = FUN2(&VAR6->VAR18, VAR4);
            break;
        case VAR19:
            VAR8 = FUN2(&VAR6->VAR20, VAR4);
            break;
        default:
            goto VAR10;
        }
        break;
    case VAR21:
        switch (VAR4->VAR13->VAR14)
        {
        case VAR17:
            FUN3(VAR6, &VAR6->VAR22, VAR6->VAR23->VAR24, VAR25, VAR4);
            break;
        case VAR19:
            FUN3(VAR6, &VAR6->VAR26, VAR6->VAR23->VAR27, VAR28, VAR4);
            break;
        default:
            goto VAR10;
        }
        break;
    default:
    VAR10:
        VAR8 = VAR29;
        break;
    }
    return VAR8;
}