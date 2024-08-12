static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8, int *VAR9)
{
    int VAR10, VAR11, VAR12, VAR13, VAR14, VAR15, VAR16;
    VAR7 *VAR17, *VAR18, *VAR19;
    AVPicture VAR20, VAR21;
    static VAR22 *VAR23;
    VAR22 *VAR24 = NULL, *VAR25 = NULL;
    VAR26 *VAR27, *VAR28;
    VAR27 = &VAR4->VAR29->VAR30;
    VAR28 = &VAR6->VAR29->VAR30;
    VAR15 = VAR6->VAR15;
    VAR16 = VAR6->VAR29->VAR31;
    VAR10 = ((VAR32)VAR15 * VAR27->VAR33) / VAR16;
    VAR11 = (((VAR32)VAR15 + 1) * VAR27->VAR33) / VAR16;
    VAR12 = VAR11 - VAR10;
    if (VAR12 <= 0)
        return;
    if (!VAR23)
        VAR23 = FUN2(VAR34);
    if (!VAR23)
        return;
    if (VAR35)
    {
        int VAR36;
        VAR36 = FUN3(VAR28->VAR37, VAR28->VAR38, VAR28->VAR39);
        VAR25 = FUN2(VAR36);
        if (!VAR25)
            return;
        VAR18 = &VAR21;
        FUN4(VAR18, VAR25, VAR28->VAR37, VAR28->VAR38, VAR28->VAR39);
        if (FUN5(VAR18, VAR8, VAR28->VAR37, VAR28->VAR38, VAR28->VAR39) < 0)
        {
            FUN6(VAR25);
            VAR25 = NULL;
            VAR18 = VAR8;
        }
    }
    else
    {
        VAR18 = VAR8;
    }
    if (VAR27->VAR37 != VAR28->VAR37)
    {
        int VAR36;
        VAR36 = FUN3(VAR27->VAR37, VAR28->VAR38, VAR28->VAR39);
        VAR24 = FUN2(VAR36);
        if (!VAR24)
            return;
        VAR19 = &VAR20;
        FUN4(VAR19, VAR24, VAR27->VAR37, VAR28->VAR38, VAR28->VAR39);
        if (FUN7(VAR19, VAR27->VAR37, VAR18, VAR28->VAR37, VAR28->VAR38, VAR28->VAR39) < 0)
        {
            fprintf(VAR40, "");
            goto VAR41;
        }
    }
    else
    {
        VAR19 = VAR18;
    }
    if (VAR4->VAR42)
    {
        VAR17 = &VAR4->VAR43;
        FUN8(VAR4->VAR44, VAR17, VAR19);
    }
    else
    {
        VAR17 = VAR19;
    }
    VAR12 = 1;
    for (VAR13 = 0; VAR13 < VAR12; VAR13++)
    {
        if (VAR27->VAR45 != VAR46)
        {
            if (VAR47)
            {
                VAR27->VAR48 = VAR28->VAR48;
            }
            VAR14 = FUN9(VAR27, VAR23, VAR34, VAR17);
            VAR2->VAR49->FUN10(VAR2, VAR4->VAR50, VAR23, VAR14, 0);
            *VAR9 = VAR14;
        }
        else
        {
            FUN11(VAR2, VAR4->VAR50, VAR17, VAR27->VAR37, VAR27->VAR38, VAR27->VAR39);
        }
    }
VAR41:
    FUN6(VAR24);
    FUN6(VAR25);
}