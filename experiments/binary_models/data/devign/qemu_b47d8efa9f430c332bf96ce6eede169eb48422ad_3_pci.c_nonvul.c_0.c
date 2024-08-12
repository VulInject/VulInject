static VAR1 *FUN1(int VAR2, VAR3 *VAR4)
{
    VAR1 *VAR5;
    char VAR6[32];
    struct vfio_group_status VAR7 = {.VAR8 = sizeof(VAR7)};
    FUN2(VAR5, &VAR9, VAR10)
    {
        if (VAR5->VAR2 == VAR2)
        {
            if (VAR5->VAR11->VAR12->VAR4 == VAR4)
            {
                return VAR5;
            }
            else
            {
                FUN3("", VAR5->VAR2);
                return NULL;
            }
        }
    }
    VAR5 = FUN4(sizeof(*VAR5));
    snprintf(VAR6, sizeof(VAR6), "", VAR2);
    VAR5->VAR13 = FUN5(VAR6, VAR14);
    if (VAR5->VAR13 < 0)
    {
        FUN3("", VAR6);
        goto VAR15;
    }
    if (FUN6(VAR5->VAR13, VAR16, &VAR7))
    {
        FUN3("");
        goto VAR17;
    }
    if (!(VAR7.VAR18 & VAR19))
    {
        FUN3(""
                     ""
                     "",
                     VAR2);
        goto VAR17;
    }
    VAR5->VAR2 = VAR2;
    FUN7(&VAR5->VAR20);
    if (FUN8(VAR5, VAR4))
    {
        FUN3("", VAR2);
        goto VAR17;
    }
    if (FUN9(&VAR9))
    {
        FUN10(VAR21, NULL);
    }
    FUN11(&VAR9, VAR5, VAR10);
    FUN12(VAR5);
    return VAR5;
VAR17:
    close(VAR5->VAR13);
VAR15:
    FUN13(VAR5);
    return NULL;
}