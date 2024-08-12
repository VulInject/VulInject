static VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5)
{
    VAR6 *VAR7 = FUN2(VAR6, VAR3, VAR3);
    if (VAR3->VAR8 != 0)
    {
        FUN3(VAR3, FUN4(VAR9));
        FUN5(VAR3, VAR10);
        return 0;
    }
    switch (VAR5[0])
    {
    case VAR11:
        if (!FUN6(VAR7))
        {
            goto VAR12;
        }
        break;
    case VAR13:
        if (!FUN7(VAR7))
        {
            goto VAR12;
        }
        break;
    case VAR14:
        FUN8(&VAR7->VAR3, FUN9(VAR3));
        VAR7->VAR15 = FUN10(VAR7->VAR3.VAR16, VAR7->VAR5, FUN11(VAR3->VAR17.VAR18, VAR7->VAR19), (VAR3->VAR17.VAR5[1] & 1) == 0);
        if (VAR7->VAR3.VAR16->VAR20)
        {
            FUN12(VAR3->VAR16);
            VAR7->VAR3.VAR16->VAR21 = 0;
            VAR7->VAR3.VAR16->VAR20 = false;
        }
        break;
    case VAR22:
        break;
    default:
        FUN3(VAR3, FUN4(VAR23));
        FUN5(VAR3, VAR10);
        return 0;
    VAR12:
        FUN3(VAR3, FUN4(VAR24));
        FUN5(VAR3, VAR10);
        return 0;
    }
    if (!VAR7->VAR15)
    {
        FUN5(VAR3, VAR25);
    }
    return VAR7->VAR15;
}