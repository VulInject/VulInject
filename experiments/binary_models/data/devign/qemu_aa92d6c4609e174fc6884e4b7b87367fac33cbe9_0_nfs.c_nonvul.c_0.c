static VAR1 FUN1(VAR2 *VAR3)
{
    VAR4 *VAR5 = VAR3->VAR6;
    NFSRPC VAR7 = {0};
    struct stat VAR8;
    if (FUN2(VAR3) && !(VAR3->VAR9 & VAR10))
    {
        return VAR5->VAR11 * 512;
    }
    VAR7.VAR8 = &VAR8;
    if (FUN3(VAR5->VAR12, VAR5->VAR13, VAR14, &VAR7) != 0)
    {
        return -VAR15;
    }
    FUN4(VAR5);
    while (!VAR7.VAR16)
    {
        FUN5(VAR5->VAR17, true);
    }
    return (VAR7.VAR18 < 0 ? VAR7.VAR18 : VAR8.VAR11 * 512);
}