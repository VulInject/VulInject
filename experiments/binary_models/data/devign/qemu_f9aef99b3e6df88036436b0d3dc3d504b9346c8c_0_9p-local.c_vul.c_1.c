static int FUN1(VAR1 *VAR2, VAR3 *VAR4, struct VAR5 *VAR6)
{
    int VAR7;
    char *VAR8;
    char *VAR9 = VAR4->VAR10;
    VAR8 = FUN2(VAR2, VAR9);
    VAR7 = FUN3(VAR8, VAR6);
    if (VAR7)
    {
        goto VAR11;
    }
    if (VAR2->VAR12 & VAR13)
    {
        uid_t VAR14;
        gid_t VAR15;
        mode_t VAR16;
        dev_t VAR17;
        if (FUN4(VAR8, "", &VAR14, sizeof(VAR18)) > 0)
        {
            VAR6->VAR19 = FUN5(VAR14);
        }
        if (FUN4(VAR8, "", &VAR15, sizeof(VAR20)) > 0)
        {
            VAR6->VAR21 = FUN5(VAR15);
        }
        if (FUN4(VAR8, "", &VAR16, sizeof(VAR22)) > 0)
        {
            VAR6->VAR23 = FUN5(VAR16);
        }
        if (FUN4(VAR8, "", &VAR17, sizeof(VAR24)) > 0)
        {
            VAR6->VAR25 = FUN6(VAR17);
        }
    }
    else if (VAR2->VAR12 & VAR26)
    {
        FUN7(VAR2, VAR9, VAR6);
    }
VAR11:
    FUN8(VAR8);
    return VAR7;
}