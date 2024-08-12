FUN1(VAR1 *VAR2, struct VAR3 *VAR4)
{
    uint32_t VAR5 = FUN2(VAR4->VAR6.VAR7);
    uint32_t VAR8 = VAR5 & (VAR9 | VAR10);
    unsigned int VAR11 = VAR5 & 0xffff, VAR12, VAR13, VAR14;
    unsigned int VAR15 = 0xfffff, VAR16 = 0;
    uint64_t VAR17;
    struct VAR18 *VAR19 = (struct VAR18 *)VAR4;
    struct VAR20 *VAR21 = &VAR2->VAR22;
    if (VAR8 == VAR9)
    {
        VAR14 = FUN2(VAR19->VAR23);
        VAR21->VAR24 = VAR19->VAR25.VAR26.VAR24;
        VAR21->VAR27 = VAR19->VAR25.VAR26.VAR27;
        VAR21->VAR28 = FUN3(VAR19->VAR25.VAR26.VAR28);
        VAR21->VAR29 = VAR19->VAR30.VAR31.VAR29;
        VAR21->VAR32 = VAR19->VAR30.VAR31.VAR32;
        VAR21->VAR33 = FUN3(VAR19->VAR30.VAR31.VAR33);
        VAR21->VAR34 = VAR14 & 0xfffff;
        VAR21->VAR35 = VAR19->VAR36.VAR37.VAR35;
        VAR21->VAR38 = FUN3(VAR19->VAR36.VAR37.VAR38);
        VAR21->VAR39 = (VAR14 & VAR40) ? 1 : 0;
        VAR21->VAR41 = (VAR14 & VAR42) ? 1 : 0;
        VAR21->VAR43 = (VAR14 & VAR44) ? 1 : 0;
        VAR21->VAR45 = 0;
        if (VAR21->VAR32 == 0)
        {
            FUN4(VAR46, "");
            VAR21->VAR32 = VAR21->VAR29 + (VAR21->VAR41 ? 16 : 6);
        }
        return;
    }
    else if (VAR8 == (VAR9 | VAR10))
    {
        if (VAR21->VAR47 == 0)
        {
            VAR21->VAR48 = FUN2(VAR4->VAR49.VAR7) >> 8;
        }
        VAR21->VAR50 = (VAR5 & VAR44) ? 1 : 0;
    }
    else
    {
        VAR21->VAR50 = 0;
    }
    if (FUN5(VAR2) && FUN6(VAR5) && (VAR21->VAR50 || VAR5 & VAR51))
    {
        VAR21->VAR52 = 1;
        FUN7((VAR53 *)(VAR21->VAR54), FUN8((VAR53 *)(VAR2->VAR55 + VAR56)));
        FUN7((VAR53 *)(VAR21->VAR54 + 2), FUN3(VAR4->VAR49.VAR37.VAR57));
    }
    VAR17 = FUN9(VAR4->VAR58);
    if (VAR21->VAR43 && VAR21->VAR50)
    {
        VAR16 = VAR21->VAR35;
        VAR15 = VAR16 + VAR21->VAR38;
        do
        {
            VAR12 = VAR11;
            if (VAR21->VAR47 + VAR12 > VAR15)
                VAR12 = VAR15 - VAR21->VAR47;
            VAR12 = FUN10(sizeof(VAR21->VAR7) - VAR21->VAR47, VAR12);
            FUN11(&VAR2->VAR59, VAR17, VAR21->VAR7 + VAR21->VAR47, VAR12);
            if ((VAR13 = VAR21->VAR47 + VAR12) >= VAR16 && VAR21->VAR47 < VAR16)
                memmove(VAR21->VAR60, VAR21->VAR7, VAR16);
            VAR21->VAR47 = VAR13;
            VAR17 += VAR12;
            if (VAR13 == VAR15)
            {
                FUN12(VAR2);
                memmove(VAR21->VAR7, VAR21->VAR60, VAR16);
                VAR21->VAR47 = VAR16;
            }
        } while (VAR11 -= VAR12);
    }
    else if (!VAR21->VAR43 && VAR21->VAR50)
    {
        FUN4(VAR61, "");
    }
    else
    {
        FUN11(&VAR2->VAR59, VAR17, VAR21->VAR7 + VAR21->VAR47, VAR11);
        VAR21->VAR47 += VAR11;
    }
    if (!(VAR5 & VAR51))
        return;
    if (!(VAR21->VAR43 && VAR21->VAR50 && VAR21->VAR47 < VAR16))
        FUN12(VAR2);
    VAR21->VAR45 = 0;
    VAR21->VAR48 = 0;
    VAR21->VAR52 = 0;
    VAR21->VAR47 = 0;
    VAR21->VAR50 = 0;