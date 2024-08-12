static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, uint64_t VAR6, uint64_t VAR7)
{
    struct ibv_sge VAR8;
    struct ibv_send_wr VAR9 = {0};
    struct VAR10 *VAR11;
    int VAR12, VAR13, VAR14 = 0;
    uint64_t VAR15, VAR16;
    VAR17 *VAR18, *VAR19;
    VAR20 *VAR21 = &(VAR4->VAR22.VAR21[VAR5]);
    RDMARegister VAR23;
    VAR24 *VAR25;
    RDMAControlHeader VAR26 = {.VAR27 = VAR28};
    RDMAControlHeader VAR29 = {
        .VAR30 = sizeof(VAR31),
        .VAR27 = VAR32,
        .VAR33 = 1,
    };
VAR34:
    VAR8.VAR35 = (VAR36)(VAR21->VAR37 + (VAR6 - VAR21->VAR38));
    VAR8.VAR7 = VAR7;
    VAR15 = FUN2(VAR21->VAR37, (VAR17 *)VAR8.VAR35);
    VAR18 = FUN3(VAR21, VAR15);
    if (VAR21->VAR39)
    {
        VAR16 = VAR7 / (1UL << VAR40);
        if (VAR16 && ((VAR7 % (1UL << VAR40)) == 0))
        {
            VAR16--;
        }
    }
    else
    {
        VAR16 = VAR21->VAR7 / (1UL << VAR40);
        if (VAR16 && ((VAR21->VAR7 % (1UL << VAR40)) == 0))
        {
            VAR16--;
        }
    }
    FUN4("" VAR41 "" VAR41 "", VAR16 + 1, (VAR16 + 1) * (1UL << VAR40) / 1024 / 1024);
    VAR19 = FUN5(VAR21, VAR15 + VAR16);
    if (!VAR4->VAR42)
    {
        FUN6(VAR4);
    }
    while (FUN7(VAR15, VAR21->VAR43))
    {
        (void)VAR14;
        FUN4("" VAR41 "" VAR41 "" VAR41 "", VAR14++, VAR5, VAR15, VAR8.VAR35, VAR7, VAR4->VAR44, VAR21->VAR45);
        VAR13 = FUN8(VAR4, VAR46, NULL);
        if (VAR13 < 0)
        {
            fprintf(VAR47, ""
                            "" VAR41 "" VAR41 "" VAR41 "",
                    VAR5, VAR15, VAR8.VAR35, VAR7, VAR4->VAR44);
            return VAR13;
        }
    }
    if (!VAR4->VAR42 || !VAR21->VAR39)
    {
        if (!VAR21->VAR48[VAR15])
        {
            if (FUN9((void *)VAR8.VAR35, VAR7) && FUN10((void *)VAR8.VAR35, VAR7) == VAR7)
            {
                RDMACompress VAR49 = {
                    .VAR38 = VAR6,
                    .VAR50 = 0,
                    .VAR51 = VAR5,
                    .VAR7 = VAR7,
                };
                VAR29.VAR30 = sizeof(VAR49);
                VAR29.VAR27 = VAR52;
                FUN4("" VAR41 ""
                         "" VAR53 "",
                         VAR15, VAR8.VAR7, VAR5, VAR6);
                FUN11(&VAR49);
                VAR13 = FUN12(VAR4, &VAR29, (VAR17 *)&VAR49, NULL, NULL, NULL);
                if (VAR13 < 0)
                {
                    return -VAR54;
                }
                FUN13(VAR2, VAR8.VAR7, true);
                return 1;
            }
            VAR23.VAR5 = VAR5;
            if (VAR21->VAR39)
            {
                VAR23.VAR55.VAR6 = VAR6;
            }
            else
            {
                VAR23.VAR55.VAR15 = VAR15;
            }
            VAR23.VAR16 = VAR16;
            FUN4("" VAR41 ""
                     "" VAR53 "",
                     VAR15, VAR8.VAR7, VAR5, VAR6);
            FUN14(&VAR23);
            VAR13 = FUN12(VAR4, &VAR29, (VAR17 *)&VAR23, &VAR26, &VAR12, NULL);
            if (VAR13 < 0)
            {
                return VAR13;
            }
            if (FUN15(VAR4, VAR21, (VAR17 *)VAR8.VAR35, &VAR8.VAR56, NULL, VAR15, VAR18, VAR19))
            {
                fprintf(VAR47, "");
                return -VAR57;
            }
            VAR25 = (VAR24 *)VAR4->VAR58[VAR12].VAR59;
            FUN16(VAR25);
            FUN4(""
                     "" VAR41 "",
                     VAR21->VAR48[VAR15], VAR25->VAR60, VAR15);
            VAR21->VAR48[VAR15] = VAR25->VAR60;
            VAR21->VAR61 = VAR25->VAR62;
        }
        else
        {
            if (FUN15(VAR4, VAR21, (VAR17 *)VAR8.VAR35, &VAR8.VAR56, NULL, VAR15, VAR18, VAR19))
            {
                fprintf(VAR47, "");
                return -VAR57;
            }
        }
        VAR9.VAR63.VAR4.VAR60 = VAR21->VAR48[VAR15];
    }
    else
    {
        VAR9.VAR63.VAR4.VAR60 = VAR21->VAR64;
        if (FUN15(VAR4, VAR21, (VAR17 *)VAR8.VAR35, &VAR8.VAR56, NULL, VAR15, VAR18, VAR19))
        {
            fprintf(VAR47, "");
            return -VAR57;
        }
    }
    VAR9.VAR65 = FUN17(VAR46, VAR5, VAR15);
    VAR9.VAR66 = VAR67;
    VAR9.VAR68 = VAR69;
    VAR9.VAR70 = &VAR8;
    VAR9.VAR71 = 1;
    VAR9.VAR63.VAR4.VAR72 = VAR21->VAR61 + (VAR6 - VAR21->VAR38);
    FUN18("" VAR41 ""
              "" VAR73 "",
              VAR15, VAR8.VAR35, VAR9.VAR63.VAR4.VAR72, VAR8.VAR7);
    VAR13 = FUN19(VAR4->VAR74, &VAR9, &VAR11);
    if (VAR13 == VAR75)
    {
        FUN4("");
        VAR13 = FUN8(VAR4, VAR46, NULL);
        if (VAR13 < 0)
        {
            fprintf(VAR47, ""
                            "",
                    VAR13);
            return VAR13;
        }
        goto VAR34;
    }
    else if (VAR13 > 0)
    {
        FUN20("");
        return -VAR13;
    }
    FUN21(VAR15, VAR21->VAR43);
    FUN13(VAR2, VAR8.VAR7, false);
    VAR4->VAR76++;
    return 0;
}