static float FUN1(struct VAR1 *VAR2, VAR3 *VAR4, const float *VAR5, const float *VAR6, int VAR7, int VAR8, int VAR9, const float VAR10, const float VAR11, int *VAR12)
{
    const float VAR13 = VAR14[VAR15 - VAR8 + VAR16 - VAR17];
    const float VAR18 = VAR19[VAR15 + VAR8 - VAR16 + VAR17];
    const float VAR20 = 165140.0f * VAR18;
    int VAR21;
    float VAR22 = 0;
    int VAR23, VAR24, VAR25, VAR26;
    int VAR27 = 0;
    VAR28 *VAR29 = (VAR28 *)VAR30[VAR9 - 1];
    float *VAR31 = (float *)VAR32[VAR9 - 1];
    for (VAR21 = 0; VAR21 < VAR7; VAR21 += 4)
    {
        const float *VAR33, *VAR34;
        int VAR35, VAR36;
        float VAR37, VAR38, VAR39, VAR40;
        float VAR41, VAR42, VAR43, VAR44;
        int VAR45, VAR46, VAR47, VAR48;
        int VAR49, VAR50, VAR51, VAR52;
        int VAR53, VAR54;
        VAR23 = VAR6[VAR21] * VAR13 + VAR55;
        VAR24 = VAR6[VAR21 + 1] * VAR13 + VAR55;
        VAR25 = VAR6[VAR21 + 2] * VAR13 + VAR55;
        VAR26 = VAR6[VAR21 + 3] * VAR13 + VAR55;
        VAR56 volatile(""
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
                         : [VAR23] ""(VAR23), [VAR24] ""(VAR24), [VAR25] ""(VAR25), [VAR26] ""(VAR26), [VAR45] ""(VAR45), [VAR46] ""(VAR46), [VAR47] ""(VAR47), [VAR48] ""(VAR48), [VAR49] ""(VAR49), [VAR50] ""(VAR50), [VAR51] ""(VAR51), [VAR52] ""(VAR52), [VAR53] ""(VAR53), [VAR54] ""(VAR54));
        VAR35 = 17 * VAR23;
        VAR35 += VAR24;
        VAR36 = 17 * VAR25;
        VAR36 += VAR26;
        VAR27 += VAR29[VAR35];
        VAR27 += VAR57[VAR35];
        VAR33 = &VAR31[VAR35 * 2];
        VAR27 += VAR29[VAR36];
        VAR27 += VAR57[VAR36];
        VAR34 = &VAR31[VAR36 * 2];
        VAR27 += (FUN2(VAR49) * 2 - 3) & (-VAR45);
        VAR27 += (FUN2(VAR50) * 2 - 3) & (-VAR46);
        VAR27 += (FUN2(VAR51) * 2 - 3) & (-VAR47);
        VAR27 += (FUN2(VAR52) * 2 - 3) & (-VAR48);
        VAR37 = FUN3(VAR5[VAR21]);
        VAR38 = FUN3(VAR5[VAR21 + 1]);
        VAR39 = FUN3(VAR5[VAR21 + 2]);
        VAR40 = FUN3(VAR5[VAR21 + 3]);
        if (VAR45)
        {
            if (VAR37 >= VAR20)
            {
                VAR41 = VAR37 - VAR20;
            }
            else
            {
                VAR41 = VAR37 - VAR49 * FUN4(VAR49) * VAR18;
            }
        }
        else
            VAR41 = VAR37 - VAR33[0] * VAR18;
        if (VAR46)
        {
            if (VAR38 >= VAR20)
            {
                VAR42 = VAR38 - VAR20;
            }
            else
            {
                VAR42 = VAR38 - VAR50 * FUN4(VAR50) * VAR18;
            }
        }
        else
            VAR42 = VAR38 - VAR33[1] * VAR18;
        if (VAR47)
        {
            if (VAR39 >= VAR20)
            {
                VAR43 = VAR39 - VAR20;
            }
            else
            {
                VAR43 = VAR39 - VAR51 * FUN4(VAR51) * VAR18;
            }
        }
        else
            VAR43 = VAR39 - VAR34[0] * VAR18;
        if (VAR48)
        {
            if (VAR40 >= VAR20)
            {
                VAR44 = VAR40 - VAR20;
            }
            else
            {
                VAR44 = VAR40 - VAR52 * FUN4(VAR52) * VAR18;
            }
        }
        else
            VAR44 = VAR40 - VAR34[1] * VAR18;
        VAR22 += VAR41 * VAR41 + VAR42 * VAR42 + VAR43 * VAR43 + VAR44 * VAR44;
    }
    if (VAR12)
        *VAR12 = VAR27;
    return VAR22 * VAR10 + VAR27;
}