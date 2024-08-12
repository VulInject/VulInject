VAR1 FUN1(VAR2 **VAR3)
{
    int VAR4 = 0, VAR5 = 0;
    FsMountList VAR6;
    struct VAR7 *VAR8;
    VAR2 *VAR9 = NULL;
    int VAR10;
    FUN2("");
    FUN3(VAR11, &VAR9);
    if (FUN4(&VAR9))
    {
        FUN5(VAR3, VAR9);
        return -1;
    }
    FUN6(&VAR6);
    FUN7(&VAR6, &VAR9);
    if (FUN4(&VAR9))
    {
        FUN5(VAR3, VAR9);
        return -1;
    }
    FUN8(VAR12);
    FUN9(VAR8, &VAR6, VAR13)
    {
        VAR10 = FUN10(VAR8->VAR14, VAR15);
        if (VAR10 == -1)
        {
            FUN11(VAR3, VAR16, "", VAR8->VAR14);
            goto VAR17;
        }
        VAR4 = FUN12(VAR10, VAR18);
        if (VAR4 == -1)
        {
            if (VAR16 != VAR19)
            {
                FUN11(VAR3, VAR16, "", VAR8->VAR14);
                close(VAR10);
                goto VAR17;
            }
        }
        else
        {
            VAR5++;
        }
        close(VAR10);
    }
    FUN13(&VAR6);
    return VAR5;
VAR17:
    FUN13(&VAR6);
    FUN14(NULL);
    return 0;
}