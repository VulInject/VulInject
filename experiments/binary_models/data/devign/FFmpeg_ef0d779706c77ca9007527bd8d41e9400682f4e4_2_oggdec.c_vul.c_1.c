static int FUN1(VAR1 *VAR2, uint32_t VAR3, int VAR4)
{
    struct VAR5 *VAR5 = VAR2->VAR6;
    int VAR7 = VAR5->VAR8++;
    VAR9 *VAR10;
    struct VAR11 *VAR12;
    VAR5->VAR13 = FUN2(VAR5->VAR13, VAR5->VAR8 * sizeof(*VAR5->VAR13));
    memset(VAR5->VAR13 + VAR7, 0, sizeof(*VAR5->VAR13));
    VAR12 = VAR5->VAR13 + VAR7;
    VAR12->VAR3 = VAR3;
    VAR12->VAR14 = VAR15;
    VAR12->VAR16 = FUN3(VAR12->VAR14);
    VAR12->VAR17 = -1;
    if (VAR4)
    {
        VAR10 = FUN4(VAR2, NULL);
        if (!VAR10)
            return FUN5(VAR18);
        VAR10->VAR19 = VAR7;
        FUN6(VAR10, 64, 1, 1000000);
    }
    return VAR7;
}