static int FUN1(struct VAR1 *VAR2, uint64_t VAR3, struct VAR4 *VAR5)
{
    int VAR6[VAR7];
    size_t VAR8 = 0;
    bool VAR9 = FUN2(VAR2->VAR10, VAR11);
    VhostUserMsg VAR12 = {
        .VAR13 = VAR14,
        .VAR15 = VAR16,
        .VAR17 = VAR3,
        .VAR18 = sizeof(VAR19.VAR17),
    };
    if (VAR9 && VAR5->VAR20 != -1)
    {
        VAR6[VAR8++] = VAR5->VAR20;
    }
    FUN3(VAR2, &VAR12, VAR6, VAR8);
    if (VAR9)
    {
        VAR12.VAR18 = 0;
        if (FUN4(VAR2, &VAR12) < 0)
        {
            return 0;
        }
        if (VAR12.VAR13 != VAR14)
        {
            FUN5(""
                         "",
                         VAR14, VAR12.VAR13);
            return -1;
        }
    }
    return 0;
}