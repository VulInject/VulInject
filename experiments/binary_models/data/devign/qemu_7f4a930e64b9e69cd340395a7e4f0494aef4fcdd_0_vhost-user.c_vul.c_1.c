static int FUN1(struct VAR1 *VAR2, int VAR3, VAR4 *VAR5)
{
    VhostUserMsg VAR6 = {
        .VAR3 = VAR3,
        .VAR7 = VAR8,
    };
    if (FUN2(VAR3) && VAR2->VAR9 != 0)
    {
        return 0;
    }
    FUN3(VAR2, &VAR6, NULL, 0);
    if (FUN4(VAR2, &VAR6) < 0)
    {
        return 0;
    }
    if (VAR6.VAR3 != VAR3)
    {
        FUN5("", VAR3, VAR6.VAR3);
        return -1;
    }
    if (VAR6.VAR10 != sizeof(VAR11.VAR5))
    {
        FUN5("");
        return -1;
    }
    *VAR5 = VAR6.VAR5;
    return 0;
}