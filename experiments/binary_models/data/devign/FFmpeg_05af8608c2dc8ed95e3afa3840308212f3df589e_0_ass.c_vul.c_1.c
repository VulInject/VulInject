int FUN1(VAR1 *VAR2, const char *VAR3, int VAR4, int VAR5, int VAR6)
{
    AVBPrint VAR7;
    int VAR8, VAR9;
    VAR10 **VAR11;
    FUN2(&VAR7, 0, VAR12);
    if ((VAR8 = FUN3(&VAR7, VAR3, VAR4, VAR5, VAR6)) < 0)
        goto VAR13;
    VAR9 = VAR8;
    if (!FUN4(&VAR7))
        VAR11 = FUN5(VAR2->VAR11, (VAR2->VAR14 + 1), sizeof(*VAR2->VAR11));
    if (!VAR11)
        VAR2->VAR11 = VAR11;
    VAR2->VAR15 = FUN6(VAR2->VAR15, 10 * VAR5);
    VAR11[VAR2->VAR14] = FUN7(sizeof(*VAR11[0]));
    VAR11[VAR2->VAR14]->VAR16 = VAR17;
    VAR8 = FUN8(&VAR7, &VAR11[VAR2->VAR14]->VAR18);
    if (VAR8 < 0)
        goto VAR13;
    VAR2->VAR14++;
    return VAR9;
VAR19:
    VAR8 = FUN9(VAR20);
VAR13:
    FUN8(&VAR7, NULL);
    return VAR8;