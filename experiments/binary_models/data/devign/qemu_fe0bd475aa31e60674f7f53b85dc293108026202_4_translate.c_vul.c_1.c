static void FUN1(VAR1 *VAR2, uint32_t VAR3, TCGv_i32 VAR4)
{
    static void (*const VAR5[256])(VAR1 * VAR2, uint32_t VAR3, TCGv_i32 VAR6) = {
        [VAR7] = VAR8,
        [VAR9] = VAR10,
        [VAR11] = VAR12,
        [VAR13] = VAR14,
        [VAR15] = VAR16,
        [VAR17] = VAR18,
        [VAR19] = VAR20,
        [VAR21] = VAR22,
        [VAR23] = VAR24,
        [VAR25] = VAR26,
        [VAR27] = VAR28,
        [VAR29] = VAR28,
        [VAR30] = VAR31,
        [VAR32] = VAR33,
        [VAR34] = VAR35,
        [VAR34 + 1] = VAR35,
        [VAR36] = VAR37,
        [VAR36 + 1] = VAR37,
        [VAR38] = VAR39,
        [VAR38 + 1] = VAR39,
        [VAR40] = VAR41,
        [VAR42] = VAR43,
        [VAR44] = VAR45,
        [VAR46] = VAR47,
        [VAR48] = VAR49,
        [VAR50] = VAR51,
        [VAR52] = VAR53,
        [VAR54] = VAR55,
        [VAR56] = VAR57,
        [VAR58] = VAR59,
        [VAR58 + 1] = VAR59,
        [VAR58 + 2] = VAR59,
    };
    if (VAR60[VAR3])
    {
        if (VAR5[VAR3])
        {
            VAR5[VAR3](VAR2, VAR3, VAR4);
        }
        else
        {
            FUN2(VAR61[VAR3], VAR4);
        }
    }
    else
    {
        FUN3("", VAR3);
    }
}