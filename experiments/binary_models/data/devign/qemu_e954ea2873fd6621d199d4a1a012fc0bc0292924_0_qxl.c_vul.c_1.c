static void FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    pcibus_t VAR5 = VAR2->VAR6.VAR7[VAR8].VAR9;
    pcibus_t VAR10 = VAR2->VAR6.VAR7[VAR8].VAR11 + VAR5;
    VAR12 *VAR13 = VAR2->VAR14->VAR14 + VAR3;
    uint64_t VAR15 = VAR2->VAR6.VAR7[VAR8].VAR9;
    QXLMemSlot VAR16 = {.VAR17 = VAR5, .VAR18 = VAR10};
    QXLSurfaceCreate VAR19 = {
        .VAR20 = VAR13->VAR21,
        .VAR22 = VAR13->VAR23,
        .VAR24 = -VAR13->VAR21 * 4,
        .VAR25 = VAR26,
        .VAR27 = VAR4 ? VAR28 : 0,
        .VAR29 = true,
        .VAR30 = VAR15 + VAR2->VAR31.VAR32,
    };
    FUN2(VAR2->VAR33, VAR3, VAR13->VAR21, VAR13->VAR23, VAR13->VAR34, VAR15);
    if (!VAR4)
    {
        FUN3(VAR2, 0);
    }
    VAR2->VAR35[0].VAR16 = VAR16;
    FUN4(VAR2, 0, VAR15, VAR36);
    VAR2->VAR37.VAR19 = VAR19;
    FUN5(VAR2, 0, VAR36);
    VAR2->VAR13 = VAR38;
    VAR2->VAR39 = VAR40;
    if (VAR13->VAR34 == 16)
    {
        VAR2->VAR39 |= VAR41;
    }
    VAR2->VAR31.VAR13 = FUN6(VAR3);
    VAR2->VAR42->VAR13 = FUN6(VAR3);
    FUN7(VAR2);
}