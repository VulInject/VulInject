static int FUN1(VAR1 *VAR2, int VAR3)
{
    struct VAR4 *VAR4 = VAR2->VAR5;
    struct VAR6 *VAR7 = VAR4->VAR8 + VAR3;
    struct VAR9 *VAR10 = VAR7->private;
    VAR11 *VAR12 = VAR2->VAR8[VAR3];
    VAR13 *VAR14 = VAR7->VAR15 + VAR7->VAR16;
    if (!VAR10)
    {
        VAR10 = FUN2(sizeof(*VAR10));
        VAR7->private = VAR10;
    }
    if (VAR10->VAR17 > 1)
        return 0;
    if (VAR10->VAR17 == 0)
    {
        int VAR18;
        VAR12->VAR19->VAR20 = VAR21;
        VAR12->VAR19->VAR22 = VAR23;
        if (VAR7->VAR24 < 68)
        {
            FUN3(VAR2, VAR25, "");
            return VAR26;
        }
        VAR12->VAR19->VAR27 = FUN4(VAR14 + 36);
        VAR12->VAR19->VAR28 = FUN4(VAR14 + 48);
        if (VAR12->VAR19->VAR28 < 1 || VAR12->VAR19->VAR28 > 2)
        {
            FUN3(VAR2, VAR25, "");
            return VAR26;
        }
        VAR12->VAR19->VAR29 = VAR12->VAR19->VAR28 == 1 ? VAR30 : VAR31;
        VAR10->VAR32 = FUN4(VAR14 + 56);
        VAR18 = FUN4(VAR14 + 64);
        if (VAR18)
            VAR10->VAR32 *= VAR18;
        FUN5(VAR12->VAR19, VAR7->VAR24);
        memcpy(VAR12->VAR19->VAR33, VAR14, VAR12->VAR19->VAR34);
        FUN6(VAR12, 64, 1, VAR12->VAR19->VAR27);
    }
    else
        FUN7(VAR2, &VAR12->VAR35, VAR14, VAR7->VAR24);
    VAR10->VAR17++;
    return 1;
}