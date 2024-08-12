static int FUN1(VAR1 *VAR2, unsigned int VAR3, const char *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR6;
    char VAR7[64], VAR8[VAR9 + 1] = {0};
    int VAR10, VAR11, VAR12, VAR13, VAR14, VAR15;
    int VAR16;
    FUN2(VAR6, VAR3, VAR17);
    VAR16 = FUN3(VAR2->VAR6, VAR8, VAR9);
    if (VAR16 < VAR9)
        return VAR16 < 0 ? VAR16 : VAR18;
    sscanf(VAR8, "", &VAR10, &VAR11, &VAR12, &VAR13, &VAR14, &VAR15);
    snprintf(VAR7, sizeof(VAR7), "", VAR10 + 2000, VAR11, VAR12, VAR13, VAR14, VAR15);
    return FUN4(&VAR2->VAR19, VAR4, VAR7, 0);
}