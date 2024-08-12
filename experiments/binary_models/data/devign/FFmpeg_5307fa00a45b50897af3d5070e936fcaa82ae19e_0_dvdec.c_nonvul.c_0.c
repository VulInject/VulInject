static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    const VAR7 *VAR14;
    int VAR15, VAR16, VAR17;
    const VAR18 *VAR19;
    VAR19 = FUN2(VAR2, VAR12->VAR19, VAR8, VAR9);
    if (!VAR19 || VAR9 < VAR19->VAR20)
    {
        FUN3(VAR2, VAR21, "");
        return -1;
    }
    if (VAR19 != VAR12->VAR19)
    {
        VAR17 = FUN4(VAR12, VAR19);
        if (VAR17 < 0)
        {
            FUN3(VAR2, VAR21, "");
            return VAR17;
        }
        VAR12->VAR19 = VAR19;
    }
    VAR12->VAR22 = VAR3;
    VAR12->VAR22->VAR23 = 1;
    VAR12->VAR22->VAR24 = VAR25;
    VAR2->VAR26 = VAR12->VAR19->VAR26;
    VAR2->VAR27 = VAR12->VAR19->VAR27;
    VAR17 = FUN5(VAR2, VAR12->VAR19->VAR28, VAR12->VAR19->VAR29);
    if (VAR17 < 0)
        return VAR17;
    VAR14 = VAR8 + 80 * 5 + 48 + 5;
    if (*VAR14 == VAR30)
    {
        VAR15 = VAR8[4] & 0x07;
        VAR16 = (VAR14[2] & 0x07) == 0x02 || (!VAR15 && (VAR14[2] & 0x07) == 0x07);
        FUN6(VAR2, VAR12->VAR19->VAR31[VAR16]);
    }
    if ((VAR17 = FUN7(VAR2, VAR12->VAR22, 0)) < 0)
        return VAR17;
    VAR12->VAR22->VAR32 = 1;
    VAR12->VAR22->VAR33 = 0;
    if (*VAR14 == VAR30)
    {
        VAR12->VAR22->VAR33 = !(VAR14[3] & 0x40);
    }
    VAR12->VAR8 = VAR8;
    VAR2->FUN8(VAR2, VAR34, VAR12->VAR35, NULL, FUN9(VAR12->VAR19), sizeof(VAR36));
    FUN10();
    *VAR4 = 1;
    return VAR12->VAR19->VAR20;
}