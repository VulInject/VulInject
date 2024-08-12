static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    struct VAR5 *VAR5;
    struct VAR6 *VAR7;
    int VAR8, VAR9;
    int VAR10, VAR11;
    int64_t VAR12, VAR13, VAR14;
    if (VAR2->VAR15)
    {
        FUN2(VAR2);
        VAR2->VAR15 = 0;
    VAR16:
        do
        {
            VAR9 = FUN3(VAR2, &VAR8, &VAR10, &VAR11, &VAR12);
            if (VAR9 < 0)
                return VAR9;
        } while (VAR8 < 0 || !VAR2->VAR17[VAR8]);
        VAR5 = VAR2->VAR18;
        VAR7 = VAR5->VAR17 + VAR8;
        VAR13 = FUN4(VAR2, VAR8, &VAR14);
        FUN5(VAR2, VAR8, VAR10, VAR11);
        if (VAR7->VAR19 && !(VAR7->VAR20 & VAR21))
            goto VAR16;
        VAR7->VAR19 = 0;
        VAR9 = FUN6(VAR4, VAR11);
        if (VAR9 < 0)
            return VAR9;
        VAR4->VAR22 = VAR8;
        memcpy(VAR4->VAR23, VAR7->VAR24 + VAR10, VAR11);
        VAR4->VAR13 = VAR13;
        VAR4->VAR14 = VAR14;
        VAR4->VAR25 = VAR7->VAR20;
        VAR4->VAR26 = VAR7->VAR27;
        VAR4->VAR28 = VAR12;
        if (VAR7->VAR29)
        {
            VAR30 *VAR31 = FUN7(VAR4, VAR32, 10);
            FUN8(VAR31 + 4, VAR7->VAR29);
            VAR7->VAR29 = 0;
            if (VAR7->VAR33)
            {
                VAR30 *VAR31 = FUN7(VAR4, VAR34, VAR7->VAR35);
                memcpy(VAR31, VAR7->VAR33, VAR7->VAR35);
                FUN9(&VAR7->VAR33);
                VAR7->VAR35 = 0;
                return VAR11;