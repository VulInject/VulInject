int FUN1(VAR1 *VAR2, int VAR3, VAR1 *VAR4, int VAR5, int VAR6, int VAR7)
{
    static int VAR8;
    int VAR9, VAR10, VAR11, VAR12, VAR13;
    VAR14 *VAR15, *VAR16;
    VAR17 *VAR18;
    AVPicture VAR19, *VAR20 = &VAR19;
    if (VAR5 < 0 || VAR5 >= VAR21 || VAR3 < 0 || VAR3 >= VAR21)
        return -1;
    if (VAR6 <= 0 || VAR7 <= 0)
        return 0;
    if (!VAR8)
    {
        VAR8 = 1;
        FUN2();
    }
    VAR11 = VAR6;
    VAR12 = VAR7;
    VAR16 = &VAR22[VAR3];
    VAR15 = &VAR22[VAR5];
    if (VAR5 == VAR3)
    {
        FUN3(VAR2, VAR4, VAR3, VAR11, VAR12);
        return 0;
    }
    VAR18 = &VAR23[VAR5][VAR3];
    if (VAR18->VAR24)
    {
        VAR18->FUN4(VAR2, VAR4, VAR11, VAR12);
        return 0;
    }
    if (FUN5(VAR16) && VAR5 == VAR25)
    {
        int VAR26, VAR27, VAR28;
        VAR29 *VAR30;
        if (VAR16->VAR31 == VAR32)
        {
            FUN6(VAR2->VAR33[0], VAR2->VAR34[0], VAR4->VAR33[0], VAR4->VAR34[0], VAR11, VAR12);
        }
        else
        {
            FUN7(VAR2->VAR33[0], VAR2->VAR34[0], VAR4->VAR33[0], VAR4->VAR34[0], VAR11, VAR12, VAR35);
        }
        VAR26 = VAR11;
        VAR27 = VAR12;
        VAR26 >>= VAR16->VAR36;
        VAR27 >>= VAR16->VAR37;
        for (VAR9 = 1; VAR9 <= 2; VAR9++)
        {
            VAR30 = VAR2->VAR33[VAR9];
            for (VAR28 = 0; VAR28 < VAR27; VAR28++)
            {
                memset(VAR30, 128, VAR26);
                VAR30 += VAR2->VAR34[VAR9];
            }
        }
        return 0;
    }
    if (FUN5(VAR15) && VAR3 == VAR25)
    {
        if (VAR15->VAR31 == VAR32)
        {
            FUN6(VAR2->VAR33[0], VAR2->VAR34[0], VAR4->VAR33[0], VAR4->VAR34[0], VAR11, VAR12);
        }
        else
        {
            FUN7(VAR2->VAR33[0], VAR2->VAR34[0], VAR4->VAR33[0], VAR4->VAR34[0], VAR11, VAR12, VAR38);
        }
        return 0;
    }
    if (FUN5(VAR16) && FUN5(VAR15))
    {
        int VAR39, VAR40, VAR26, VAR27;
        void (*VAR41)(VAR29 * VAR2, int VAR42, VAR29 *VAR4, int VAR43, int VAR44, int VAR45);
        VAR26 = VAR11;
        VAR27 = VAR12;
        if (VAR16->VAR36 >= VAR15->VAR36)
            VAR26 >>= VAR16->VAR36;
        else
            VAR26 >>= VAR15->VAR36;
        if (VAR16->VAR37 >= VAR15->VAR37)
            VAR27 >>= VAR16->VAR37;
        else
            VAR27 >>= VAR15->VAR37;
        VAR39 = (VAR16->VAR36 - VAR15->VAR36);
        VAR40 = (VAR16->VAR37 - VAR15->VAR37);
        if (VAR39 == 0 && VAR40 == 0)
        {
            VAR41 = VAR46;
        }
        else if (VAR39 == 0 && VAR40 == 1)
        {
            VAR41 = VAR47;
        }
        else if (VAR39 == 1 && VAR40 == 1)
        {
            VAR41 = VAR48;
        }
        else if (VAR39 == -1 && VAR40 == -1)
        {
            VAR41 = VAR49;
        }
        else if (VAR39 == -1 && VAR40 == 1)
        {
            VAR41 = VAR50;
        }
        else
        {
            return -1;
        }
        FUN6(VAR2->VAR33[0], VAR2->VAR34[0], VAR4->VAR33[0], VAR4->VAR34[0], VAR11, VAR12);
        for (VAR9 = 1; VAR9 <= 2; VAR9++)
            FUN8(VAR2->VAR33[VAR9], VAR2->VAR34[VAR9], VAR4->VAR33[VAR9], VAR4->VAR34[VAR9], VAR11 >> VAR16->VAR36, VAR12 >> VAR16->VAR37);
        if (VAR16->VAR31 != VAR15->VAR31)
        {
            const VAR29 *VAR51, *VAR52;
            if (VAR16->VAR31 == VAR53)
            {
                VAR51 = VAR35;
                VAR52 = VAR54;
            }
            else
            {
                VAR51 = VAR38;
                VAR52 = VAR55;
            }
            FUN7(VAR2->VAR33[0], VAR2->VAR34[0], VAR2->VAR33[0], VAR2->VAR34[0], VAR11, VAR12, VAR51);
            for (VAR9 = 1; VAR9 <= 2; VAR9++)
                FUN7(VAR2->VAR33[VAR9], VAR2->VAR34[VAR9], VAR2->VAR33[VAR9], VAR2->VAR34[VAR9], VAR11 >> VAR16->VAR36, VAR12 >> VAR16->VAR37, VAR52);
        }
        return 0;
    }
    if (VAR5 == VAR56 || VAR3 == VAR56)
    {
        VAR13 = VAR57;
    }
    else if ((VAR15->VAR31 == VAR58 && VAR5 != VAR25) || (VAR16->VAR31 == VAR58 && VAR3 != VAR25))
    {
        VAR13 = VAR25;
    }
    else if ((FUN5(VAR15) && VAR5 != VAR59 && VAR5 != VAR60))
    {
        if (VAR15->VAR31 == VAR32)
            VAR13 = VAR60;
        else
            VAR13 = VAR59;
    }
    else if ((FUN5(VAR16) && VAR3 != VAR59 && VAR3 != VAR60))
    {
        if (VAR16->VAR31 == VAR32)
            VAR13 = VAR60;
        else
            VAR13 = VAR59;
    }
    else
    {
        if (VAR15->VAR61 && VAR16->VAR61)
            VAR13 = VAR62;
        else
            VAR13 = VAR63;
    }
    if (FUN9(VAR20, VAR13, VAR11, VAR12) < 0)
        return -1;
    VAR10 = -1;
    if (FUN1(VAR20, VAR13, VAR4, VAR5, VAR6, VAR7) < 0)
        goto VAR64;
    if (FUN1(VAR2, VAR3, VAR20, VAR13, VAR11, VAR12) < 0)
        goto VAR64;
    VAR10 = 0;
VAR64:
    FUN10(VAR20);
    return VAR10;
}