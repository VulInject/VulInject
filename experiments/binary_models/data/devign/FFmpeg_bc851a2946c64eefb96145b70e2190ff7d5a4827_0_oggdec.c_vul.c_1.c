static int FUN1(VAR1 *VAR2, int VAR3)
{
    struct VAR4 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = VAR2->VAR8;
    struct VAR9 *VAR10 = VAR4->VAR11;
    int VAR12;
    if (!VAR10)
        return 0;
    VAR4->VAR11 = VAR10->VAR13;
    if (!VAR3)
    {
        for (VAR12 = 0; VAR12 < VAR4->VAR14; VAR12++)
            FUN2(VAR4->VAR15[VAR12].VAR16);
        FUN3(VAR7, VAR10->VAR17, VAR18);
        VAR4->VAR19 = VAR10->VAR19;
        VAR4->VAR14 = VAR10->VAR14;
        memcpy(VAR4->VAR15, VAR10->VAR15, VAR10->VAR14 * sizeof(*VAR4->VAR15));
    }
    FUN2(VAR10);
    return 0;
}