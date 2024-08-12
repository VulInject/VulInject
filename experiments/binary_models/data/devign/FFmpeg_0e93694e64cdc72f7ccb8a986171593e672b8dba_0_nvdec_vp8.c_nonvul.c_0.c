static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, uint32_t VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    VAR9 *VAR10 = VAR2->VAR11->VAR12;
    VAR13 *VAR14 = &VAR10->VAR15;
    VAR16 *VAR17;
    VAR18 *VAR19;
    VAR20 *VAR21 = VAR7->VAR22[VAR23]->VAR24.VAR25;
    int VAR26;
    VAR26 = FUN2(VAR2, VAR21);
    if (VAR26 < 0)
        return VAR26;
    VAR17 = (VAR16 *)VAR21->VAR27->VAR28;
    VAR19 = (VAR18 *)VAR17->VAR29;
    *VAR14 = (VAR13){.VAR30 = (VAR21->VAR31 + 15) / 16, .VAR32 = (VAR21->VAR33 + 15) / 16, .VAR34 = VAR19->VAR35, .VAR36.VAR37 = {.VAR31 = VAR21->VAR31, .VAR33 = VAR21->VAR33, .VAR38 = VAR7->VAR39, .VAR40 = FUN3(VAR7->VAR22[VAR41]), .VAR42 = FUN3(VAR7->VAR22[VAR43]), .VAR44 = FUN3(VAR7->VAR22[VAR45]), {{
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      !VAR7->VAR46,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      VAR7->VAR47,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      !VAR7->VAR48,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      VAR7->VAR49.VAR50 ? VAR7->VAR49.VAR51 : 0,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  }}}};
    return 0;
}