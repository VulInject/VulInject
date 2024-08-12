static int FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR2->VAR9;
    uint64_t VAR10 = FUN2(VAR9);
    uint16_t VAR11 = FUN3(VAR9);
    int VAR12, VAR13;
    for (VAR12 = 0; VAR12 < VAR11; VAR12++)
    {
        uint16_t VAR14, VAR15, VAR16;
        VAR17 *VAR18 = NULL;
        VAR14 = FUN3(VAR9);
        if (!VAR14)
            return VAR19;
        VAR18 = FUN4(VAR14);
        if (!VAR18)
            return FUN5(VAR20);
        FUN6(VAR9, VAR14, VAR18, VAR14);
        VAR15 = FUN3(VAR9);
        VAR16 = FUN3(VAR9);
        if ((VAR13 = FUN7(VAR2, VAR18, VAR14, VAR16, VAR15, &VAR2->VAR21)) < 0)
            return VAR13;
    }
    FUN8(VAR9, VAR6->VAR22, VAR10);
    return 0;
}