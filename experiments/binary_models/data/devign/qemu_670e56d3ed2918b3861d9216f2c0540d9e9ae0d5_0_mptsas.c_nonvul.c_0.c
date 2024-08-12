static int FUN1(VAR1 *VAR2, VAR3 *VAR4, hwaddr VAR5)
{
    VAR6 *VAR7;
    MPIMsgSCSIIOReply VAR8;
    VAR9 *VAR10;
    int VAR11;
    FUN2(VAR4);
    FUN3(VAR2, VAR4->VAR12, VAR4->VAR13, VAR4->VAR14[1], VAR4->VAR15);
    VAR11 = FUN4(VAR2, VAR4->VAR12, VAR4->VAR13, VAR4->VAR14, &VAR10);
    if (VAR11)
    {
        goto VAR16;
    }
    VAR7 = FUN5(VAR6, 1);
    FUN6(&VAR2->VAR17, VAR7, VAR18);
    VAR7->VAR4 = *VAR4;
    VAR7->VAR19 = VAR2;
    VAR11 = FUN7(VAR2, VAR7, VAR5);
    if (VAR11)
    {
        goto VAR20;
    }
    if (VAR7->VAR21.VAR22 < VAR4->VAR15)
    {
        FUN8(VAR2, VAR4->VAR23, VAR4->VAR15, VAR7->VAR21.VAR22);
        VAR11 = VAR24;
        goto VAR20;
    }
    VAR7->VAR25 = FUN9(VAR10, VAR4->VAR23, VAR4->VAR14[1], VAR4->VAR26, VAR7);
    if (VAR7->VAR25->VAR27.VAR28 > VAR4->VAR15)
    {
        goto VAR29;
    }
    switch (VAR4->VAR30 & VAR31)
    {
    case VAR32:
        if (VAR7->VAR25->VAR27.VAR33 != VAR34)
        {
            goto VAR29;
        }
        break;
    case VAR35:
        if (VAR7->VAR25->VAR27.VAR33 != VAR36)
        {
            goto VAR29;
        }
        break;
    case VAR37:
        if (VAR7->VAR25->VAR27.VAR33 != VAR38)
        {
            goto VAR29;
        }
        break;
    }
    if (FUN10(VAR7->VAR25))
    {
        FUN11(VAR7->VAR25);
    }
    return 0;
VAR29:
    FUN12(VAR2, VAR4->VAR23, VAR7->VAR25->VAR27.VAR28, VAR4->VAR15);
    VAR11 = VAR39;
VAR20:
    FUN13(VAR7);
VAR16:
    memset(&VAR8, 0, sizeof(VAR8));
    VAR8.VAR13 = VAR4->VAR13;
    VAR8.VAR12 = VAR4->VAR12;
    VAR8.VAR40 = sizeof(VAR8) / 4;
    VAR8.VAR41 = VAR4->VAR41;
    VAR8.VAR42 = VAR4->VAR42;
    VAR8.VAR43 = VAR4->VAR43;
    VAR8.VAR23 = VAR4->VAR23;
    VAR8.VAR44 = VAR45;
    VAR8.VAR46 = VAR11;
    FUN14(&VAR8);
    FUN15(VAR2, (VAR47 *)&VAR8);
    return 0;
}