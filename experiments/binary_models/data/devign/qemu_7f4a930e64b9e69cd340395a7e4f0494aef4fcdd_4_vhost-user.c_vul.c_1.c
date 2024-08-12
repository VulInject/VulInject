static int FUN1(struct VAR1 *VAR2, unsigned long int VAR3, struct VAR4 *VAR5)
{
    VhostUserMsg VAR6 = {
        .VAR3 = VAR3,
        .VAR7 = VAR8,
        .VAR9 = *VAR5,
        .VAR10 = sizeof(*VAR5),
    };
    FUN2(VAR2, &VAR6, NULL, 0);
    return 0;
}