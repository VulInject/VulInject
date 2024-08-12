static int FUN1(VAR1 *VAR2)
{
    int VAR3 = VAR2->VAR4;
    char VAR5[8 + 8 + 8 + 128];
    int VAR6;
    const int VAR7 = (VAR8 | VAR9 | VAR10 | VAR11);
    FUN2(VAR3);
    VAR6 = -VAR12;
    FUN3("");
    memcpy(VAR5, "", 8);
    if (VAR2->VAR13)
    {
        assert((VAR2->VAR13->VAR14 & ~65535) == 0);
        FUN4((VAR15 *)(VAR5 + 8), VAR16);
        FUN4((VAR15 *)(VAR5 + 16), VAR2->VAR13->VAR17);
        FUN5((VAR18 *)(VAR5 + 26), VAR2->VAR13->VAR14 | VAR7);
    }
    else
    {
        FUN4((VAR15 *)(VAR5 + 8), VAR19);
    }
    memset(VAR5 + 28, 0, 124);
    if (VAR2->VAR13)
    {
        if (FUN6(VAR3, VAR5, sizeof(VAR5)) != sizeof(VAR5))
        {
            FUN7("");
            goto VAR20;
        }
    }
    else
    {
        if (FUN6(VAR3, VAR5, 18) != 18)
        {
            FUN7("");
            goto VAR20;
        }
        VAR6 = FUN8(VAR2);
        if (VAR6 < 0)
        {
            FUN7("");
            goto VAR20;
        }
        assert((VAR2->VAR13->VAR14 & ~65535) == 0);
        FUN4((VAR15 *)(VAR5 + 18), VAR2->VAR13->VAR17);
        FUN5((VAR18 *)(VAR5 + 26), VAR2->VAR13->VAR14 | VAR7);
        if (FUN6(VAR3, VAR5 + 18, sizeof(VAR5) - 18) != sizeof(VAR5) - 18)
        {
            FUN7("");
            goto VAR20;
        }
    }
    FUN3("");
    VAR6 = 0;
VAR20:
    FUN9(VAR3);
    return VAR6;
}