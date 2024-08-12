static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    int VAR8, VAR9;
    uint8_t VAR10[10 * VAR11];
    VAR12 *VAR13;
    if (VAR6->VAR14)
    {
        if (VAR6->VAR15 == VAR16)
        {
            VAR8 = FUN2(VAR6->VAR14, VAR4, NULL, 0);
        }
        else
            VAR8 = FUN3(VAR6->VAR14, VAR4, NULL, 0);
        if (VAR8 == 0)
        {
            VAR6->VAR14 = NULL;
            return 0;
        }
        else if (VAR8 == 1)
        {
            return 0;
        }
        else
            VAR6->VAR14 = NULL;
    }
VAR17:
    switch (VAR6->VAR18)
    {
    default:
    case VAR19:
        VAR9 = FUN4(VAR2, &VAR13, VAR10, sizeof(VAR10));
        break;
    case VAR20:
    case VAR21:
        VAR9 = FUN5(VAR2, &VAR13, VAR10, sizeof(VAR10));
        if (VAR9 >= 0 && VAR13->VAR22 && VAR6->VAR15 == VAR23)
            FUN6(VAR13->VAR22, VAR9);
        break;
    }
    if (VAR9 < 0)
        return VAR9;
    if (VAR9 == 0)
        return VAR24;
    if (VAR6->VAR15 == VAR16)
    {
        VAR8 = FUN2(VAR13->VAR22, VAR4, VAR10, VAR9);
    }
    else
        VAR8 = FUN3(VAR13->VAR22, VAR4, VAR10, VAR9);
    if (VAR8 < 0)
        goto VAR17;
    if (VAR8 == 1)
        VAR6->VAR14 = VAR13->VAR22;
    return VAR8;
}