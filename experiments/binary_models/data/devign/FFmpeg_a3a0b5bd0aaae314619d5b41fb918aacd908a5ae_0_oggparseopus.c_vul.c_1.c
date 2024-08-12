static int FUN1(VAR1 *VAR2, int VAR3)
{
    struct VAR4 *VAR4 = VAR2->VAR5;
    struct VAR6 *VAR7 = &VAR4->VAR8[VAR3];
    VAR9 *VAR10 = VAR2->VAR8[VAR3];
    struct VAR11 *VAR12 = VAR7->private;
    VAR13 *VAR14 = VAR7->VAR15 + VAR7->VAR16;
    if (!VAR12)
    {
        VAR12 = VAR7->private = FUN2(sizeof(*VAR12));
        if (!VAR12)
            return FUN3(VAR17);
    }
    if (VAR7->VAR18 & VAR19)
    {
        if (VAR7->VAR20 < VAR21 || (FUN4(VAR14 + 8) & 0xF0) != 0)
            return VAR22;
        VAR10->VAR23->VAR24 = VAR25;
        VAR10->VAR23->VAR26 = VAR27;
        VAR10->VAR23->VAR28 = FUN4(VAR14 + 9);
        VAR12->VAR29 = FUN5(VAR14 + 10);
        VAR10->VAR23->VAR30 = VAR12->VAR29;
        if (FUN6(VAR10->VAR23, VAR7->VAR20))
            return FUN3(VAR17);
        memcpy(VAR10->VAR23->VAR31, VAR14, VAR7->VAR20);
        VAR10->VAR23->VAR32 = 48000;
        VAR10->VAR23->VAR33 = FUN7(VAR34, VAR10->VAR23->VAR32, 1000);
        FUN8(VAR10, 64, 1, 48000);
        VAR12->VAR35 = 1;
        return 1;
    }
    if (VAR12->VAR35)
    {
        if (VAR7->VAR20 < 8 || memcmp(VAR14, "", 8))
            return VAR22;
        FUN9(VAR2, VAR10, VAR14 + 8, VAR7->VAR20 - 8);
        VAR12->VAR35--;
        return 1;
    }
    return 0;