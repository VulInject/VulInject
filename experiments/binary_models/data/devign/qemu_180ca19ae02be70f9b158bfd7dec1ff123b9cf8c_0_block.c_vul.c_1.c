static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const char *VAR5, VAR6 *VAR7, int VAR8, VAR9 **VAR10)
{
    VAR9 *VAR11 = NULL;
    int VAR12;
    FUN2(VAR2, VAR5, &VAR11);
    if (VAR11)
    {
        FUN3(VAR10, VAR11);
        return -VAR13;
    }
    VAR2->VAR4 = VAR4;
    VAR2->VAR14 = !(VAR2->VAR8 & VAR15);
    VAR2->VAR16 = FUN4(VAR4->VAR17);
    if (VAR4->VAR18)
    {
        assert(!VAR4->VAR19 || VAR2->VAR20[0]);
        VAR12 = VAR4->FUN5(VAR2, VAR7, VAR8, &VAR11);
    }
    else if (VAR4->VAR21)
    {
        VAR12 = VAR4->FUN6(VAR2, VAR7, VAR8, &VAR11);
    }
    else
    {
        VAR12 = 0;
    }
    if (VAR12 < 0)
    {
        if (VAR11)
        {
            FUN3(VAR10, VAR11);
        }
        else if (VAR2->VAR20[0])
        {
            FUN7(VAR10, -VAR12, "", VAR2->VAR20);
        }
        else
        {
            FUN7(VAR10, -VAR12, "");
        }
        goto VAR22;
    }
    VAR12 = FUN8(VAR2, VAR2->VAR23);
    if (VAR12 < 0)
    {
        FUN7(VAR10, -VAR12, "");
        goto VAR22;
    }
    FUN9(VAR2, &VAR11);
    if (VAR11)
    {
        FUN3(VAR10, VAR11);
        VAR12 = -VAR13;
        goto VAR22;
    }
    assert(FUN10(VAR2) != 0);
    assert(FUN11(VAR2) != 0);
    assert(FUN12(VAR2->VAR24.VAR25));
    return 0;
VAR22:
    FUN13(VAR2->VAR16);
    VAR2->VAR16 = NULL;
    VAR2->VAR4 = NULL;
    return VAR12;
}