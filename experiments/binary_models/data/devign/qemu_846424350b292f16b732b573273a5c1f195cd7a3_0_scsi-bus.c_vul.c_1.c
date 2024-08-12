static VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5)
{
    VAR6 *VAR7 = FUN2(VAR6, VAR3, VAR3);
    switch (VAR5[0])
    {
    case VAR8:
        if (!FUN3(VAR7))
        {
            goto VAR9;
        }
        break;
    case VAR10:
        if (!FUN4(VAR7))
        {
            goto VAR9;
        }
        break;
    case VAR11:
        VAR7->VAR12 = FUN5(VAR7->VAR3.VAR13, VAR7->VAR5, FUN6(VAR3->VAR14.VAR15, sizeof VAR7->VAR5), (VAR3->VAR14.VAR5[1] & 1) == 0);
        if (VAR7->VAR3.VAR13->VAR16)
        {
            FUN7(VAR3->VAR13);
            VAR7->VAR3.VAR13->VAR17 = 0;
            VAR7->VAR3.VAR13->VAR16 = false;
        }
        break;
    default:
        FUN8(VAR3, FUN9(VAR18));
        FUN10(VAR3, VAR19);
        return 0;
    VAR9:
        FUN8(VAR3, FUN9(VAR20));
        FUN10(VAR3, VAR19);
        return 0;
    }
    if (!VAR7->VAR12)
    {
        FUN10(VAR3, VAR21);
    }
    return VAR7->VAR12;
}