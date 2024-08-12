static void FUN1(int VAR1, int VAR2, VAR3 *VAR4, const char *VAR5, const char *VAR6, const char *VAR7, const char *VAR8, enum mainstone_model_e VAR9, int VAR10)
{
    uint32_t VAR11 = 0x04000000;
    uint32_t VAR12 = 0x00800000;
    struct VAR13 *VAR14;
    VAR15 *VAR16;
    int VAR17;
    if (!VAR8)
        VAR8 = "";
    if (VAR1 < VAR11 + VAR12 + VAR18)
    {
        fprintf(VAR19, "", VAR11 + VAR12 + VAR18);
        FUN2(1);
    }
    VAR14 = FUN3(VAR11, VAR4, VAR8);
    FUN4(0, VAR12, FUN5(VAR12) | VAR20);
    VAR14->VAR21->VAR22[15] = VAR23;
    VAR17 = FUN6(VAR24, 0, 0);
    if (VAR17 == -1)
    {
        fprintf(VAR19, ""
                        "");
        FUN2(1);
    }
    if (!FUN7(VAR25, VAR11 + VAR18, VAR26[VAR17].VAR27, 256 * 1024, 128, 4, 0, 0, 0, 0))
    {
        fprintf(VAR19, "");
        FUN2(1);
    }
    VAR17 = FUN6(VAR24, 0, 1);
    if (VAR17 == -1)
    {
        fprintf(VAR19, ""
                        "");
        FUN2(1);
    }
    if (!FUN7(VAR28, VAR11 + VAR18, VAR26[VAR17].VAR27, 256 * 1024, 128, 4, 0, 0, 0, 0))
    {
        fprintf(VAR19, "");
        FUN2(1);
    }
    VAR16 = FUN8(VAR14, VAR29, VAR30);
    FUN9(VAR14->VAR31, NULL, VAR16[VAR32]);
    FUN10(&VAR33[0], VAR34, VAR16[VAR35]);
    FUN11(VAR14->VAR21, VAR11, VAR5, VAR6, VAR7, VAR10, VAR23);
}