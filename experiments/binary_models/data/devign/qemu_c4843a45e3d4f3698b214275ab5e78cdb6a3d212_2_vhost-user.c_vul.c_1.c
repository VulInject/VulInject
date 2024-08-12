static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
    VhostUserMsg VAR5 = {
        .VAR6 = VAR7,
        .VAR8 = VAR9,
        .VAR10.VAR4 = *VAR4,
        .VAR11 = sizeof(VAR5.VAR10.VAR4),
    };
    FUN2(VAR2, &VAR5, NULL, 0);
    return 0;
}