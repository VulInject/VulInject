static int FUN1(VAR1 *VAR2, VAR1 *VAR3, VAR4 *VAR5, int VAR6, VAR7 *VAR8)
{
    int VAR9, VAR10;
    const char *VAR11;
    assert(VAR8 != NULL);
    assert(VAR2->VAR3 == NULL);
    assert(VAR5 != NULL && VAR2->VAR5 != VAR5);
    FUN2(VAR2, VAR11, VAR6, VAR8->VAR12);
    if (VAR13 && !FUN3(VAR8))
    {
        return -VAR14;
    }
    if (VAR3 != NULL && VAR8->VAR15)
    {
        FUN4(VAR3, VAR2);
        return 0;
    }
    VAR2->VAR10 = VAR6;
    VAR2->VAR16 = 512;
    assert(VAR2->VAR17 == 0);
    if ((VAR6 & VAR18) && (VAR6 & VAR19))
    {
        FUN5(VAR2);
    }
    if (VAR3 != NULL)
    {
        VAR11 = VAR3->VAR11;
    }
    else
    {
        VAR11 = FUN6(VAR5, "");
    }
    if (VAR11 != NULL)
    {
        FUN7(VAR2->VAR11, sizeof(VAR2->VAR11), VAR11);
    }
    else
    {
        VAR2->VAR11[0] = '';
    }
    VAR2->VAR8 = VAR8;
    VAR2->VAR20 = FUN8(VAR8->VAR21);
    VAR2->VAR22 = !!(VAR6 & VAR23);
    VAR10 = FUN9(VAR2, VAR6);
    VAR2->VAR24 = !(VAR10 & VAR18);
    if (VAR8->VAR15)
    {
        assert(VAR3 == NULL);
        assert(VAR8->VAR25 || VAR11 != NULL);
        VAR9 = VAR8->FUN10(VAR2, VAR5, VAR10);
    }
    else
    {
        if (VAR3 == NULL)
        {
            FUN11(VAR26, ""
                                                     "",
                          VAR8->VAR12);
            VAR9 = -VAR27;
            goto VAR28;
        }
        assert(VAR3 != NULL);
        VAR2->VAR3 = VAR3;
        VAR9 = VAR8->FUN12(VAR2, VAR5, VAR10);
    }
    if (VAR9 < 0)
    {
        goto VAR28;
    }
    VAR9 = FUN13(VAR2, VAR2->VAR29);
    if (VAR9 < 0)
    {
        goto VAR28;
    }
    if (VAR2->VAR30)
    {
        assert(VAR11 != NULL);
        unlink(VAR11);
    }
    return 0;
VAR28:
    VAR2->VAR3 = NULL;
    FUN14(VAR2->VAR20);
    VAR2->VAR20 = NULL;
    VAR2->VAR8 = NULL;
    return VAR9;
}