static int FUN1(VAR1 *VAR2, VAR3 *VAR4, void *VAR5, VAR6 **VAR7)
{
    struct sockaddr_un VAR8;
    VAR9 *VAR10 = NULL;
    int VAR11, VAR12;
    if (VAR2->VAR13 == NULL)
    {
        FUN2(VAR7, "");
        return -1;
    }
    VAR11 = FUN3(VAR14, VAR15, 0);
    if (VAR11 < 0)
    {
        FUN4(VAR7, VAR16, "");
        return -1;
    }
    if (VAR4 != NULL)
    {
        VAR10 = FUN5(sizeof(*VAR10));
        VAR10->VAR4 = VAR4;
        VAR10->VAR5 = VAR5;
        FUN6(VAR11);
    }
    if (strlen(VAR2->VAR13) > sizeof(VAR8.VAR17))
    {
        FUN2(VAR7, "", VAR2->VAR13);
        FUN7(VAR7, "", sizeof(VAR8.VAR17));
        goto VAR18;
    }
    memset(&VAR8, 0, sizeof(VAR8));
    VAR8.VAR19 = VAR20;
    strncpy(VAR8.VAR17, VAR2->VAR13, sizeof(VAR8.VAR17));
    do
    {
        VAR12 = 0;
        if (connect(VAR11, (struct VAR21 *)&VAR8, sizeof(VAR8)) < 0)
        {
            VAR12 = -VAR16;
        }
    } while (VAR12 == -VAR22);
    if (VAR10 != NULL && FUN8(VAR12))
    {
        VAR10->VAR23 = VAR11;
        FUN9(VAR11, NULL, VAR24, VAR10);
        return VAR11;
    }
    else if (VAR12 >= 0)
    {
        if (VAR4 != NULL)
        {
            FUN10(VAR11, NULL, VAR5);
        }
    }
    if (VAR12 < 0)
    {
        FUN4(VAR7, -VAR12, "", VAR2->VAR13);
        goto VAR18;
    }
    FUN11(VAR10);
    return VAR11;
VAR18:
    close(VAR11);
    FUN11(VAR10);
    return -1;
}