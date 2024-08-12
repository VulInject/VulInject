static void FUN1(int VAR1, struct VAR2 *VAR3, VAR4 *VAR5, VAR6 *VAR7, VAR8 *VAR9)
{
    struct VAR10 *VAR11 = FUN2(VAR3, VAR9, sizeof(*VAR11));
    int VAR12 = 0;
    if (!FUN3(VAR13, VAR11, sizeof(*VAR11)))
        return;
    FUN4(&VAR11->VAR5, (VAR14 *)&VAR11->VAR15, VAR12);
    FUN4(&VAR11->VAR16, (VAR14 *)&VAR11->VAR17, VAR12);
    VAR12 |= FUN5(&VAR11->VAR5, VAR5);
    VAR12 |= FUN6(&VAR11->VAR16, FUN7(struct VAR18, VAR19));
    VAR12 |= FUN8(&VAR11->VAR16.VAR19, VAR9, VAR7->VAR20[0]);
    VAR12 |= FUN9(&VAR11->VAR16.VAR21, VAR7, sizeof(*VAR7));
    if (VAR12 == 0)
        VAR12 = FUN10(VAR9, VAR3, &VAR11->VAR22, VAR11, VAR1);
    if (VAR12 == 0)
    {
        VAR9->VAR23[1] = (VAR14)VAR11->VAR15;
        VAR9->VAR23[2] = (VAR14)VAR11->VAR17;
    }
}