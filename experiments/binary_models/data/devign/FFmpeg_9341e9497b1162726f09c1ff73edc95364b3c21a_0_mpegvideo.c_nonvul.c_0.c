static int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4, VAR5, VAR6, VAR7, VAR8, VAR9, VAR10;
    VAR2->VAR11 = (VAR2->VAR12 + 15) / 16;
    VAR2->VAR13 = VAR2->VAR11 + 1;
    VAR2->VAR14 = VAR2->VAR11 * 2 + 1;
    VAR2->VAR15 = VAR2->VAR11 * 4 + 1;
    VAR7 = VAR2->VAR16 * VAR2->VAR13;
    VAR8 = (VAR2->VAR16 + 2) * VAR2->VAR13 + 1;
    VAR2->VAR17 = VAR2->VAR11 * 16;
    VAR2->VAR18 = VAR2->VAR16 * 16;
    VAR2->VAR19 = VAR2->VAR11 * VAR2->VAR16;
    VAR2->VAR20[0] = VAR2->VAR20[1] = VAR2->VAR20[2] = VAR2->VAR20[3] = VAR2->VAR14;
    VAR2->VAR20[4] = VAR2->VAR20[5] = VAR2->VAR13;
    VAR3 = VAR2->VAR14 * (2 * VAR2->VAR16 + 1);
    VAR4 = VAR2->VAR13 * (VAR2->VAR16 + 1);
    VAR5 = VAR3 + 2 * VAR4;
    if (VAR2->VAR16 & 1)
        VAR5 += 2 * VAR2->VAR14 + 2 * VAR2->VAR13;
    FUN2(VAR2->VAR21, VAR2->VAR22, (VAR2->VAR19 + 1) * sizeof(int), VAR23);
    for (VAR10 = 0; VAR10 < VAR2->VAR16; VAR10++)
        for (VAR9 = 0; VAR9 < VAR2->VAR11; VAR9++)
            VAR2->VAR22[VAR9 + VAR10 * VAR2->VAR11] = VAR9 + VAR10 * VAR2->VAR13;
    VAR2->VAR22[VAR2->VAR16 * VAR2->VAR11] = (VAR2->VAR16 - 1) * VAR2->VAR13 + VAR2->VAR11;
    if (VAR2->VAR24)
    {
        FUN2(VAR2->VAR21, VAR2->VAR25, VAR8 * 2 * sizeof(VAR26), VAR23)
        FUN2(VAR2->VAR21, VAR2->VAR27, VAR8 * 2 * sizeof(VAR26), VAR23) FUN2(VAR2->VAR21, VAR2->VAR28, VAR8 * 2 * sizeof(VAR26), VAR23) FUN2(VAR2->VAR21, VAR2->VAR29, VAR8 * 2 * sizeof(VAR26), VAR23) FUN2(VAR2->VAR21, VAR2->VAR30, VAR8 * 2 * sizeof(VAR26), VAR23) FUN2(VAR2->VAR21, VAR2->VAR31, VAR8 * 2 * sizeof(VAR26), VAR23) VAR2->VAR32 = VAR2->VAR25 + VAR2->VAR13 + 1;
        VAR2->VAR33 = VAR2->VAR27 + VAR2->VAR13 + 1;
        VAR2->VAR34 = VAR2->VAR28 + VAR2->VAR13 + 1;
        VAR2->VAR35 = VAR2->VAR29 + VAR2->VAR13 + 1;
        VAR2->VAR36 = VAR2->VAR30 + VAR2->VAR13 + 1;
        VAR2->VAR37 = VAR2->VAR31 + VAR2->VAR13 + 1;
        FUN2(VAR2->VAR21, VAR2->VAR38, VAR7 * sizeof(VAR39), VAR23)
        FUN2(VAR2->VAR21, VAR2->VAR40, VAR7 * sizeof(int), VAR23) FUN3(VAR2->VAR21, VAR2->VAR41, VAR7 * sizeof(float), VAR23);
        FUN3(VAR2->VAR21, VAR2->VAR42, VAR7 * sizeof(float), VAR23);
    }
    if (VAR2->VAR43 == VAR44 || (VAR2->VAR45 & VAR46))
    {
        for (VAR6 = 0; VAR6 < 2; VAR6++)
        {
            int VAR47, VAR48;
            for (VAR47 = 0; VAR47 < 2; VAR47++)
            {
                for (VAR48 = 0; VAR48 < 2; VAR48++)
                {
                    FUN2(VAR2->VAR21, VAR2->VAR49[VAR6][VAR47][VAR48], VAR8 * 2 * sizeof(VAR26), VAR23);
                    VAR2->VAR50[VAR6][VAR47][VAR48] = VAR2->VAR49[VAR6][VAR47][VAR48] + VAR2->VAR13 + 1;
                }
                FUN2(VAR2->VAR21, VAR2->VAR51[VAR6][VAR47], VAR7 * 2 * sizeof(VAR52), VAR23)
                FUN2(VAR2->VAR21, VAR2->VAR53[VAR6][VAR47], VAR8 * 2 * sizeof(VAR26), VAR23) VAR2->VAR54[VAR6][VAR47] = VAR2->VAR53[VAR6][VAR47] + VAR2->VAR13 + 1;
            }
            FUN2(VAR2->VAR21, VAR2->VAR55[VAR6], VAR7 * 2 * sizeof(VAR52), VAR23)
        }
    }
    if (VAR2->VAR56 == VAR57)
    {
        FUN2(VAR2->VAR21, VAR2->VAR58, VAR3 + (VAR2->VAR16 & 1) * 2 * VAR2->VAR14, VAR23);
        VAR2->VAR59 = VAR2->VAR58 + VAR2->VAR14 + 1;
        FUN2(VAR2->VAR21, VAR2->VAR60, VAR7 * sizeof(VAR52), VAR23);
        FUN2(VAR2->VAR21, VAR2->VAR61, VAR7 * sizeof(VAR52), VAR23);
    }
    if (VAR2->VAR62 || VAR2->VAR63 || !VAR2->VAR24)
    {
        FUN2(VAR2->VAR21, VAR2->VAR64, VAR5 * sizeof(VAR26), VAR23);
        VAR2->VAR65[0] = VAR2->VAR64 + VAR2->VAR14 + 1;
        VAR2->VAR65[1] = VAR2->VAR64 + VAR3 + VAR2->VAR13 + 1;
        VAR2->VAR65[2] = VAR2->VAR65[1] + VAR4;
        for (VAR6 = 0; VAR6 < VAR5; VAR6++)
            VAR2->VAR64[VAR6] = 1024;
    }
    FUN2(VAR2->VAR21, VAR2->VAR66, VAR7, VAR23);
    memset(VAR2->VAR66, 1, VAR7);
    FUN2(VAR2->VAR21, VAR2->VAR67, VAR7 + 2, VAR23);
    return FUN4(VAR2);
VAR23:
    return FUN5(VAR68);
}