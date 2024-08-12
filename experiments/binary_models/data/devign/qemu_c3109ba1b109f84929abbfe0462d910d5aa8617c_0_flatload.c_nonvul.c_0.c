static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4, int VAR5, VAR6 *VAR7)
{
    struct VAR8 *VAR9;
    abi_ulong VAR10 = 0, VAR11 = 0;
    abi_long VAR12;
    abi_ulong VAR13 = 0;
    abi_ulong VAR14, VAR15, VAR16, VAR17, VAR18;
    abi_ulong VAR19 = 0;
    abi_ulong VAR20;
    abi_ulong VAR21 = 0, VAR22;
    int VAR23, VAR24, VAR25 = 0;
    abi_ulong VAR26;
    abi_ulong VAR27, VAR28;
    abi_ulong VAR29;
    VAR9 = ((struct VAR8 *)VAR2->VAR30);
    VAR14 = FUN2(VAR9->VAR31);
    VAR15 = FUN2(VAR9->VAR32) - FUN2(VAR9->VAR31);
    VAR16 = FUN2(VAR9->VAR33) - FUN2(VAR9->VAR32);
    VAR17 = FUN2(VAR9->VAR34);
    if (VAR7)
    {
        VAR17 += *VAR7;
        *VAR7 = VAR17;
    }
    VAR25 = FUN2(VAR9->VAR35);
    VAR18 = FUN2(VAR9->VAR18);
    VAR24 = FUN2(VAR9->VAR24);
    FUN3("", VAR2->VAR36);
    if (VAR24 != VAR37 && VAR24 != VAR38)
    {
        fprintf(VAR39, "", VAR24, (int)VAR37);
        return -VAR40;
    }
    if (VAR24 == VAR38 && VAR5 != 0)
    {
        fprintf(VAR39, "");
        return -VAR40;
    }
    if (VAR24 == VAR38 && FUN4(VAR18))
        VAR18 = VAR41;
    if (VAR18 & (VAR42 | VAR43))
    {
        fprintf(VAR39, "");
        return -VAR40;
    }
    VAR20 = VAR25 * sizeof(VAR6);
    if (VAR20 < VAR16 + VAR17)
        VAR20 = VAR16 + VAR17;
    VAR29 = VAR44 * sizeof(VAR6);
    VAR29 = (VAR29 + 15) & ~(VAR6)15;
    if ((VAR18 & (VAR41 | VAR42)) == 0)
    {
        FUN3("");
        VAR10 = FUN5(0, VAR14, VAR45 | VAR46, VAR47, VAR2->VAR48, 0);
        if (VAR10 == -1)
        {
            fprintf(VAR39, "");
            return -1;
        }
        VAR13 = FUN5(0, VAR15 + VAR20 + VAR29, VAR45 | VAR49 | VAR46, VAR47 | VAR50, -1, 0);
        if (VAR13 == -1)
        {
            fprintf(VAR39, "");
            return VAR13;
        }
        VAR11 = VAR13 + VAR29;
        FUN3("", (int)(VAR15 + VAR16 + VAR17), (int)VAR11);
        VAR26 = FUN2(VAR9->VAR31);
        if (VAR18 & VAR43)
        {
            VAR12 = FUN6(VAR2, VAR26, (char *)VAR11, VAR15 + (VAR25 * sizeof(VAR6)))
        }
        else
        {
            VAR12 = FUN7(VAR2->VAR48, VAR11, VAR15 + (VAR25 * sizeof(VAR6)), VAR26);
        }
        if (VAR12 < 0)
        {
            fprintf(VAR39, "");
            return VAR12;
        }
        VAR21 = VAR11 + (FUN2(VAR9->VAR51) - VAR14);
        VAR19 = VAR13;
    }
    else
    {
        VAR10 = FUN5(0, VAR14 + VAR15 + VAR20 + VAR29, VAR45 | VAR46 | VAR49, VAR47 | VAR50, -1, 0);
        if (VAR10 == -1)
        {
            fprintf(VAR39, "");
            return -1;
        }
        VAR13 = VAR10 + FUN2(VAR9->VAR31);
        VAR11 = VAR13 + VAR29;
        VAR21 = (VAR10 + FUN2(VAR9->VAR51) + VAR29);
        VAR19 = VAR10;
        if (VAR18 & VAR42)
        {
            VAR12 = FUN6(VAR2, sizeof(struct VAR8), (((char *)VAR10) + sizeof(struct VAR8)), (VAR14 + VAR15 + (VAR25 * sizeof(unsigned long)) - sizeof(struct VAR8)), 0);
            memmove((void *)VAR11, (void *)VAR13, VAR15 + (VAR25 * sizeof(unsigned long)));
        }
        else if (VAR18 & VAR43)
        {
            VAR26 = 0;
            VAR12 = VAR2->VAR52->VAR53->read(VAR2->VAR52, (char *)VAR10, VAR14, &VAR26);
            if (VAR12 < (unsigned long)-4096)
                VAR12 = FUN6(VAR2, VAR14, (char *)VAR11, VAR15 + (VAR25 * sizeof(unsigned long)), 0);
        }
        else
        {
            VAR12 = FUN7(VAR2->VAR48, VAR10, VAR14, 0);
            if (VAR12 >= 0)
            {
                VAR12 = FUN7(VAR2->VAR48, VAR11, VAR15 + (VAR25 * sizeof(VAR6)), FUN2(VAR9->VAR31));
            }
        }
        if (VAR12 < 0)
        {
            fprintf(VAR39, "");
            return VAR12;
        }
    }
    FUN3("", (int)VAR10, 0x00ffffff & FUN2(VAR9->VAR54), FUN2(VAR9->VAR31));
    VAR27 = VAR10 + sizeof(struct VAR8);
    VAR28 = VAR10 + VAR14;
    FUN3("", VAR5 ? "" : "", VAR2->VAR36, (int)VAR27, (int)VAR28, (int)VAR11, (int)(VAR11 + VAR15), (int)(VAR11 + VAR15), (int)(((VAR11 + VAR15 + VAR16) + 3) & ~3));
    VAR14 -= sizeof(struct VAR8);
    VAR4[VAR5].VAR27 = VAR27;
    VAR4[VAR5].VAR55 = VAR11;
    VAR4[VAR5].VAR56 = VAR11 + VAR15;
    VAR4[VAR5].VAR57 = VAR11 + VAR15 + VAR16;
    VAR4[VAR5].VAR14 = VAR14;
    VAR4[VAR5].VAR58 = 1;
    VAR4[VAR5].VAR54 = (0x00ffffff & FUN2(VAR9->VAR54)) + VAR10;
    VAR4[VAR5].VAR59 = FUN2(VAR9->VAR59);
    if (VAR18 & VAR60)
    {
        VAR22 = VAR11;
        while (1)
        {
            abi_ulong VAR61;
            if (FUN8(VAR61, VAR22))
                return -VAR62;
            if (VAR61 == -1)
                break;
            if (VAR61)
            {
                VAR61 = FUN9(VAR61, VAR4, VAR5, 0);
                if (VAR61 == VAR63)
                    return -VAR40;
                if (FUN10(VAR61, VAR22))
                    return -VAR62;
            }
            VAR22 += sizeof(VAR6);
        }
    }
    if (VAR24 > VAR38)
    {
        abi_ulong VAR64 = 0;
        for (VAR23 = 0; VAR23 < VAR25; VAR23++)
        {
            abi_ulong VAR61, VAR65;
            if (FUN8(VAR65, VAR21 + VAR23 * sizeof(VAR6)))
                return -VAR62;
            VAR65 = FUN2(VAR65);
            if (FUN11(VAR65, &VAR64))
                continue;
            VAR61 = FUN12(VAR65);
            VAR22 = FUN9(VAR61, VAR4, VAR5, 1);
            if (VAR22 == VAR63)
                return -VAR40;
            if (FUN8(VAR61, VAR22))
                return -VAR62;
            VAR61 = FUN13(VAR22, VAR65, VAR18, &VAR64);
            if (VAR61 != 0)
            {
                if ((VAR18 & VAR60) == 0)
                    VAR61 = FUN2(VAR61);
                VAR61 = FUN9(VAR61, VAR4, VAR5, 0);
                if (VAR61 == VAR63)
                    return -VAR40;
                if (FUN14(VAR22, VAR61, VAR65))
                    return -VAR62;
            }
        }
    }
    else
    {
        for (VAR23 = 0; VAR23 < VAR25; VAR23++)
        {
            abi_ulong VAR65;
            if (FUN8(VAR65, VAR21 + VAR23 * sizeof(VAR6)))
                return -VAR62;
            FUN15(&VAR4[0], VAR65);
        }
    }
    memset((void *)((unsigned long)VAR11 + VAR15), 0, VAR16);
    return 0;
}