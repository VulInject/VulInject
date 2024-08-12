static int FUN1(struct VAR1 *VAR2)
{
    struct ip_mreq VAR3;
    int VAR4;
    int VAR5, VAR6;
    if (!FUN2(FUN3(VAR2->VAR7.VAR8)))
    {
        fprintf(VAR9, ""%VAR10\"", FUN4(VAR2->VAR7), (int)FUN3(VAR2->VAR7.VAR8));
        return -1;
    }
    VAR4 = socket(VAR11, VAR12, 0);
    if (VAR4 < 0)
    {
        FUN5("");
        return -1;
    }
    VAR5 = 1;
    VAR6 = FUN6(VAR4, VAR13, VAR14, (const char *)&VAR5, sizeof(VAR5));
    if (VAR6 < 0)
    {
        FUN5("");
        goto VAR15;
    }
    VAR6 = FUN7(VAR4, (struct VAR16 *)VAR2, sizeof(*VAR2));
    if (VAR6 < 0)
    {
        FUN5("");
        goto VAR15;
    }
    VAR3.VAR17 = VAR2->VAR7;
    VAR3.VAR18.VAR8 = FUN8(VAR19);
    VAR6 = FUN6(VAR4, VAR20, VAR21, (const char *)&VAR3, sizeof(struct VAR22));
    if (VAR6 < 0)
    {
        FUN5("");
        goto VAR15;
    }
    VAR5 = 1;
    VAR6 = FUN6(VAR4, VAR20, VAR23, (const char *)&VAR5, sizeof(VAR5));
    if (VAR6 < 0)
    {
        FUN5("");
        goto VAR15;
    }
    FUN9(VAR4);
    return VAR4;
VAR15:
    if (VAR4 >= 0)
        FUN10(VAR4);
    return -1;
}