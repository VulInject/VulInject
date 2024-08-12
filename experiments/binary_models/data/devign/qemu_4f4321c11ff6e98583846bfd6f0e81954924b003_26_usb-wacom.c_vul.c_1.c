static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR2;
    int VAR7 = 0;
    switch (VAR4->VAR8)
    {
    case VAR9:
        if (VAR4->VAR10 == 1)
        {
            if (!(VAR6->VAR11 || VAR6->VAR12))
                return VAR13;
            VAR6->VAR11 = 0;
            if (VAR6->VAR14 == VAR15)
                VAR7 = FUN2(VAR6, VAR4->VAR16, VAR4->VAR17);
            else if (VAR6->VAR14 == VAR18)
                VAR7 = FUN3(VAR6, VAR4->VAR16, VAR4->VAR17);
            break;
        }
    case VAR19:
    default:
        VAR7 = VAR20;
        break;
    }
    return VAR7;
}