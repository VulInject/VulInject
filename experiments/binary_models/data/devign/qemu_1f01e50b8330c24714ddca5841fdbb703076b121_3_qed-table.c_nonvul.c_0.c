static int FUN1(VAR1 *VAR2, uint64_t VAR3, VAR4 *VAR5, unsigned int VAR6, unsigned int VAR7, bool VAR8)
{
    unsigned int VAR9 = VAR10 / sizeof(VAR11) - 1;
    unsigned int VAR12, VAR13, VAR14;
    VAR4 *VAR15;
    struct iovec VAR16;
    QEMUIOVector VAR17;
    size_t VAR18;
    int VAR19;
    FUN2(VAR2, VAR3, VAR5, VAR6, VAR7);
    VAR12 = VAR6 & ~VAR9;
    VAR13 = (VAR6 + VAR7 + VAR9) & ~VAR9;
    VAR18 = (VAR13 - VAR12) * sizeof(VAR11);
    VAR15 = FUN3(VAR2->VAR20, VAR18);
    VAR16 = (struct VAR21){
        .VAR22 = VAR15->VAR23,
        .VAR24 = VAR18,
    };
    FUN4(&VAR17, &VAR16, 1);
    for (VAR14 = VAR12; VAR14 < VAR13; VAR14++)
    {
        uint64_t VAR25 = FUN5(VAR5->VAR23[VAR14]);
        VAR15->VAR23[VAR14 - VAR12] = VAR25;
    }
    VAR3 += VAR12 * sizeof(VAR11);
    if (FUN6())
    {
        FUN7(&VAR2->VAR26);
    }
    VAR19 = FUN8(VAR2->VAR20->VAR27, VAR3, &VAR17);
    if (FUN6())
    {
        FUN9(&VAR2->VAR26);
    }
    FUN10(VAR2, VAR5, VAR8, VAR19);
    if (VAR19 < 0)
    {
        goto VAR28;
    }
    if (VAR8)
    {
        VAR19 = FUN11(VAR2->VAR20);
        if (VAR19 < 0)
        {
            goto VAR28;
        }
    }
    VAR19 = 0;
VAR28:
    FUN12(VAR15);
    return VAR19;
}