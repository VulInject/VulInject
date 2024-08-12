static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = FUN2(VAR5, VAR2, VAR2);
    VAR7 *VAR8 = &VAR6->VAR9;
    uint8_t VAR10[VAR4->VAR11.VAR12];
    int VAR13 = 0;
    switch (VAR4->VAR14)
    {
    case VAR15:
        if (VAR4->VAR16 == 1)
        {
            int64_t VAR17 = FUN3(VAR18);
            if (!FUN4(VAR8) && (!VAR6->VAR19 || VAR6->VAR20 - VAR17 > 0))
            {
                return VAR21;
            }
            FUN5(VAR6, VAR17);
            if (VAR8->VAR22 == VAR23 || VAR8->VAR22 == VAR24)
            {
                VAR13 = FUN6(VAR8, VAR10, VAR4->VAR11.VAR12);
            }
            else if (VAR8->VAR22 == VAR25)
            {
                VAR13 = FUN7(VAR8, VAR10, VAR4->VAR11.VAR12);
            }
            FUN8(VAR4, VAR10, VAR13);
        }
        else
        {
            goto VAR26;
        }
        break;
    case VAR27:
    default:
    VAR26:
        VAR13 = VAR28;
        break;
    }
    return VAR13;
}