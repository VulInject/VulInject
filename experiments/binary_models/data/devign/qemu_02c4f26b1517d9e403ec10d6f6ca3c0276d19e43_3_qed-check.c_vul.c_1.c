int FUN1(VAR1 *VAR2, VAR3 *VAR4, bool VAR5)
{
    QEDCheck VAR6 = {
        .VAR2 = VAR2,
        .VAR4 = VAR4,
        .VAR7 = FUN2(VAR2, VAR2->VAR8),
        .VAR9 = {.VAR10 = NULL},
        .VAR5 = VAR5,
    };
    int VAR11;
    VAR6.VAR12 = FUN3(((VAR6.VAR7 + 31) / 32) * sizeof(VAR6.VAR12[0]));
    if (VAR6.VAR7 && VAR6.VAR12 == NULL)
    {
        return -VAR13;
    }
    VAR6.VAR4->VAR14.VAR15 = (VAR2->VAR16.VAR17 + VAR2->VAR16.VAR18 - 1) / VAR2->VAR16.VAR18;
    VAR11 = FUN4(&VAR6, VAR2->VAR19);
    if (VAR11 == 0)
    {
        FUN5(&VAR6);
        if (VAR5)
        {
            FUN6(VAR2, VAR4);
        }
    }
    FUN7(VAR6.VAR12);
    return VAR11;
}