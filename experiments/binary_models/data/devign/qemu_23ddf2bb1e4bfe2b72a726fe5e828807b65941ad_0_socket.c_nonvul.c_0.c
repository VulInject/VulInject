static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
    struct ip_mreq VAR5;
    int VAR6;
    int VAR7, VAR8;
    unsigned char VAR9;
    int VAR9;
    if (!FUN2(FUN3(VAR2->VAR10.VAR11)))
    {
        fprintf(VAR12, ""%VAR13\"", FUN4(VAR2->VAR10), (int)FUN3(VAR2->VAR10.VAR11));
        return -1;
    }
    VAR6 = FUN5(VAR14, VAR15, 0);
    if (VAR6 < 0)
    {
        FUN6("");
        return -1;
    }
    VAR7 = 1;
    VAR8 = FUN7(VAR6, VAR16, VAR17, (const char *)&VAR7, sizeof(VAR7));
    if (VAR8 < 0)
    {
        FUN6("");
        goto VAR18;
    }
    VAR8 = FUN8(VAR6, (struct VAR19 *)VAR2, sizeof(*VAR2));
    if (VAR8 < 0)
    {
        FUN6("");
        goto VAR18;
    }
    VAR5.VAR20 = VAR2->VAR10;
    if (VAR4)
    {
        VAR5.VAR21 = *VAR4;
    }
    else
    {
        VAR5.VAR21.VAR11 = FUN9(VAR22);
    }
    VAR8 = FUN7(VAR6, VAR23, VAR24, (const char *)&VAR5, sizeof(struct VAR25));
    if (VAR8 < 0)
    {
        FUN6("");
        goto VAR18;
    }
    VAR9 = 1;
    VAR8 = FUN7(VAR6, VAR23, VAR26, (const char *)&VAR9, sizeof(VAR9));
    if (VAR8 < 0)
    {
        FUN6("");
        goto VAR18;
    }
    if (VAR4 != NULL)
    {
        VAR8 = FUN7(VAR6, VAR23, VAR27, (const char *)VAR4, sizeof(*VAR4));
        if (VAR8 < 0)
        {
            FUN6("");
            goto VAR18;
        }
    }
    FUN10(VAR6);
    return VAR6;
VAR18:
    if (VAR6 >= 0)
        FUN11(VAR6);
    return -1;
}