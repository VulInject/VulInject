static void FUN1(ram_addr_t VAR1, const char *VAR2, const char *VAR3, const char *VAR4, const char *VAR5, const char *VAR6, const struct VAR7 *VAR7)
{
    VAR8 *VAR9;
    char *VAR10;
    VAR11 *VAR12;
    int VAR13, VAR14;
    unsigned int VAR15;
    ram_addr_t VAR16, VAR17;
    long VAR18, VAR19;
    VAR20 *VAR21, *VAR22, *VAR23;
    VAR24 *VAR25;
    VAR26 *VAR27;
    int VAR28;
    VAR29 *VAR30[VAR31 * VAR32];
    VAR29 *VAR33[VAR34];
    void *VAR35;
    VAR36 *VAR37;
    VAR14 = (VAR3 != NULL);
    if (!VAR6)
        VAR6 = VAR7->VAR38;
    VAR9 = FUN2(VAR6);
    if (!VAR9)
    {
        fprintf(VAR39, "");
        FUN3(1);
    }
    VAR25 = FUN4(VAR40, VAR9);
    VAR9->VAR41 = FUN5(VAR25);
    FUN6(VAR9->VAR41, 1ULL);
    VAR25 = FUN4(VAR42, VAR9);
    VAR9->VAR43 = FUN5(VAR25);
    FUN6(VAR9->VAR43, 1ULL);
    VAR25 = FUN4(VAR44, VAR9);
    VAR9->VAR45 = FUN5(VAR25);
    FUN6(VAR9->VAR45, 1ULL);
    VAR37 = FUN7(sizeof(VAR36));
    VAR37->VAR9 = VAR9;
    VAR37->VAR46 = VAR7->VAR47 + 0x40ULL;
    FUN8(VAR48, VAR37);
    FUN9(VAR37);
    VAR9->VAR49 = VAR7->VAR47 + 0x20ULL;
    VAR9->VAR50 = VAR9->VAR49 + 4;
    VAR16 = FUN10(VAR1);
    FUN11(0, VAR1, VAR16);
    VAR17 = FUN10(VAR51);
    FUN11(VAR7->VAR47, (VAR51 + VAR52) & VAR53, VAR17 | VAR54);
    if (VAR55 == NULL)
        VAR55 = VAR56;
    VAR10 = FUN12(VAR57, VAR55);
    if (VAR10)
    {
        VAR13 = FUN13(VAR10, VAR7->VAR47 - VAR58, NULL, NULL, NULL);
        if (VAR13 < 0)
        {
            VAR13 = FUN14(VAR10, VAR7->VAR47, (VAR51 + VAR52) & VAR53);
        }
        FUN15(VAR10);
    }
    else
    {
        VAR13 = -1;
    }
    if (VAR13 < 0)
    {
        fprintf(VAR39, "", VAR55);
        FUN3(1);
    }
    VAR19 = 0;
    VAR18 = 0;
    if (VAR14)
    {
        VAR19 = FUN13(VAR3, 0, NULL, NULL, NULL);
        if (VAR19 < 0)
            VAR19 = FUN16(VAR3, VAR59, VAR60 - VAR59);
        if (VAR19 < 0)
            VAR19 = FUN14(VAR3, VAR59, VAR60 - VAR59);
        if (VAR19 < 0)
        {
            fprintf(VAR39, "", VAR3);
            FUN3(1);
        }
        if (VAR5)
        {
            VAR18 = FUN14(VAR5, VAR61, VAR60 - VAR61);
            if (VAR18 < 0)
            {
                fprintf(VAR39, "", VAR5);
                FUN3(1);
            }
        }
        if (VAR18 > 0)
        {
            for (VAR15 = 0; VAR15 < 64 * VAR52; VAR15 += VAR52)
            {
                if (FUN17(VAR59 + VAR15) == 0x48647253)
                {
                    FUN18(VAR59 + VAR15 + 16, VAR61);
                    FUN18(VAR59 + VAR15 + 20, VAR18);
                    break;
                }
            }
        }
    }
    VAR27 = FUN19(VAR62, VAR9, VAR63);
    VAR21 = FUN20(VAR64, VAR65, VAR27, &VAR22, &VAR23);
    VAR66 = VAR67;
    FUN21(VAR21, 0, 0);
    FUN22(VAR21, -1);
    VAR15 = 0;
    if (VAR7->VAR68)
    {
        FUN23(VAR7->VAR68, 0, NULL, 115200, VAR69[VAR15], 1);
        VAR15++;
    }
    for (; VAR15 < VAR70; VAR15++)
    {
        if (VAR69[VAR15])
        {
            FUN24(VAR71[VAR15], NULL, 115200, VAR69[VAR15]);
        }
    }
    for (VAR15 = 0; VAR15 < VAR72; VAR15++)
    {
        if (VAR73[VAR15])
        {
            FUN25(VAR74[VAR15], NULL, VAR73[VAR15]);
        }
    }
    for (VAR15 = 0; VAR15 < VAR75; VAR15++)
        FUN26(&VAR76[VAR15], "", NULL);
    if (FUN27(VAR77) >= VAR31)
    {
        fprintf(VAR39, "");
        FUN3(1);
    }
    for (VAR15 = 0; VAR15 < VAR31 * VAR32; VAR15++)
    {
        VAR28 = FUN28(VAR77, VAR15 / VAR32, VAR15 % VAR32);
        if (VAR28 != -1)
            VAR30[VAR15] = VAR78[VAR28].VAR79;
        else
            VAR30[VAR15] = NULL;
    }
    FUN29(VAR21, VAR30, 1);
    FUN30(NULL, NULL, 0x60);
    for (VAR15 = 0; VAR15 < VAR34; VAR15++)
    {
        VAR28 = FUN28(VAR80, 0, VAR15);
        if (VAR28 != -1)
            VAR33[VAR15] = VAR78[VAR28].VAR79;
        else
            VAR33[VAR15] = NULL;
    }
    VAR81 = FUN31(NULL, 2, 0, 0x3f0, VAR33);
    VAR12 = FUN32(NULL, 0, 0x0074, VAR82, 59);
    FUN33(VAR12, VAR82, "", VAR1, VAR2, VAR59, VAR19, VAR4, VAR61, VAR18, 0, VAR83, VAR84, VAR85, (VAR86 *)&VAR76[0].VAR87);
    VAR35 = FUN34(VAR88, VAR88 + 1, 0, 0);
    FUN35(VAR35, VAR89, 1);
    FUN36(VAR35, VAR90, (VAR91)VAR60);
    FUN37(VAR35, VAR92, VAR7->VAR93);
    FUN35(VAR35, VAR94, VAR59);
    FUN35(VAR35, VAR95, VAR19);
    if (VAR4)
    {
        FUN35(VAR35, VAR96, VAR97);
        FUN38(VAR97, VAR52, VAR4);
    }
    else
    {
        FUN35(VAR35, VAR96, 0);
    }
    FUN35(VAR35, VAR98, VAR61);
    FUN35(VAR35, VAR99, VAR18);
    FUN37(VAR35, VAR100, VAR2[0]);
    FUN39(VAR101, VAR35);
}