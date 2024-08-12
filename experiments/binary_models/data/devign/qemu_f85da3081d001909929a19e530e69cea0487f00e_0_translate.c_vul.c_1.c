void FUN1(void)
{
    int VAR1;
    static const char *const VAR2[24] = {"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""};
    static const char *const VAR3[32] = {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
    };
    for (VAR1 = 0; VAR1 < 24; VAR1++)
    {
        VAR4[VAR1] = FUN2(VAR5, FUN3(VAR6, VAR7[VAR1]), VAR2[VAR1]);
    }
    memcpy(VAR4 + 24, VAR4 + 8, 8 * sizeof(VAR8));
    VAR9 = FUN2(VAR5, FUN3(VAR6, VAR10), "");
    VAR11 = FUN2(VAR5, FUN3(VAR6, VAR12), "");
    VAR13 = FUN2(VAR5, FUN3(VAR6, VAR14), "");
    VAR15 = FUN2(VAR5, FUN3(VAR6, VAR16), "");
    VAR17 = FUN2(VAR5, FUN3(VAR6, VAR18), "");
    VAR19 = FUN2(VAR5, FUN3(VAR6, VAR20), "");
    VAR21 = FUN2(VAR5, FUN3(VAR6, VAR22), "");
    VAR23 = FUN2(VAR5, FUN3(VAR6, VAR24), "");
    VAR25 = FUN2(VAR5, FUN3(VAR6, VAR26), "");
    VAR27 = FUN2(VAR5, FUN3(VAR6, VAR28), "");
    VAR29 = FUN2(VAR5, FUN3(VAR6, VAR30), "");
    VAR31 = FUN2(VAR5, FUN3(VAR6, VAR32), "");
    VAR33 = FUN2(VAR5, FUN3(VAR6, VAR34), "");
    VAR35 = FUN2(VAR5, FUN3(VAR6, VAR36), "");
    VAR37 = FUN2(VAR5, FUN3(VAR6, VAR38), "");
    VAR39 = FUN2(VAR5, FUN3(VAR6, VAR40), "");
    VAR41 = FUN2(VAR5, FUN3(VAR6, VAR42), "");
    VAR43 = FUN2(VAR5, FUN3(VAR6, VAR44), "");
    VAR45 = FUN2(VAR5, FUN3(VAR6, VAR46), "");
    VAR47 = FUN2(VAR5, FUN3(VAR6, VAR48), "");
    for (VAR1 = 0; VAR1 < 32; VAR1++)
        VAR49[VAR1] = FUN2(VAR5, FUN3(VAR6, VAR50[VAR1]), VAR3[VAR1]);
}