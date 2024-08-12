static int FUN1(VAR1 *VAR2, VAR3 *VAR4, struct VAR5 *VAR6)
{
    int VAR7;
    char VAR8[VAR9];
    char *VAR10 = VAR4->VAR11;
    VAR7 = FUN2(FUN3(VAR2, VAR10, VAR8), VAR6);
    if (VAR7)
    {
        return VAR7;
    }
    if (VAR2->VAR12 & VAR13)
    {
        uid_t VAR14;
        gid_t VAR15;
        mode_t VAR16;
        dev_t VAR17;
        if (FUN4(FUN3(VAR2, VAR10, VAR8), "", &VAR14, sizeof(VAR18)) > 0)
        {
            VAR6->VAR19 = VAR14;
        }
        if (FUN4(FUN3(VAR2, VAR10, VAR8), "", &VAR15, sizeof(VAR20)) > 0)
        {
            VAR6->VAR21 = VAR15;
        }
        if (FUN4(FUN3(VAR2, VAR10, VAR8), "", &VAR16, sizeof(VAR22)) > 0)
        {
            VAR6->VAR23 = VAR16;
        }
        if (FUN4(FUN3(VAR2, VAR10, VAR8), "", &VAR17, sizeof(VAR24)) > 0)
        {
            VAR6->VAR25 = VAR17;
        }
    }
    return VAR7;
}