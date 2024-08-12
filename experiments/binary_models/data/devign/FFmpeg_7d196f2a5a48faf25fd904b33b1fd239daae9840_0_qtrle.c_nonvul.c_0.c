static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    int VAR10, VAR11;
    int VAR12, VAR13;
    int VAR14 = 0;
    int VAR15;
    FUN2(&VAR8->VAR16, VAR6->VAR3, VAR6->VAR17);
    if ((VAR15 = FUN3(VAR2, VAR8->VAR18)) < 0)
        return VAR15;
    if (VAR6->VAR17 < 8)
        goto VAR19;
    FUN4(&VAR8->VAR16, 4, VAR20);
    VAR10 = FUN5(&VAR8->VAR16);
    if (VAR10 & 0x0008)
    {
        if (VAR6->VAR17 < 14)
            goto VAR19;
        VAR11 = FUN5(&VAR8->VAR16);
        FUN6(&VAR8->VAR16, 2);
        VAR12 = FUN5(&VAR8->VAR16);
        FUN6(&VAR8->VAR16, 2);
        if (VAR12 > VAR8->VAR2->VAR12 - VAR11)
            goto VAR19;
    }
    else
    {
        VAR11 = 0;
        VAR12 = VAR8->VAR2->VAR12;
    }
    VAR13 = VAR8->VAR18->VAR21[0] * VAR11;
    switch (VAR2->VAR22)
    {
    case 1:
    case 33:
        FUN7(VAR8, VAR13, VAR12);
        VAR14 = 1;
        break;
    case 2:
    case 34:
        FUN8(VAR8, VAR13, VAR12, 2);
        VAR14 = 1;
        break;
    case 4:
    case 36:
        FUN8(VAR8, VAR13, VAR12, 4);
        VAR14 = 1;
        break;
    case 8:
    case 40:
        FUN9(VAR8, VAR13, VAR12);
        VAR14 = 1;
        break;
    case 16:
        FUN10(VAR8, VAR13, VAR12);
        break;
    case 24:
        FUN11(VAR8, VAR13, VAR12);
        break;
    case 32:
        FUN12(VAR8, VAR13, VAR12);
        break;
    default:
        FUN13(VAR8->VAR2, VAR23, "", VAR2->VAR22);
        break;
    }
    if (VAR14)
    {
        int VAR17;
        const VAR24 *VAR25 = FUN14(VAR6, VAR26, &VAR17);
        if (VAR25 && VAR17 == VAR27)
        {
            VAR8->VAR18->VAR28 = 1;
            memcpy(VAR8->VAR25, VAR25, VAR27);
        }
        else if (VAR25)
        {
            FUN13(VAR2, VAR23, "", VAR17);
        }
        memcpy(VAR8->VAR18->VAR3[1], VAR8->VAR25, VAR27);
    }
VAR19:
    if ((VAR15 = FUN15(VAR3, VAR8->VAR18)) < 0)
        return VAR15;
    *VAR4 = 1;
    return VAR6->VAR17;
}