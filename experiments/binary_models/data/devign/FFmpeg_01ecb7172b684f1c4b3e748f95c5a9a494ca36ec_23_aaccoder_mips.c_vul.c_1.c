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
    if (VAR10 < 11)
    {
        for (VAR22 = 0; VAR22 < VAR8; VAR22 += 4)
        {
            int VAR36, VAR37, VAR38, VAR39, VAR40, VAR41;
            int *VAR42 = (int *)&VAR5[VAR22];
            uint8_t VAR43;
            unsigned int VAR44;
            int VAR45, VAR46, VAR47, VAR48, VAR49;
            const float *VAR50, *VAR51;
            VAR23 = VAR7[VAR22] * VAR15 + VAR14;
            VAR24 = VAR7[VAR22 + 1] * VAR15 + VAR14;
            VAR25 = VAR7[VAR22 + 2] * VAR15 + VAR14;
            VAR26 = VAR7[VAR22 + 3] * VAR15 + VAR14;
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
                             : [VAR23] ""(VAR23), [VAR24] ""(VAR24), [VAR25] ""(VAR25), [VAR26] ""(VAR26), [VAR38] ""(VAR38), [VAR39] ""(VAR39), [VAR40] ""(VAR40), [VAR41] ""(VAR41), [VAR45] ""(VAR45), [VAR46] ""(VAR46), [VAR47] ""(VAR47), [VAR48] ""(VAR48), [VAR49] ""(VAR49)
                             : [VAR42] ""(VAR42)
                             : "");
            VAR36 = 17 * VAR23;
            VAR36 += VAR24;
            VAR37 = 17 * VAR25;
            VAR37 += VAR26;
            VAR44 = (VAR31[VAR36] << VAR39) | VAR38;
            VAR43 = VAR28[VAR36] + VAR39;
            FUN3(VAR4, VAR43, VAR44);
            VAR44 = (VAR31[VAR37] << VAR41) | VAR40;
            VAR43 = VAR28[VAR37] + VAR41;
            FUN3(VAR4, VAR43, VAR44);
            if (VAR6)
            {
                VAR50 = &VAR33[VAR36 * 2];
                VAR51 = &VAR33[VAR37 * 2];
                VAR6[VAR22 + 0] = FUN4(VAR50[0] * VAR20, VAR5[VAR22 + 0]);
                VAR6[VAR22 + 1] = FUN4(VAR50[1] * VAR20, VAR5[VAR22 + 1]);
                VAR6[VAR22 + 2] = FUN4(VAR51[0] * VAR20, VAR5[VAR22 + 2]);
                VAR6[VAR22 + 3] = FUN4(VAR51[1] * VAR20, VAR5[VAR22 + 3]);
            }
        }
    }
    else
    {
        for (VAR22 = 0; VAR22 < VAR8; VAR22 += 4)
        {
            int VAR36, VAR37, VAR38, VAR39, VAR40, VAR41;
            int *VAR42 = (int *)&VAR5[VAR22];
            uint8_t VAR43;
            unsigned int VAR44;
            int VAR53, VAR54, VAR55, VAR56;
            int VAR45, VAR46, VAR47, VAR48, VAR49;
            const float *VAR50, *VAR51;
            VAR23 = VAR7[VAR22] * VAR15 + VAR14;
            VAR24 = VAR7[VAR22 + 1] * VAR15 + VAR14;
            VAR25 = VAR7[VAR22 + 2] * VAR15 + VAR14;
            VAR26 = VAR7[VAR22 + 3] * VAR15 + VAR14;
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
                             ""
                             ""
                             ""
                             ""
                             ""
                             ""
                             ""
                             ""
                             : [VAR23] ""(VAR23), [VAR24] ""(VAR24), [VAR25] ""(VAR25), [VAR26] ""(VAR26), [VAR38] ""(VAR38), [VAR39] ""(VAR39), [VAR40] ""(VAR40), [VAR41] ""(VAR41), [VAR53] ""(VAR53), [VAR54] ""(VAR54), [VAR55] ""(VAR55), [VAR56] ""(VAR56), [VAR45] ""(VAR45), [VAR46] ""(VAR46), [VAR47] ""(VAR47), [VAR48] ""(VAR48), [VAR49] ""(VAR49)
                             : [VAR42] ""(VAR42)
                             : "");
            VAR36 = 17 * VAR23;
            VAR36 += VAR24;
            VAR37 = 17 * VAR25;
            VAR37 += VAR26;
            VAR44 = (VAR31[VAR36] << VAR39) | VAR38;
            VAR43 = VAR28[VAR36] + VAR39;
            FUN3(VAR4, VAR43, VAR44);
            if (VAR33[VAR36 * 2] == 64.0f)
            {
                int VAR57 = FUN5(VAR53);
                VAR44 = (((1 << (VAR57 - 3)) - 2) << VAR57) | (VAR53 & ((1 << VAR57) - 1));
                FUN3(VAR4, VAR57 * 2 - 3, VAR44);
            }
            if (VAR33[VAR36 * 2 + 1] == 64.0f)
            {
                int VAR57 = FUN5(VAR54);
                VAR44 = (((1 << (VAR57 - 3)) - 2) << VAR57) | (VAR54 & ((1 << VAR57) - 1));
                FUN3(VAR4, VAR57 * 2 - 3, VAR44);
            }
            VAR44 = (VAR31[VAR37] << VAR41) | VAR40;
            VAR43 = VAR28[VAR37] + VAR41;
            FUN3(VAR4, VAR43, VAR44);
            if (VAR33[VAR37 * 2] == 64.0f)
            {
                int VAR57 = FUN5(VAR55);
                VAR44 = (((1 << (VAR57 - 3)) - 2) << VAR57) | (VAR55 & ((1 << VAR57) - 1));
                FUN3(VAR4, VAR57 * 2 - 3, VAR44);
            }
            if (VAR33[VAR37 * 2 + 1] == 64.0f)
            {
                int VAR57 = FUN5(VAR56);
                VAR44 = (((1 << (VAR57 - 3)) - 2) << VAR57) | (VAR56 & ((1 << VAR57) - 1));
                FUN3(VAR4, VAR57 * 2 - 3, VAR44);
            }
            if (VAR6)
            {
                VAR50 = &VAR33[VAR36 * 2];
                VAR51 = &VAR33[VAR37 * 2];
                VAR6[VAR22 + 0] = FUN4(VAR53 * FUN6(VAR53) * VAR20, VAR5[VAR22 + 0]);
                VAR6[VAR22 + 1] = FUN4(VAR54 * FUN6(VAR54) * VAR20, VAR5[VAR22 + 1]);
                VAR6[VAR22 + 2] = FUN4(VAR55 * FUN6(VAR55) * VAR20, VAR5[VAR22 + 2]);
                VAR6[VAR22 + 3] = FUN4(VAR56 * FUN6(VAR56) * VAR20, VAR5[VAR22 + 3]);
            }
        }
    }
}