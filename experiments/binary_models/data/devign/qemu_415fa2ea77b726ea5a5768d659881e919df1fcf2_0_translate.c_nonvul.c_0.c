static inline int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    DisasContext VAR6, *VAR7 = &VAR6;
    VAR8 *VAR9;
    VAR10 *VAR11;
    int VAR12, VAR13, VAR14;
    VAR8 *VAR15;
    VAR8 *VAR16;
    VAR15 = (VAR8 *)VAR4->VAR17;
    VAR16 = (VAR8 *)VAR4->VAR16;
    VAR12 = VAR4->VAR12;
    VAR7->VAR18 = VAR2->VAR19[0] & VAR20;
    VAR7->VAR21 = (VAR12 >> VAR22) & 1;
    VAR7->VAR23 = (VAR12 >> VAR24) & 1;
    VAR7->VAR25 = (VAR12 >> VAR26) & 1;
    VAR7->VAR27 = 0;
    VAR7->VAR28 = (VAR12 >> VAR29) & 1;
    VAR7->VAR30 = (VAR12 >> VAR31) & 3;
    VAR7->VAR32 = (VAR12 >> VAR33) & 3;
    VAR7->VAR34 = (VAR12 >> VAR35) & 1;
    VAR7->VAR36 = VAR2->VAR36;
    VAR7->VAR37 = VAR38;
    VAR7->VAR16 = VAR16;
    VAR7->VAR4 = VAR4;
    VAR7->VAR39 = 0;
    VAR7->VAR40 = 0;
    if (VAR12 & VAR41)
    {
        if (VAR7->VAR30 == 3)
            VAR7->VAR40 = 6;
        else
            VAR7->VAR40 = 3;
    }
    VAR7->VAR42 = !(VAR7->VAR34 || VAR2->VAR36 || (VAR12 & VAR41));
    VAR43 = VAR44;
    VAR11 = VAR44 + VAR45;
    VAR46 = VAR47;
    VAR7->VAR48 = VAR49;
    VAR9 = VAR15;
    VAR14 = -1;
    if (VAR12 & VAR50)
    {
        FUN2();
    }
    for (;;)
    {
        if (VAR2->VAR51 > 0)
        {
            for (VAR13 = 0; VAR13 < VAR2->VAR51; VAR13++)
            {
                if (VAR2->VAR52[VAR13] == (unsigned long)VAR9)
                {
                    FUN3(VAR7, VAR9 - VAR7->VAR16);
                    break;
                }
            }
        }
        if (VAR5)
        {
            VAR13 = VAR43 - VAR44;
            if (VAR14 < VAR13)
            {
                VAR14++;
                while (VAR14 < VAR13)
                    VAR53[VAR14++] = 0;
            }
            VAR54[VAR14] = (VAR55)VAR9;
            VAR56[VAR14] = VAR7->VAR37;
            VAR53[VAR14] = 1;
        }
        VAR9 = FUN4(VAR7, VAR9);
        if (VAR7->VAR48)
            break;
        if (VAR7->VAR34 || VAR7->VAR36)
        {
            FUN5(VAR9 - VAR7->VAR16);
            FUN6(VAR7);
            break;
        }
        if (VAR43 >= VAR11 || (VAR9 - VAR15) >= (VAR57 - 32))
        {
            FUN5(VAR9 - VAR7->VAR16);
            FUN6(VAR7);
            break;
        }
    }
    *VAR43 = VAR58;
    if (VAR5)
    {
        VAR13 = VAR43 - VAR44;
        VAR14++;
        while (VAR14 <= VAR13)
            VAR53[VAR14++] = 0;
    }
    if (VAR59)
    {
        fprintf(VAR60, "");
        fprintf(VAR60, "", FUN7(VAR15));
        FUN8(VAR60, VAR15, VAR9 - VAR15, 0, !VAR7->VAR21);
        fprintf(VAR60, "");
        fprintf(VAR60, "");
        FUN9(VAR44, VAR47);
        fprintf(VAR60, "");
    }
    FUN10(VAR44, VAR43 - VAR44);
    if (VAR59)
    {
        fprintf(VAR60, "");
        FUN9(VAR44, VAR47);
        fprintf(VAR60, "");
    }
    if (!VAR5)
        VAR4->VAR61 = VAR9 - VAR15;
    return 0;
}