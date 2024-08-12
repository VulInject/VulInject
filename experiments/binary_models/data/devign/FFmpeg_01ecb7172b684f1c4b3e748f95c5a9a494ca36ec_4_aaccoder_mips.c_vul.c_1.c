static float FUN1(struct VAR1 *VAR2, VAR3 *VAR4, const float *VAR5, const float *VAR6, int VAR7, int VAR8, int VAR9, const float VAR10, const float VAR11, int *VAR12)
{
    const float VAR13 = VAR14[VAR15 - VAR8 + VAR16 - VAR17];
    const float VAR18 = VAR19[VAR15 + VAR8 - VAR16 + VAR17];
    int VAR20;
    float VAR21 = 0;
    int VAR22, VAR23, VAR24, VAR25;
    int VAR26 = 0;
    VAR27 *VAR28 = (VAR27 *)VAR29[VAR9 - 1];
    float *VAR30 = (float *)VAR31[VAR9 - 1];
    for (VAR20 = 0; VAR20 < VAR7; VAR20 += 4)
    {
        const float *VAR32, *VAR33;
        int VAR34, VAR35;
        int VAR36, VAR37, VAR38, VAR39;
        int *VAR40 = (int *)&VAR5[VAR20];
        float *VAR41 = (float *)&VAR5[VAR20];
        float VAR42, VAR43, VAR44, VAR45;
        int VAR46, VAR47, VAR48, VAR49, VAR50;
        VAR22 = VAR6[VAR20] * VAR13 + VAR51;
        VAR23 = VAR6[VAR20 + 1] * VAR13 + VAR51;
        VAR24 = VAR6[VAR20 + 2] * VAR13 + VAR51;
        VAR25 = VAR6[VAR20 + 3] * VAR13 + VAR51;
        VAR52 volatile(""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         : [VAR22] ""(VAR22), [VAR23] ""(VAR23), [VAR24] ""(VAR24), [VAR25] ""(VAR25), [VAR36] ""(VAR36), [VAR37] ""(VAR37), [VAR38] ""(VAR38), [VAR39] ""(VAR39), [VAR46] ""(VAR46), [VAR47] ""(VAR47), [VAR48] ""(VAR48), [VAR49] ""(VAR49), [VAR50] ""(VAR50)
                         : [VAR40] ""(VAR40)
                         : "");
        VAR34 = 13 * VAR22;
        VAR34 += VAR23;
        VAR35 = 13 * VAR24;
        VAR35 += VAR25;
        VAR26 += VAR28[VAR34];
        VAR26 += VAR28[VAR35];
        VAR26 += VAR53[VAR34];
        VAR26 += VAR53[VAR35];
        VAR32 = &VAR30[VAR34 * 2];
        VAR33 = &VAR30[VAR35 * 2];
        VAR52 volatile(""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         : [VAR42] ""(VAR42), [VAR43] ""(VAR43), [VAR44] ""(VAR44), [VAR45] ""(VAR45)
                         : [VAR41] ""(VAR41), [VAR32] ""(VAR32), [VAR33] ""(VAR33), [VAR18] ""(VAR18)
                         : "", "", "", "", "");
        VAR21 += VAR42 * VAR42 + VAR43 * VAR43 + VAR44 * VAR44 + VAR45 * VAR45;
    }
    if (VAR12)
        *VAR12 = VAR26;
    return VAR21 * VAR10 + VAR26;
}