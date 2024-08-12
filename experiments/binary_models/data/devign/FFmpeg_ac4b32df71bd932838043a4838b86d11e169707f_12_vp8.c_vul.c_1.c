void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6, VAR7 *VAR8, VAR7 *VAR9, int VAR10)
{
    VAR11 *VAR12 = &VAR2->VAR12;
    if (VAR2->VAR13.VAR14)
        *VAR8 = FUN2(VAR12, VAR15, VAR2->VAR16->VAR17);
    else if (VAR2->VAR13.VAR18)
        *VAR8 = VAR9 ? *VAR9 : *VAR8;
    VAR4->VAR8 = *VAR8;
    VAR4->VAR19 = VAR2->VAR20 ? FUN3(VAR12, VAR2->VAR16->VAR21) : 0;
    if (VAR2->VAR22)
    {
        VAR4->VAR23 = FUN2(VAR12, VAR24, VAR25);
        if (VAR4->VAR23 == VAR26)
        {
            FUN4(VAR2, VAR12, VAR4, VAR5, 1, VAR10);
        }
        else
        {
            const uint32_t VAR27 = VAR28[VAR4->VAR23] * 0x01010101u;
            if (VAR2->VAR29 == 1)
                FUN5(VAR4->VAR30, VAR27);
            else
                FUN5(VAR2->VAR30 + 4 * VAR5, VAR27);
            FUN5(VAR2->VAR31, VAR27);
        }
        VAR4->VAR32 = FUN2(VAR12, VAR33, VAR34);
        VAR4->VAR35 = VAR36;
    }
    else if (FUN6(VAR12, VAR2->VAR16->VAR37))
    {
        if (FUN6(VAR12, VAR2->VAR16->VAR38))
            VAR4->VAR35 = FUN3(VAR12, VAR2->VAR16->VAR39) ? VAR40 : VAR41;
        else
            VAR4->VAR35 = VAR42;
        VAR2->VAR43[VAR4->VAR35 - 1]++;
        FUN7(VAR2, VAR4, VAR5, VAR6, VAR10);
    }
    else
    {
        VAR4->VAR23 = FUN2(VAR12, VAR44, VAR2->VAR16->VAR45);
        if (VAR4->VAR23 == VAR26)
            FUN4(VAR2, VAR12, VAR4, VAR5, 0, VAR10);
        VAR4->VAR32 = FUN2(VAR12, VAR33, VAR2->VAR16->VAR46);
        VAR4->VAR35 = VAR36;
        VAR4->VAR47 = VAR48;
        FUN8(&VAR4->VAR49[0]);
    }
}