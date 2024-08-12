static VAR1 FUN1(VAR2 *VAR3)
{
    int VAR4, VAR5 = 0, VAR6 = 1920, VAR7 = 1088;
    int64_t VAR8, VAR9 = 0;
    cl_int VAR10;
    size_t VAR11;
    char *VAR12;
    int *VAR13;
    int VAR14 = VAR6 * VAR7 * sizeof(char);
    int VAR15 = sizeof(VAR16) * 128;
    cl_mem VAR17, VAR18, VAR19;
    cl_kernel VAR20 = NULL;
    cl_program VAR21 = NULL;
    size_t VAR22[2] = {16, 16};
    size_t VAR23[2] = {(VAR24)VAR6, (VAR24)VAR7};
    if (!(VAR12 = FUN2(VAR14)) || !(VAR13 = FUN2(VAR15)))
    {
        FUN3(NULL, VAR25, "");
        VAR9 = FUN4(VAR26);
        goto VAR27;
    }
    FUN5((int *)VAR12, VAR14 / 4);
    FUN5(VAR13, VAR15 / 4);
    FUN6(VAR17, VAR28, VAR15);
    FUN6(VAR18, VAR28, VAR14);
    FUN6(VAR19, VAR29, VAR14);
    VAR11 = strlen(VAR30);
    VAR21 = FUN7(VAR3->VAR31, 1, &VAR30, &VAR11, &VAR10);
    if (VAR10 != VAR32 || !VAR21)
    {
        FUN3(NULL, VAR25, "");
        VAR9 = VAR33;
        goto VAR27;
    }
    VAR10 = FUN8(VAR21, 1, &(VAR3->VAR34), NULL, NULL, NULL);
    if (VAR10 != VAR32)
    {
        FUN3(NULL, VAR25, "");
        VAR9 = VAR33;
        goto VAR27;
    }
    VAR20 = FUN9(VAR21, "", &VAR10);
    if (VAR10 != VAR32)
    {
        FUN3(NULL, VAR25, "");
        VAR9 = VAR33;
        goto VAR27;
    }
    FUN10(VAR35, VAR3->VAR36, VAR18, VAR37, 0, VAR14, VAR12, 0, NULL, NULL);
    FUN10(VAR35, VAR3->VAR36, VAR17, VAR37, 0, VAR15, VAR13, 0, NULL, NULL);
    FUN10(VAR38, VAR20, VAR5++, sizeof(VAR39), &VAR18);
    FUN10(VAR38, VAR20, VAR5++, sizeof(VAR39), &VAR19);
    FUN10(VAR38, VAR20, VAR5++, sizeof(VAR39), &VAR17);
    FUN10(VAR38, VAR20, VAR5++, sizeof(VAR40), &VAR6);
    FUN10(VAR38, VAR20, VAR5++, sizeof(VAR40), &VAR7);
    VAR8 = FUN11();
    for (VAR4 = 0; VAR4 < VAR41; VAR4++)
        FUN10(VAR42, VAR3->VAR36, VAR20, 2, NULL, VAR23, VAR22, 0, NULL, NULL);
    FUN12(VAR3->VAR36);
    VAR9 = (FUN11() - VAR8) / VAR41;
VAR27:
    if (VAR20)
        FUN13(VAR20);
    if (VAR21)
        FUN14(VAR21);
    if (VAR18)
        FUN15(VAR18);
    if (VAR19)
        FUN15(VAR19);
    if (VAR17)
        FUN15(VAR17);
    FUN16(VAR12);
    FUN16(VAR13);
    return VAR9;
}