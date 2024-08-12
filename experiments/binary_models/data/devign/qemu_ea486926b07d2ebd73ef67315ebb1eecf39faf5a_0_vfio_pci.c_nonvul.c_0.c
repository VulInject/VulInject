static int FUN1(VAR1 *VAR2)
{
    VFIOIRQSetFD VAR3 = {
        .VAR4 = {
            .VAR5 = sizeof(VAR3),
            .VAR6 = VAR7 | VAR8,
            .VAR9 = VAR10,
            .VAR11 = 0,
            .VAR12 = 1,
        },
    };
    uint8_t VAR13 = FUN2(&VAR2->VAR14, VAR15, 1);
    int VAR16;
    if (!VAR13)
    {
        return 0;
    }
    FUN3(VAR2);
    VAR2->VAR17.VAR13 = VAR13 - 1;
    VAR16 = FUN4(&VAR2->VAR17.VAR18, 0);
    if (VAR16)
    {
        FUN5("");
        return VAR16;
    }
    VAR3.VAR19 = FUN6(&VAR2->VAR17.VAR18);
    FUN7(VAR3.VAR19, VAR20, NULL, VAR2);
    if (FUN8(VAR2->VAR19, VAR21, &VAR3))
    {
        FUN5("");
        return -VAR22;
    }
    VAR2->VAR18 = VAR23;
    FUN9("", VAR24, VAR2->VAR25.VAR26, VAR2->VAR25.VAR27, VAR2->VAR25.VAR28, VAR2->VAR25.VAR29);
    return 0;
}