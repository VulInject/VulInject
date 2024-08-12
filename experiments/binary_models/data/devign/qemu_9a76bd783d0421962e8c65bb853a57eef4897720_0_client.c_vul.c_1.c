static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 **VAR6)
{
    char *VAR7 = NULL;
    int VAR8 = -1;
    if (!(VAR4->VAR9 & (1 << 31)))
    {
        return 1;
    }
    if (VAR4->VAR10)
    {
        if (VAR4->VAR10 > VAR11)
        {
            FUN2(VAR6, "" VAR12 "", VAR4->VAR9, FUN3(VAR4->VAR9));
            goto VAR13;
        }
        VAR7 = FUN4(VAR4->VAR10 + 1);
        if (FUN5(VAR2, VAR7, VAR4->VAR10, VAR6) < 0)
        {
            FUN6(VAR6, "" VAR12 "", VAR4->VAR9, FUN3(VAR4->VAR9));
            goto VAR13;
        }
        VAR7[VAR4->VAR10] = '';
    }
    switch (VAR4->VAR9)
    {
    case VAR14:
        FUN7(VAR4->VAR15, FUN8(VAR4->VAR15));
        VAR8 = 0;
        goto VAR13;
    case VAR16:
        FUN2(VAR6, "" VAR12 "", VAR4->VAR15, FUN8(VAR4->VAR15));
        break;
    case VAR17:
        FUN2(VAR6, "" VAR12 "", VAR4->VAR15, FUN8(VAR4->VAR15));
        break;
    case VAR18:
        FUN2(VAR6, "" VAR12 "", VAR4->VAR15, FUN8(VAR4->VAR15));
        break;
    case VAR19:
        FUN2(VAR6, "" VAR12 "", VAR4->VAR15, FUN8(VAR4->VAR15));
        break;
    case VAR20:
        FUN2(VAR6, "" VAR12 "", VAR4->VAR15, FUN8(VAR4->VAR15));
        break;
    case VAR21:
        FUN2(VAR6, "" VAR12 "", VAR4->VAR15, FUN8(VAR4->VAR15));
        break;
    case VAR22:
        FUN2(VAR6, "" VAR12 "", VAR4->VAR15, FUN8(VAR4->VAR15));
        break;
    default:
        FUN2(VAR6, "" VAR12 "", VAR4->VAR15, FUN8(VAR4->VAR15));
        break;
    }
    if (VAR7)
    {
        FUN9(VAR6, "", VAR7);
    }
VAR13:
    FUN10(VAR7);
    if (VAR8 < 0)
    {
        FUN11(VAR2);
    }
    return VAR8;
}