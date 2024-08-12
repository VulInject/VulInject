static void FUN1(VAR1 *VAR2, bool VAR3)
{
    VAR4 *VAR5 = VAR6;
    VAR7 *VAR8, VAR9;
    int VAR10;
    VAR11 *VAR12 = VAR2->VAR12;
    bool VAR13 = FUN2(VAR12) & ~(1 << VAR14);
    bool VAR15 = !VAR12->VAR16 && !VAR12->VAR17;
    bool VAR18 = VAR12->VAR16 || FUN3(VAR12);
    hwaddr VAR19 = VAR2->VAR20;
    ram_addr_t VAR21 = FUN4(VAR2->VAR21);
    void *VAR22 = NULL;
    unsigned VAR23;
    VAR23 = (VAR24 - (VAR19 & ~VAR25));
    VAR23 &= ~VAR25;
    if (VAR23 > VAR21)
    {
        return;
    }
    VAR19 += VAR23;
    VAR21 -= VAR23;
    VAR21 &= VAR25;
    if (!VAR21 || (VAR19 & ~VAR25))
    {
        return;
    }
    if (!FUN5(VAR12))
    {
        if (VAR15 || !VAR26)
        {
            return;
        }
        else if (!VAR12->VAR27)
        {
            VAR3 = false;
        }
    }
    VAR22 = FUN6(VAR12) + VAR2->VAR28 + VAR23;
    while (1)
    {
        VAR8 = FUN7(VAR5, VAR19, VAR19 + VAR21);
        if (!VAR8)
        {
            break;
        }
        if (VAR3 && VAR19 >= VAR8->VAR19 && (VAR19 + VAR21 <= VAR8->VAR19 + VAR8->VAR29) && (VAR22 - VAR19 == VAR8->VAR22 - VAR8->VAR19))
        {
            FUN8(VAR8, VAR13);
            return;
        }
        VAR9 = *VAR8;
        if ((VAR8->VAR30 & VAR31) || VAR5->VAR32)
        {
            FUN9(VAR2);
        }
        VAR8->VAR29 = 0;
        VAR10 = FUN10(VAR5, VAR8);
        if (VAR10)
        {
            fprintf(VAR33, "", VAR34, strerror(-VAR10));
            FUN11();
        }
        if (VAR5->VAR35 && VAR9.VAR19 == VAR19 && VAR9.VAR29 < VAR21 && VAR3)
        {
            VAR8 = FUN12(VAR5);
            VAR8->VAR29 = VAR9.VAR29;
            VAR8->VAR19 = VAR9.VAR19;
            VAR8->VAR22 = VAR9.VAR22;
            VAR8->VAR30 = FUN13(VAR5, VAR13, VAR18);
            VAR10 = FUN10(VAR5, VAR8);
            if (VAR10)
            {
                fprintf(VAR33, "", VAR34, strerror(-VAR10));
                FUN11();
            }
            VAR19 += VAR9.VAR29;
            VAR22 += VAR9.VAR29;
            VAR21 -= VAR9.VAR29;
            continue;
        }
        if (VAR9.VAR19 < VAR19)
        {
            VAR8 = FUN12(VAR5);
            VAR8->VAR29 = VAR19 - VAR9.VAR19;
            VAR8->VAR19 = VAR9.VAR19;
            VAR8->VAR22 = VAR9.VAR22;
            VAR8->VAR30 = FUN13(VAR5, VAR13, VAR18);
            VAR10 = FUN10(VAR5, VAR8);
            if (VAR10)
            {
                fprintf(VAR33, "", VAR34, strerror(-VAR10));
                fprintf(VAR33, ""
                                ""
                                "",
                        VAR34);
                FUN11();
            }
        }
        if (VAR9.VAR19 + VAR9.VAR29 > VAR19 + VAR21)
        {
            ram_addr_t VAR36;
            VAR8 = FUN12(VAR5);
            VAR8->VAR19 = VAR19 + VAR21;
            VAR36 = VAR8->VAR19 - VAR9.VAR19;
            VAR8->VAR29 = VAR9.VAR29 - VAR36;
            VAR8->VAR22 = VAR9.VAR22 + VAR36;
            VAR8->VAR30 = FUN13(VAR5, VAR13, VAR18);
            VAR10 = FUN10(VAR5, VAR8);
            if (VAR10)
            {
                fprintf(VAR33, "", VAR34, strerror(-VAR10));
                FUN11();
            }
        }
    }
    if (!VAR21)
    {
        return;
    }
    if (!VAR3)
    {
        return;
    }
    VAR8 = FUN12(VAR5);
    VAR8->VAR29 = VAR21;
    VAR8->VAR19 = VAR19;
    VAR8->VAR22 = VAR22;
    VAR8->VAR30 = FUN13(VAR5, VAR13, VAR18);
    VAR10 = FUN10(VAR5, VAR8);
    if (VAR10)
    {
        fprintf(VAR33, "", VAR34, strerror(-VAR10));
        FUN11();
    }
}