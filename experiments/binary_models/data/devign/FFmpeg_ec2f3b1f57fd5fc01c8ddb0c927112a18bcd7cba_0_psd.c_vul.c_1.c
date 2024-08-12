static int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4, VAR5, VAR6;
    int64_t VAR7;
    int VAR8 = 0;
    if (FUN2(&VAR2->VAR9) < 30)
    {
        FUN3(VAR2->VAR10, VAR11, "");
        return VAR12;
    }
    VAR3 = FUN4(&VAR2->VAR9);
    if (VAR3 != FUN5('', '', '', ''))
    {
        FUN3(VAR2->VAR10, VAR11, "", VAR3);
        return VAR12;
    }
    VAR4 = FUN6(&VAR2->VAR9);
    if (VAR4 != 1)
    {
        FUN3(VAR2->VAR10, VAR11, "", VAR4);
        return VAR12;
    }
    FUN7(&VAR2->VAR9, 6);
    VAR2->VAR13 = FUN6(&VAR2->VAR9);
    if ((VAR2->VAR13 < 1) || (VAR2->VAR13 > 56))
    {
        FUN3(VAR2->VAR10, VAR11, "", VAR2->VAR13);
        return VAR12;
    }
    VAR2->VAR14 = FUN8(&VAR2->VAR9);
    if ((VAR2->VAR14 > 30000) && (VAR2->VAR10->VAR15 > VAR16))
    {
        FUN3(VAR2->VAR10, VAR11, ""
                                       "",
               VAR16);
        return VAR17;
    }
    VAR2->VAR18 = FUN8(&VAR2->VAR9);
    if ((VAR2->VAR18 > 30000) && (VAR2->VAR10->VAR15 > VAR16))
    {
        FUN3(VAR2->VAR10, VAR11, ""
                                       "",
               VAR16);
        return VAR17;
    }
    if ((VAR8 = FUN9(VAR2->VAR10, VAR2->VAR18, VAR2->VAR14)) < 0)
        return VAR8;
    VAR2->VAR19 = FUN6(&VAR2->VAR9);
    VAR5 = FUN6(&VAR2->VAR9);
    switch (VAR5)
    {
    case 0:
        VAR2->VAR5 = VAR20;
        break;
    case 1:
        VAR2->VAR5 = VAR21;
        break;
    case 2:
        VAR2->VAR5 = VAR22;
        break;
    case 3:
        VAR2->VAR5 = VAR23;
        break;
    case 4:
        VAR2->VAR5 = VAR24;
        break;
    case 7:
        VAR2->VAR5 = VAR25;
        break;
    case 8:
        VAR2->VAR5 = VAR26;
        break;
    case 9:
        VAR2->VAR5 = VAR27;
        break;
    default:
        FUN3(VAR2->VAR10, VAR11, "", VAR5);
        return VAR12;
    }
    VAR7 = FUN8(&VAR2->VAR9);
    if (VAR7 < 0)
    {
        FUN3(VAR2->VAR10, VAR11, "");
        return VAR12;
    }
    if (FUN2(&VAR2->VAR9) < (VAR7 + 4))
    {
        FUN3(VAR2->VAR10, VAR11, "");
        return VAR12;
    }
    FUN7(&VAR2->VAR9, VAR7);
    VAR7 = FUN8(&VAR2->VAR9);
    if (VAR7 < 0)
    {
        FUN3(VAR2->VAR10, VAR11, "");
        return VAR12;
    }
    if (FUN2(&VAR2->VAR9) < (VAR7 + 4))
    {
        FUN3(VAR2->VAR10, VAR11, "");
        return VAR12;
    }
    FUN7(&VAR2->VAR9, VAR7);
    VAR7 = FUN8(&VAR2->VAR9);
    if (VAR7 < 0)
    {
        FUN3(VAR2->VAR10, VAR11, "");
        return VAR12;
    }
    if (FUN2(&VAR2->VAR9) < VAR7)
    {
        FUN3(VAR2->VAR10, VAR11, "");
        return VAR12;
    }
    FUN7(&VAR2->VAR9, VAR7);
    if (FUN2(&VAR2->VAR9) < 2)
    {
        FUN3(VAR2->VAR10, VAR11, "");
        return VAR12;
    }
    VAR2->VAR6 = FUN6(&VAR2->VAR9);
    switch (VAR2->VAR6)
    {
    case 0:
    case 1:
        break;
    case 2:
        FUN10(VAR2->VAR10, "");
        return VAR28;
        break;
    case 3:
        FUN10(VAR2->VAR10, "");
        return VAR28;
        break;
    default:
        FUN3(VAR2->VAR10, VAR11, "", VAR6);
        return VAR12;
    }
    return VAR8;
}