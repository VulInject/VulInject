static int FUN1(VAR1 *VAR2, int VAR3, VAR4 *VAR5, struct VAR6 *VAR7)
{
    int VAR8, VAR9;
    if (VAR3 == VAR10)
    {
        VAR9 = FUN2(VAR5->VAR11);
    }
    else
    {
        VAR9 = VAR5->VAR9;
    }
    VAR8 = FUN3(VAR9, VAR7);
    if (VAR8)
    {
        return VAR8;
    }
    if (VAR2->VAR12 & VAR13)
    {
        uid_t VAR14;
        gid_t VAR15;
        mode_t VAR16;
        dev_t VAR17;
        if (FUN4(VAR9, "", &VAR14, sizeof(VAR18)) > 0)
        {
            VAR7->VAR19 = FUN5(VAR14);
        }
        if (FUN4(VAR9, "", &VAR15, sizeof(VAR20)) > 0)
        {
            VAR7->VAR21 = FUN5(VAR15);
        }
        if (FUN4(VAR9, "", &VAR16, sizeof(VAR22)) > 0)
        {
            VAR7->VAR23 = FUN5(VAR16);
        }
        if (FUN4(VAR9, "", &VAR17, sizeof(VAR24)) > 0)
        {
            VAR7->VAR25 = FUN6(VAR17);
        }
    }
    else if (VAR2->VAR12 & VAR26)
    {
        VAR27 = VAR28;
        return -1;
    }
    return VAR8;
}