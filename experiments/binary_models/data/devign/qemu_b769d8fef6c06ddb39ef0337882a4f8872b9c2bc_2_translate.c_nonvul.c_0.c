static inline int FUN1(VAR1 *VAR2, int VAR3, VAR4 *VAR5)
{
    target_ulong VAR6, VAR7;
    VAR8 *VAR9;
    DisasContext VAR10, *VAR11 = &VAR10;
    int VAR12, VAR13 = -1;
    memset(VAR11, 0, sizeof(VAR14));
    VAR11->VAR2 = VAR2;
    VAR6 = VAR2->VAR15;
    VAR11->VAR15 = VAR6;
    VAR11->VAR16 = (VAR17)VAR2->VAR18;
    VAR11->VAR19 = 0;
    VAR11->VAR19 = ((VAR5->VAR20) != 0);
    VAR21 = VAR22;
    VAR9 = VAR22 + VAR23;
    VAR24 = VAR25;
    do
    {
        if (VAR5->VAR26 > 0)
        {
            for (VAR12 = 0; VAR12 < VAR5->VAR26; VAR12++)
            {
                if (VAR5->VAR27[VAR12] == VAR11->VAR15)
                {
                    FUN2(VAR11, VAR11->VAR15);
                    break;
                }
            }
        }
        if (VAR3)
        {
            if (VAR28 > 0)
                fprintf(VAR29, "");
            VAR12 = VAR21 - VAR22;
            if (VAR13 < VAR12)
            {
                VAR13++;
                while (VAR13 < VAR12)
                    VAR30[VAR13++] = 0;
                VAR31[VAR13] = VAR11->VAR15;
                VAR32[VAR13] = VAR11->VAR16;
                VAR30[VAR13] = 1;
            }
        }
        VAR7 = VAR11->VAR15;
        FUN3(VAR11);
        if (VAR11->VAR33)
            break;
        if (VAR11->VAR15 != (VAR7 + 4))
            break;
    } while ((VAR21 < VAR9) && (VAR11->VAR15 - VAR6) < (VAR34 - 32));
    if (!VAR11->VAR33)
    {
        if (VAR11->VAR15 != VAR35 && (VAR11->VAR16 != VAR35 && VAR11->VAR16 != VAR36))
        {
            FUN4((long)VAR2, VAR11->VAR15, VAR11->VAR16);
        }
        else
        {
            if (VAR11->VAR15 != VAR35)
                FUN5(VAR11->VAR15);
            FUN6(VAR11);
            FUN7();
            FUN8();
        }
    }
    *VAR21 = VAR37;
    if (VAR3)
    {
        VAR12 = VAR21 - VAR22;
        VAR13++;
        while (VAR13 <= VAR12)
            VAR30[VAR13++] = 0;
        VAR2->VAR38 = 0;
        if (VAR28 > 0)
        {
            FUN9(VAR29);
        }
    }
    else
    {
        VAR2->VAR38 = VAR11->VAR16 - VAR6;
    }
    if (VAR28 & VAR39)
    {
        fprintf(VAR29, "");
        fprintf(VAR29, "", FUN10((VAR40 *)VAR6));
        FUN11(VAR29, (VAR40 *)VAR6, VAR7 + 4 - VAR6, 0, 0);
        fprintf(VAR29, "");
        if (VAR28 & VAR41)
        {
            fprintf(VAR29, "");
            FUN12(VAR22, VAR25);
            fprintf(VAR29, "");
        }
    }
    return 0;
}