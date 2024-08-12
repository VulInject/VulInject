static int FUN1(VAR1 *VAR2, int VAR3, VAR4 *VAR5)
{
    struct VAR6 *VAR7 = VAR5->VAR8;
    size_t VAR9 = sizeof(struct VAR6);
    uint8_t VAR10[6];
    VAR11 *VAR12;
    ssize_t VAR13, VAR14;
    uint16_t VAR15 = ((VAR2->VAR16 & 0xFF) << 8) | (VAR3 & 0xFF);
    uint64_t VAR17;
    if (!VAR5->VAR8)
    {
        VAR5->VAR8 = FUN2(VAR9);
        VAR7 = VAR5->VAR8;
        FUN3(VAR10, 0x83, sizeof(VAR7->VAR18));
        VAR12 = FUN4(VAR2, VAR5->VAR19, VAR3, VAR10, VAR5);
        if (!VAR12)
        {
            FUN5(VAR5->VAR19, "");
            FUN6(VAR5->VAR8);
            VAR5->VAR8 = NULL;
            return VAR20;
        }
        FUN7(VAR5->VAR19, "", VAR3);
        VAR13 = FUN8(VAR12);
        if (VAR13 > 0)
        {
            VAR5->VAR21 = VAR13;
            FUN9(VAR12);
        }
        return VAR22;
    }
    VAR7->VAR23.VAR24.VAR25 = VAR26;
    VAR7->VAR23.VAR27.VAR28.VAR29.VAR30 = VAR3;
    VAR7->VAR23.VAR24.VAR31 = 3;
    VAR7->VAR23.VAR24.VAR32 = 1;
    VAR7->VAR23.VAR24.VAR33 = 1;
    FUN10(VAR2->VAR34.VAR35, &VAR17);
    VAR7->VAR36 = FUN11(VAR17);
    memset(VAR7->VAR23.VAR37, 0, sizeof(VAR7->VAR23.VAR37));
    VAR7->VAR23.VAR37[0].VAR38 = 0;
    VAR7->VAR23.VAR37[0].VAR39 = VAR7->VAR36;
    VAR7->VAR23.VAR37[0].VAR40 = FUN12(VAR15);
    VAR14 = FUN13(VAR5->VAR8, VAR9, &VAR5->VAR41);
    FUN6(VAR5->VAR8);
    VAR5->VAR21 = VAR9 - VAR14;
    VAR5->VAR8 = NULL;
    return VAR42;
}