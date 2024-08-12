static void FUN1(VAR1 *VAR2, unsigned int VAR3, unsigned int VAR4)
{
    VAR5 *VAR6 = &VAR2->VAR7[VAR3];
    int32_t VAR8[VAR9 + VAR10];
    int32_t VAR11[VAR9 + VAR12];
    VAR13 *VAR14 = &VAR2->VAR15[VAR4].VAR16[VAR17];
    VAR13 *VAR18 = &VAR2->VAR15[VAR4].VAR16[VAR19];
    unsigned int VAR20 = VAR14->VAR21;
    int32_t VAR22 = FUN2(VAR6->VAR23[VAR4]);
    int VAR24 = VAR9;
    int VAR25;
    memcpy(&VAR8[VAR24], VAR14->VAR26, VAR10 * sizeof(VAR27));
    memcpy(&VAR11[VAR24], VAR18->VAR26, VAR12 * sizeof(VAR27));
    for (VAR25 = 0; VAR25 < VAR6->VAR28; VAR25++)
    {
        int32_t VAR29 = VAR2->VAR30[VAR25 + VAR6->VAR31][VAR4];
        unsigned int VAR32;
        int64_t VAR33 = 0;
        int32_t VAR34;
        for (VAR32 = 0; VAR32 < VAR14->VAR32; VAR32++)
            VAR33 += (VAR35)VAR8[VAR24 + VAR32] * VAR14->VAR36[VAR32];
        for (VAR32 = 0; VAR32 < VAR18->VAR32; VAR32++)
            VAR33 += (VAR35)VAR11[VAR24 + VAR32] * VAR18->VAR36[VAR32];
        VAR33 = VAR33 >> VAR20;
        VAR34 = (VAR33 + VAR29) & VAR22;
        --VAR24;
        VAR8[VAR24] = VAR34;
        VAR11[VAR24] = VAR34 - VAR33;
        VAR2->VAR30[VAR25 + VAR6->VAR31][VAR4] = VAR34;
    }
    memcpy(VAR14->VAR26, &VAR8[VAR24], VAR10 * sizeof(VAR27));
    memcpy(VAR18->VAR26, &VAR11[VAR24], VAR12 * sizeof(VAR27));
}