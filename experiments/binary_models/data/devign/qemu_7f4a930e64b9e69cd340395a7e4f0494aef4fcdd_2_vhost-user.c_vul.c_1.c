static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
    VhostUserMsg VAR5 = {
        .VAR6 = VAR7,
        .VAR8 = VAR9,
        .VAR10 = *VAR4,
        .VAR11 = sizeof(*VAR4),
    };
    FUN2(VAR2, &VAR5, NULL, 0);
    if (FUN3(VAR2, &VAR5) < 0)
    {
        return 0;
    }
    if (VAR5.VAR6 != VAR7)
    {
        FUN4("", VAR7, VAR5.VAR6);
        return -1;
    }
    if (VAR5.VAR11 != sizeof(VAR12.VAR10))
    {
        FUN4("");
        return -1;
    }
    *VAR4 = VAR5.VAR10;
    return 0;
}