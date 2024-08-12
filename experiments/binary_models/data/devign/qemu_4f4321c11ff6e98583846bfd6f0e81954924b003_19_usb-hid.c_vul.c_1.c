static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR2;
    int VAR7 = 0;
    switch (VAR4->VAR8)
    {
    case VAR9:
        if (VAR4->VAR10 == 1)
        {
            int64_t VAR11 = FUN2(VAR12);
            if (!VAR6->VAR13 && (!VAR6->VAR14 || VAR6->VAR15 - VAR11 > 0))
                return VAR16;
            FUN3(VAR6, VAR11);
            if (VAR6->VAR17 == VAR18 || VAR6->VAR17 == VAR19)
            {
                VAR7 = FUN4(VAR6, VAR4->VAR20, VAR4->VAR21);
            }
            else if (VAR6->VAR17 == VAR22)
            {
                VAR7 = FUN5(VAR6, VAR4->VAR20, VAR4->VAR21);
            }
            VAR6->VAR13 = VAR6->VAR23 > 0;
        }
        else
        {
            goto VAR24;
        }
        break;
    case VAR25:
    default:
    VAR24:
        VAR7 = VAR26;
        break;
    }
    return VAR7;
}