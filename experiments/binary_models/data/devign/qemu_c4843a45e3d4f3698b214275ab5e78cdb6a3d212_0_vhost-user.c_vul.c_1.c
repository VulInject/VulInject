static int FUN1(struct VAR1 *VAR2, VhostUserRequest VAR3, struct VAR4 *VAR5)
{
    int VAR6[VAR7];
    size_t VAR8 = 0;
    VhostUserMsg VAR9 = {
        .VAR3 = VAR3,
        .VAR10 = VAR11,
        .VAR12.VAR13 = VAR5->VAR14 & VAR15,
        .VAR16 = sizeof(VAR9.VAR12.VAR13),
    };
    if (FUN2() && VAR5->VAR17 > 0)
    {
        VAR6[VAR8++] = VAR5->VAR17;
    }
    else
    {
        VAR9.VAR12.VAR13 |= VAR18;
    }
    FUN3(VAR2, &VAR9, VAR6, VAR8);
    return 0;
}