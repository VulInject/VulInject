static void FUN1(ram_addr_t VAR1, const char *VAR2, const char *VAR3, const char *VAR4, const char *VAR5, const char *VAR6, const struct VAR7 *VAR7)
{
    VAR8 *VAR9;
    VAR10 *VAR11;
    unsigned int VAR12;
    long VAR13, VAR14;
    VAR15 *VAR16, *VAR17, *VAR18;
    VAR19 *VAR20;
    VAR21 *VAR22[VAR23 * VAR24];
    VAR21 *VAR25[VAR26];
    void *VAR27;
    VAR9 = FUN2(VAR6, VAR7);
    FUN3(0, VAR1);
    FUN4(VAR7->VAR28, VAR29);
    VAR20 = FUN5(VAR30, VAR9, VAR31);
    VAR16 = FUN6(VAR32, VAR33, VAR20, &VAR17, &VAR18);
    VAR34 = VAR35;
    FUN7(VAR16, 0, 0);
    FUN8(VAR16, -1);
    VAR12 = 0;
    if (VAR7->VAR36)
    {
        FUN9(VAR7->VAR36, 0, NULL, 115200, VAR37[VAR12], 1);
        VAR12++;
    }
    for (; VAR12 < VAR38; VAR12++)
    {
        if (VAR37[VAR12])
        {
            FUN10(VAR12, VAR37[VAR12]);
        }
    }
    for (VAR12 = 0; VAR12 < VAR39; VAR12++)
    {
        if (VAR40[VAR12])
        {
            FUN11(VAR12, VAR40[VAR12]);
        }
    }
    for (VAR12 = 0; VAR12 < VAR41; VAR12++)
        FUN12(&VAR42[VAR12], "", NULL);
    if (FUN13(VAR43) >= VAR23)
    {
        fprintf(VAR44, "");
        FUN14(1);
    }
    for (VAR12 = 0; VAR12 < VAR23 * VAR24; VAR12++)
    {
        VAR22[VAR12] = FUN15(VAR43, VAR12 / VAR24, VAR12 % VAR24);
    }
    FUN16(VAR16, VAR22, 1);
    FUN17("");
    for (VAR12 = 0; VAR12 < VAR26; VAR12++)
    {
        VAR25[VAR12] = FUN15(VAR45, 0, VAR12);
    }
    FUN18(VAR25);
    VAR11 = FUN19(0x0074, VAR46, 59);
    VAR13 = 0;
    VAR14 = FUN20(VAR3, VAR5, VAR47, &VAR13);
    FUN21(VAR11, VAR46, "", VAR1, VAR2, VAR48, VAR14, VAR4, VAR49, VAR13, 0, VAR50, VAR51, VAR52, (VAR53 *)&VAR42[0].VAR54);
    VAR27 = FUN22(VAR55, VAR55 + 1, 0, 0);
    FUN23(VAR27, VAR56, 1);
    FUN24(VAR27, VAR57, (VAR58)VAR47);
    FUN25(VAR27, VAR59, VAR7->VAR60);
    FUN23(VAR27, VAR61, VAR48);
    FUN23(VAR27, VAR62, VAR14);
    if (VAR4)
    {
        FUN23(VAR27, VAR63, VAR64);
        FUN26(VAR64, VAR65, VAR4);
    }
    else
    {
        FUN23(VAR27, VAR63, 0);
    }
    FUN23(VAR27, VAR66, VAR49);
    FUN23(VAR27, VAR67, VAR13);
    FUN25(VAR27, VAR68, VAR2[0]);
    FUN25(VAR27, VAR69, VAR50);
    FUN25(VAR27, VAR70, VAR51);
    FUN25(VAR27, VAR71, VAR52);
    FUN27(VAR72, VAR27);
}