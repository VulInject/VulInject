FUN1(VAR1 *VAR2, VAR1 *VAR3, VAR4 *VAR5, VAR6 *VAR7)
{
    int VAR8 = VAR2->VAR9;
    const VAR10 *VAR11 = VAR5->VAR11;
    const int *VAR12 = VAR5->VAR12;
    VAR13 *VAR14;
    VAR15 *VAR16;
    VAR17 *VAR18;
    int VAR19;
    VAR14 = FUN2(VAR2, sizeof *VAR14);
    VAR16 = FUN2(VAR2, sizeof *VAR16);
    VAR16->VAR20 = VAR21;
    VAR16->VAR22 = sizeof(*VAR16);
    VAR16->VAR23 = VAR11[VAR24].VAR25;
    if (VAR5->VAR26 == 3)
    {
        VAR27 *VAR28 = FUN2(VAR2, sizeof *VAR28);
        VAR28->VAR20 = VAR29;
        VAR28->VAR22 = sizeof(*VAR28);
        VAR28->VAR23 = FUN3(VAR11[VAR30].VAR25);
        VAR28->VAR31 = FUN4(VAR11[VAR30].VAR32);
    }
    else
    {
        for (VAR19 = 0; VAR19 < VAR5->VAR33; VAR19++)
        {
            VAR34 *VAR35 = FUN2(VAR2, sizeof *VAR35);
            VAR35->VAR20 = VAR36;
            VAR35->VAR22 = sizeof(*VAR35);
            VAR35->VAR23 = VAR11[VAR37].VAR25;
            VAR35->VAR38 = VAR19;
            VAR35->VAR39 = VAR19;
            VAR35->VAR40 = VAR19;
            if (FUN5(VAR19, VAR7->VAR41))
            {
                VAR35->VAR42 = FUN4(VAR43);
            }
        }
        VAR18 = FUN2(VAR2, sizeof *VAR18);
        VAR18->VAR20 = VAR44;
        VAR18->VAR22 = sizeof(*VAR18);
        VAR18->VAR45 = 0;
        VAR18->VAR23 = FUN3(VAR11[VAR46].VAR25);
        VAR18->VAR42 = FUN4(1);
        VAR18->VAR47 = FUN6(VAR48);
        VAR18->VAR49 = FUN6(VAR12[VAR46] + VAR50);
    }
    FUN7(VAR3, VAR2, (void *)(VAR2->VAR51 + VAR8), "", VAR2->VAR9 - VAR8, 3);
}