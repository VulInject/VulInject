static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR3;
    AVBPrint VAR9;
    int VAR10 = -1, VAR11 = -1, VAR12 = -1, VAR13 = -1;
    int VAR14, VAR15;
    const VAR16 *VAR17 = FUN2(VAR6, VAR18, &VAR14);
    VAR19 *VAR20 = VAR2->VAR21;
    if (VAR17 && VAR14 == 16)
    {
        VAR10 = FUN3(VAR17);
        VAR11 = FUN3(VAR17 + 4);
        VAR12 = FUN3(VAR17 + 8);
        VAR13 = FUN3(VAR17 + 12);
    }
    if (VAR6->VAR14 <= 0)
        return VAR6->VAR14;
    FUN4(&VAR9, 0, VAR22);
    VAR15 = FUN5(VAR2, &VAR9, VAR6->VAR3, VAR10, VAR11, VAR12, VAR13);
    if (VAR15 >= 0)
        VAR15 = FUN6(VAR8, VAR9.VAR23, VAR20->VAR24++, 0, NULL, NULL);
    FUN7(&VAR9, NULL);
    if (VAR15 < 0)
        return VAR15;
    *VAR4 = VAR8->VAR25 > 0;
    return VAR6->VAR14;
}