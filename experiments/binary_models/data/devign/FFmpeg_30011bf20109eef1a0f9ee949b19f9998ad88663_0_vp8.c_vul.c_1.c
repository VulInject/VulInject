void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6, VAR7 *VAR8, VAR7 *VAR9)
{
    VAR10 *VAR11 = &VAR2->VAR11;
    if (VAR2->VAR12.VAR13)
        *VAR8 = FUN2(VAR11, VAR14, VAR2->VAR15->VAR16);
    else
        *VAR8 = VAR9 ? *VAR9 : *VAR8;
    VAR2->VAR8 = *VAR8;
    VAR4->VAR17 = VAR2->VAR18 ? FUN3(VAR11, VAR2->VAR15->VAR19) : 0;
    if (VAR2->VAR20)
    {
        VAR4->VAR21 = FUN2(VAR11, VAR22, VAR23);
        if (VAR4->VAR21 == VAR24)
        {
            FUN4(VAR2, VAR11, VAR5, 1);
        }
        else
        {
            const uint32_t VAR25 = VAR26[VAR4->VAR21] * 0x01010101u;
            FUN5(VAR2->VAR27 + 4 * VAR5, VAR25);
            FUN5(VAR2->VAR28, VAR25);
        }
        VAR2->VAR29 = FUN2(VAR11, VAR30, VAR31);
        VAR4->VAR32 = VAR33;
    }
    else if (FUN6(VAR11, VAR2->VAR15->VAR34))
    {
        if (FUN6(VAR11, VAR2->VAR15->VAR35))
            VAR4->VAR32 = FUN3(VAR11, VAR2->VAR15->VAR36) ? VAR37 : VAR38;
        else
            VAR4->VAR32 = VAR39;
        VAR2->VAR40[VAR4->VAR32 - 1]++;
        FUN7(VAR2, VAR4, VAR5, VAR6);
    }
    else
    {
        VAR4->VAR21 = FUN2(VAR11, VAR41, VAR2->VAR15->VAR42);
        if (VAR4->VAR21 == VAR24)
            FUN4(VAR2, VAR11, VAR5, 0);
        VAR2->VAR29 = FUN2(VAR11, VAR30, VAR2->VAR15->VAR43);
        VAR4->VAR32 = VAR33;
        VAR4->VAR44 = VAR45;
        FUN8(&VAR4->VAR46[0]);
    }
}