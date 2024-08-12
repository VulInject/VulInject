static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR2;
    int VAR7 = 0;
    switch (VAR4->VAR8)
    {
    case VAR9:
        switch (VAR4->VAR10->VAR11)
        {
        case 1:
            VAR7 = FUN2(VAR6, VAR4);
            break;
        case 2:
            VAR7 = FUN3(VAR6, VAR4);
            break;
        default:
            goto VAR12;
        }
        break;
    case VAR13:
        switch (VAR4->VAR10->VAR11)
        {
        case 2:
            VAR7 = FUN4(VAR6, VAR4);
            break;
        default:
            goto VAR12;
        }
        break;
    default:
    VAR12:
        VAR7 = VAR14;
        break;
    }
    if (VAR7 == VAR14)
        fprintf(VAR15, ""
                        "",
                VAR4->VAR8, VAR4->VAR10->VAR11, VAR4->VAR16.VAR17);
    return VAR7;
}