static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8)
{
    int VAR9, VAR10, VAR11, VAR12, VAR13, VAR14;
    VAR7 *VAR15, *VAR16, *VAR17;
    AVPicture VAR18, VAR19;
    UINT8 VAR20[128 * 1024];
    VAR21 *VAR22 = NULL, *VAR23 = NULL;
    VAR24 *VAR25, *VAR26;
    VAR25 = &VAR4->VAR27->VAR28;
    VAR26 = &VAR6->VAR27->VAR28;
    VAR14 = VAR6->VAR14;
    VAR9 = ((VAR29)VAR14 * VAR25->VAR30) / VAR26->VAR30;
    VAR10 = (((VAR29)VAR14 + 1) * VAR25->VAR30) / VAR26->VAR30;
    VAR11 = VAR10 - VAR9;
    if (VAR11 <= 0)
        return;
    if (VAR31)
    {
        int VAR32;
        VAR32 = FUN2(VAR26->VAR33, VAR26->VAR34, VAR26->VAR35);
        VAR23 = malloc(VAR32);
        if (!VAR23)
            return;
        VAR16 = &VAR19;
        FUN3(VAR16, VAR23, VAR26->VAR33, VAR26->VAR34, VAR26->VAR35);
        if (FUN4(VAR16, VAR8, VAR26->VAR33, VAR26->VAR34, VAR26->VAR35) < 0)
        {
            free(VAR23);
            VAR23 = NULL;
            VAR16 = VAR8;
        }
    }
    else
    {
        VAR16 = VAR8;
    }
    if (VAR25->VAR33 != VAR26->VAR33)
    {
        int VAR32;
        VAR32 = FUN2(VAR25->VAR33, VAR26->VAR34, VAR26->VAR35);
        VAR22 = malloc(VAR32);
        if (!VAR22)
            return;
        VAR17 = &VAR18;
        FUN3(VAR17, VAR22, VAR25->VAR33, VAR26->VAR34, VAR26->VAR35);
        if (FUN5(VAR17, VAR25->VAR33, VAR16, VAR26->VAR33, VAR26->VAR34, VAR26->VAR35) < 0)
        {
            fprintf(VAR36, "");
            goto VAR37;
        }
    }
    else
    {
        VAR17 = VAR16;
    }
    if (VAR4->VAR38)
    {
        VAR15 = &VAR4->VAR39;
        FUN6(VAR4->VAR40, VAR15, VAR17);
    }
    else
    {
        VAR15 = VAR17;
    }
    for (VAR12 = 0; VAR12 < VAR11; VAR12++)
    {
        if (VAR25->VAR41 != VAR42)
        {
            if (VAR43)
            {
                VAR25->VAR44 = VAR26->VAR44;
            }
            VAR13 = FUN7(VAR25, VAR20, sizeof(VAR20), VAR15);
            VAR2->VAR45->FUN8(VAR2, VAR4->VAR46, VAR20, VAR13);
        }
        else
        {
            FUN9(VAR2, VAR4->VAR46, VAR15, VAR25->VAR33, VAR25->VAR34, VAR25->VAR35);
        }
    }
VAR37:
    if (VAR22)
        free(VAR22);
    if (VAR23)
        free(VAR23);
}