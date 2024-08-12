static int FUN1(VAR1 *VAR2, int VAR3, struct VAR4 *VAR5)
{
    int VAR6;
    VAR6 = FUN2(VAR3, VAR5);
    if (VAR6)
    {
        return VAR6;
    }
    if (VAR2->VAR7 & VAR8)
    {
        uid_t VAR9;
        gid_t VAR10;
        mode_t VAR11;
        dev_t VAR12;
        if (FUN3(VAR3, "", &VAR9, sizeof(VAR13)) > 0)
        {
            VAR5->VAR14 = VAR9;
        }
        if (FUN3(VAR3, "", &VAR10, sizeof(VAR15)) > 0)
        {
            VAR5->VAR16 = VAR10;
        }
        if (FUN3(VAR3, "", &VAR11, sizeof(VAR17)) > 0)
        {
            VAR5->VAR18 = VAR11;
        }
        if (FUN3(VAR3, "", &VAR12, sizeof(VAR19)) > 0)
        {
            VAR5->VAR20 = VAR12;
        }
    }
    return VAR6;
}