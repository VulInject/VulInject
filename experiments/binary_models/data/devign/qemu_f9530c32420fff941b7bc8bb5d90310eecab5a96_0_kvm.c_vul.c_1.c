static int FUN1(VAR1 *VAR2, struct VAR3 *VAR4, uint8_t VAR5)
{
    VAR6 *VAR7 = &VAR2->VAR7;
    const uint8_t VAR8 = VAR5 >> 4;
    const uint8_t VAR9 = VAR5 & 0x0f;
    int VAR10;
    uint8_t VAR11;
    VAR12 *VAR13;
    uint64_t VAR14;
    VAR1 *VAR15 = NULL;
    FUN2(FUN3(VAR2));
    VAR11 = FUN4(VAR7, VAR4->VAR16.VAR17, NULL) & VAR18;
    VAR13 = &VAR7->VAR19[VAR8];
    VAR14 = (VAR8 % 2) ? VAR7->VAR19[VAR8] : VAR7->VAR19[VAR8 + 1];
    if (FUN5(&VAR20))
    {
        VAR10 = VAR21;
        goto VAR22;
    }
    switch (VAR11)
    {
    case VAR23:
        VAR10 = FUN6(VAR2, VAR14, VAR13);
        break;
    default:
        VAR15 = FUN7(VAR7->VAR19[VAR9]);
        VAR10 = FUN8(VAR15, VAR11, VAR14, VAR13);
    }
    FUN9(VAR11, FUN3(VAR2)->VAR24, VAR15 ? FUN3(VAR15)->VAR24 : -1, VAR10);
    if (VAR10 >= 0)
    {
        FUN10(VAR2, VAR10);
        return 0;
    }
    return VAR10;