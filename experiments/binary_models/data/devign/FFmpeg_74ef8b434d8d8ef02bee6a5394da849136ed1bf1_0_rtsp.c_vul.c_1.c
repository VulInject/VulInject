static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9;
    int VAR10, VAR11;
    uint8_t VAR12[VAR13];
    if (VAR6->VAR14)
    {
        VAR10 = FUN2(VAR6->VAR14, VAR4, NULL, 0);
        if (VAR10 == 0)
        {
            VAR6->VAR14 = NULL;
            return 0;
        }
        else if (VAR10 == 1)
        {
            return 0;
        }
        else
        {
            VAR6->VAR14 = NULL;
        }
    }
VAR15:
    switch (VAR6->VAR16)
    {
    default:
    case VAR17:
        VAR11 = FUN3(VAR2, &VAR9, VAR12, sizeof(VAR12));
        break;
    case VAR18:
    case VAR19:
        VAR11 = FUN4(VAR2, &VAR9, VAR12, sizeof(VAR12));
        if (VAR9->VAR20)
            FUN5(VAR9->VAR20, VAR11);
        break;
    }
    if (VAR11 < 0)
        return VAR21;
    VAR10 = FUN2(VAR9->VAR20, VAR4, VAR12, VAR11);
    if (VAR10 < 0)
        goto VAR15;
    if (VAR10 == 1)
    {
        VAR6->VAR14 = VAR9->VAR20;
    }
    return 0;
}