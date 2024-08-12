static float FUN1(struct VAR1 *VAR2, VAR3 *VAR4, const float *VAR5, const float *VAR6, int VAR7, int VAR8, int VAR9, const float VAR10, const float VAR11, int *VAR12)
{
    const float VAR13 = VAR14[VAR15 - VAR8 + VAR16 - VAR17];
    const float VAR18 = VAR19[VAR15 + VAR8 - VAR16 + VAR17];
    int VAR20;
    float VAR21 = 0;
    int VAR22 = 0;
    int VAR23, VAR24, VAR25, VAR26;
    VAR27 *VAR28 = (VAR27 *)VAR29[VAR9 - 1];
    float *VAR30 = (float *)VAR31[VAR9 - 1];
    for (VAR20 = 0; VAR20 < VAR7; VAR20 += 4)
    {
        const float *VAR32;
        int VAR33;
        float *VAR34 = (float *)&VAR5[VAR20];
        float VAR35, VAR36, VAR37, VAR38;
        int VAR39, VAR40, VAR41, VAR42, VAR43;
        VAR23 = VAR6[VAR20] * VAR13 + VAR44;
        VAR24 = VAR6[VAR20 + 1] * VAR13 + VAR44;
        VAR25 = VAR6[VAR20 + 2] * VAR13 + VAR44;
        VAR26 = VAR6[VAR20 + 3] * VAR13 + VAR44;
        VAR45 volatile(""
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
                         : [VAR23] ""(VAR23), [VAR24] ""(VAR24), [VAR25] ""(VAR25), [VAR26] ""(VAR26), [VAR39] ""(VAR39), [VAR40] ""(VAR40), [VAR41] ""(VAR41), [VAR42] ""(VAR42), [VAR43] ""(VAR43));
        VAR33 = VAR23;
        VAR33 *= 3;
        VAR33 += VAR24;
        VAR33 *= 3;
        VAR33 += VAR25;
        VAR33 *= 3;
        VAR33 += VAR26;
        VAR22 += VAR28[VAR33];
        VAR22 += VAR46[VAR33];
        VAR32 = &VAR30[VAR33 * 4];
        VAR45 volatile(""
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
                         : [VAR35] ""(VAR35), [VAR36] ""(VAR36), [VAR37] ""(VAR37), [VAR38] ""(VAR38)
                         : [VAR34] ""(VAR34), [VAR32] ""(VAR32), [VAR18] ""(VAR18)
                         : "", "", "", "", "");
        VAR21 += VAR35 * VAR35 + VAR36 * VAR36 + VAR37 * VAR37 + VAR38 * VAR38;
    }
    if (VAR12)
        *VAR12 = VAR22;
    return VAR21 * VAR10 + VAR22;
}