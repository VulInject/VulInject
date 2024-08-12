static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR2;
    int VAR7 = 0;
    switch (VAR4->VAR8)
    {
    case VAR9:
        switch (VAR4->VAR10)
        {
        case 1:
            VAR7 = FUN2(VAR6, VAR4);
            break;
        case 2:
            VAR7 = FUN3(VAR6, VAR4);
            break;
        default:
            goto VAR11;
        }
        break;
    case VAR12:
        switch (VAR4->VAR10)
        {
        case 2:
            VAR7 = FUN4(VAR6, VAR4);
            break;
        default:
            goto VAR11;
        }
        break;
    default:
    VAR11:
        VAR7 = VAR13;
        break;
    }
    if (VAR7 == VAR13)
        fprintf(VAR14, ""
                        "",
                VAR4->VAR8, VAR4->VAR10, VAR4->VAR15);
    return VAR7;
}