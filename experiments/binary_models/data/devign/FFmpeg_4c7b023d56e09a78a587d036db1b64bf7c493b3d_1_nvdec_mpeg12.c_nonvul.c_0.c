static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, uint32_t VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    VAR9 *VAR10 = VAR2->VAR11->VAR12;
    VAR13 *VAR14 = &VAR10->VAR15;
    VAR16 *VAR17 = &VAR14->VAR18.VAR19;
    VAR20 *VAR21;
    VAR22 *VAR23;
    VAR24 *VAR25 = VAR7->VAR26.VAR27;
    int VAR28, VAR29;
    VAR28 = FUN2(VAR2, VAR25);
    if (VAR28 < 0)
        return VAR28;
    VAR21 = (VAR20 *)VAR25->VAR30->VAR31;
    VAR23 = (VAR22 *)VAR21->VAR32;
    *VAR14 = (VAR13){.VAR33 = (VAR25->VAR34 + 15) / 16, .VAR35 = (VAR25->VAR36 + 15) / 16, .VAR37 = VAR23->VAR38, .VAR39 = VAR7->VAR40 == VAR41, .VAR42 = VAR7->VAR40 == VAR41 || VAR7->VAR40 == VAR43, .VAR18.VAR19 = {
                                                                                                                                                                                                                                                                                                     .VAR44 = FUN3(VAR7->VAR45.VAR27),
                                                                                                                                                                                                                                                                                                     .VAR46 = FUN3(VAR7->VAR47.VAR27),
                                                                                                                                                                                                                                                                                                     .VAR48 = VAR7->VAR40,
                                                                                                                                                                                                                                                                                                     .VAR49 = VAR7->VAR50[0],
                                                                                                                                                                                                                                                                                                     .VAR51 = VAR7->VAR50[1],
                                                                                                                                                                                                                                                                                                     .VAR52 = {{VAR7->VAR53[0][0], VAR7->VAR53[0][1]}, {VAR7->VAR53[1][0], VAR7->VAR53[1][1]}},
                                                                                                                                                                                                                                                                                                     .VAR54 = VAR7->VAR54,
                                                                                                                                                                                                                                                                                                     .VAR55 = VAR7->VAR55,
                                                                                                                                                                                                                                                                                                     .VAR56 = VAR7->VAR56,
                                                                                                                                                                                                                                                                                                     .VAR57 = VAR7->VAR57,
                                                                                                                                                                                                                                                                                                     .VAR58 = VAR7->VAR58,
                                                                                                                                                                                                                                                                                                     .VAR59 = VAR7->VAR59,
                                                                                                                                                                                                                                                                                                     .VAR60 = VAR7->VAR60,
                                                                                                                                                                                                                                                                                                 }};
    for (VAR29 = 0; VAR29 < 64; ++VAR29)
    {
        VAR17->VAR61[VAR29] = VAR7->VAR62[VAR29];
        VAR17->VAR63[VAR29] = VAR7->VAR64[VAR29];
    }
    return 0;
}