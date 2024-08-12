static int FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    int VAR5;
    if (FUN2(VAR2->VAR6, VAR3, VAR4))
        return VAR7;
    FUN3(VAR2->VAR6);
    FUN4(VAR2->VAR6, VAR3, VAR4);
    VAR2->VAR8 = (VAR2->VAR6->VAR9 + 15) / 16;
    VAR2->VAR10 = (VAR2->VAR6->VAR11 + 15) / 16;
    VAR2->VAR12 = VAR2->VAR8 + 1;
    VAR2->VAR13 = 4 * VAR2->VAR12;
    VAR2->VAR14 = FUN5(VAR2->VAR12 * (VAR2->VAR10 + 1) * sizeof(*VAR2->VAR15));
    VAR2->VAR16 = FUN5(VAR2->VAR13 * (4 * VAR2->VAR10 + 1));
    VAR2->VAR17 = FUN5(VAR2->VAR8 * sizeof(*VAR2->VAR17));
    VAR2->VAR18 = FUN5((VAR2->VAR8 + 1) * sizeof(*VAR2->VAR18));
    if (!VAR2->VAR14 || !VAR2->VAR16 || !VAR2->VAR17 || !VAR2->VAR18)
        return FUN6(VAR19);
    VAR2->VAR15 = VAR2->VAR14 + 1 + VAR2->VAR12;
    VAR2->VAR20 = VAR2->VAR16 + 4 + VAR2->VAR13;
    memset(VAR2->VAR16, VAR21, VAR2->VAR13);
    for (VAR5 = 0; VAR5 < 4 * VAR2->VAR10; VAR5++)
        VAR2->VAR20[VAR5 * VAR2->VAR13 - 1] = VAR21;
    return 0;
}