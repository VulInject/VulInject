static int FUN1(VAR1 *VAR2, int VAR3)
{
    struct VAR4 *VAR4 = VAR2->VAR5;
    struct VAR6 *VAR7 = VAR4->VAR8 + VAR3;
    VAR9 *VAR10 = VAR2->VAR8[VAR3];
    struct VAR11 *VAR12 = VAR7->private;
    VAR13 *VAR14 = VAR7->VAR15 + VAR7->VAR16;
    if (VAR7->VAR17 == 60 && !memcmp(VAR14, VAR18.VAR19, VAR18.VAR20))
    {
        uint32_t VAR21, VAR22, VAR23;
        uint32_t VAR24, VAR25;
        VAR12 = FUN2(sizeof(struct VAR11));
        if (!VAR12)
            return FUN3(VAR26);
        if (FUN4(VAR10->VAR27, 2 * sizeof(VAR28)) < 0)
        {
            FUN5(VAR12);
            return FUN3(VAR26);
        }
        VAR21 = FUN6(VAR14 + 28);
        VAR22 = FUN6(VAR14 + 36);
        VAR23 = FUN6(VAR14 + 40);
        VAR24 = FUN6(VAR14 + 48);
        VAR25 = FUN6(VAR14 + 56);
        VAR10->VAR27->VAR29 = VAR30;
        VAR10->VAR27->VAR31 = VAR32;
        VAR10->VAR27->VAR22 = VAR22;
        VAR10->VAR27->VAR33 = VAR23;
        if (VAR22)
            FUN7(VAR10, 64, 1, VAR22);
        VAR12->VAR34 = 1 + VAR25;
        FUN5(VAR7->private);
        VAR7->private = VAR12;
        FUN8(VAR10->VAR27->VAR35 + 0, VAR24);
        FUN8(VAR10->VAR27->VAR35 + 4, VAR21);
        return 1;
    }
    else if (VAR12 && VAR12->VAR34)
    {
        FUN9(VAR2, VAR10, VAR14, VAR7->VAR17);
        VAR12->VAR34--;
        return 1;
    }
    else
    {
        return 0;
    }
}