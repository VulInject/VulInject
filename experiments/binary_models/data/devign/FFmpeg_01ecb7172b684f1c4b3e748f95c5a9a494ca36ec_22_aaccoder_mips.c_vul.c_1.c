static void FUN1(struct VAR1 *VAR2, VAR3 *VAR4, const float *VAR5, float *VAR6, const float *VAR7, int VAR8, int VAR9, int VAR10, const float VAR11, const float VAR12, int *VAR13, const float VAR14)
{
    const float VAR15 = VAR16[VAR17 - VAR9 + VAR18 - VAR19];
    const float VAR20 = VAR21[VAR17 + VAR9 - VAR18 + VAR19];
    int VAR22;
    int VAR23, VAR24, VAR25, VAR26;
    VAR27 *VAR28 = (VAR27 *)VAR29[VAR10 - 1];
    VAR30 *VAR31 = (VAR30 *)VAR32[VAR10 - 1];
    float *VAR33 = (float *)VAR34[VAR10 - 1];
    FUN2(VAR2->VAR35, VAR5, VAR8);
    VAR7 = VAR2->VAR35;
    for (VAR22 = 0; VAR22 < VAR8; VAR22 += 4)
    {
        int VAR36, VAR37, VAR38;
        int *VAR39 = (int *)&VAR5[VAR22];
        uint8_t VAR40;
        unsigned int VAR41;
        int VAR42, VAR43, VAR44, VAR45, VAR46;
        const float *VAR47;
        VAR23 = VAR7[VAR22] * VAR15 + VAR48;
        VAR24 = VAR7[VAR22 + 1] * VAR15 + VAR48;
        VAR25 = VAR7[VAR22 + 2] * VAR15 + VAR48;
        VAR26 = VAR7[VAR22 + 3] * VAR15 + VAR48;
        VAR49 volatile(""
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
                         ""
                         ""
                         : [VAR23] ""(VAR23), [VAR24] ""(VAR24), [VAR25] ""(VAR25), [VAR26] ""(VAR26), [VAR37] ""(VAR37), [VAR38] ""(VAR38), [VAR42] ""(VAR42), [VAR43] ""(VAR43), [VAR44] ""(VAR44), [VAR45] ""(VAR45), [VAR46] ""(VAR46)
                         : [VAR39] ""(VAR39)
                         : "");
        VAR36 = VAR23;
        VAR36 *= 3;
        VAR36 += VAR24;
        VAR36 *= 3;
        VAR36 += VAR25;
        VAR36 *= 3;
        VAR36 += VAR26;
        VAR41 = (VAR31[VAR36] << VAR38) | (VAR37 & ((1 << VAR38) - 1));
        VAR40 = VAR28[VAR36] + VAR38;
        FUN3(VAR4, VAR40, VAR41);
        if (VAR6)
        {
            VAR47 = &VAR33[VAR36 * 4];
            VAR6[VAR22 + 0] = FUN4(VAR47[0] * VAR20, VAR5[VAR22 + 0]);
            VAR6[VAR22 + 1] = FUN4(VAR47[1] * VAR20, VAR5[VAR22 + 1]);
            VAR6[VAR22 + 2] = FUN4(VAR47[2] * VAR20, VAR5[VAR22 + 2]);
            VAR6[VAR22 + 3] = FUN4(VAR47[3] * VAR20, VAR5[VAR22 + 3]);
        }
    }
}