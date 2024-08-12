static int FUN1(VAR1 *VAR2, void *VAR3, int VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    const float *VAR9 = (const float *)VAR7->VAR10[0]->VAR11[VAR4];
    int VAR12 = (VAR7->VAR13 + 1) % 3;
    int VAR14 = (VAR7->VAR13 + 2) % 3;
    float *VAR15 = VAR7->VAR15[VAR4];
    VAR16 *VAR17 = VAR3;
    float *VAR18;
    float *VAR19;
    int VAR20, VAR21, VAR22;
    memset(VAR15, 0, sizeof(*VAR15) * VAR7->VAR23);
    VAR18 = VAR7->VAR18[VAR4] + VAR7->VAR24 * VAR7->VAR25;
    memset(VAR18, 0, sizeof(*VAR18) * VAR7->VAR23);
    VAR7->VAR26->FUN2(VAR18 + VAR7->VAR27, VAR9, VAR7->VAR28, FUN3(VAR7->VAR29, 4));
    FUN4();
    FUN5(VAR7->VAR30[VAR4], VAR18);
    VAR18[2 * VAR7->VAR27] = VAR18[1];
    VAR18[1] = 0;
    VAR22 = VAR7->VAR24;
    for (VAR21 = 0; VAR21 < VAR7->VAR31; VAR21++)
    {
        const int VAR32 = VAR21 * VAR7->VAR33;
        const VAR34 *VAR35 = VAR7->VAR35[VAR4 * !VAR7->VAR36] + VAR32;
        VAR18 = VAR7->VAR18[VAR4] + VAR22 * VAR7->VAR25;
        VAR7->FUN6(VAR15, VAR18, (const float *)VAR35, VAR7->VAR27);
        if (VAR22 == 0)
            VAR22 = VAR7->VAR31;
        VAR22--;
    }
    VAR15[1] = VAR15[2 * VAR7->VAR27];
    FUN5(VAR7->VAR37[VAR4], VAR15);
    VAR19 = (float *)VAR7->VAR38->VAR11[VAR4] + VAR12 * VAR7->VAR27;
    for (VAR20 = 0; VAR20 < VAR7->VAR27; VAR20++)
    {
        VAR19[VAR20] += VAR15[VAR20];
    }
    VAR19 = (float *)VAR7->VAR38->VAR11[VAR4] + VAR14 * VAR7->VAR27;
    memcpy(VAR19, VAR15 + VAR7->VAR27, VAR7->VAR27 * sizeof(*VAR19));
    VAR19 = (float *)VAR7->VAR38->VAR11[VAR4] + VAR7->VAR13 * VAR7->VAR27;
    if (VAR17)
    {
        float *VAR39 = (float *)VAR17->VAR11[VAR4];
        VAR7->VAR26->FUN2(VAR39, VAR19, VAR7->VAR40 * VAR7->VAR41, FUN3(VAR17->VAR29, 4));
        FUN4();
    }
    return 0;
}