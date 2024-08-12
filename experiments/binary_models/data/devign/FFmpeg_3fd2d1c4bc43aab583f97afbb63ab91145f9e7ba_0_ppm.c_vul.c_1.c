void FUN1(void *VAR1, VAR2 *VAR3, enum PixelFormat VAR4, int VAR5, int VAR6, int64_t VAR7)
{
    int VAR8 = 0;
    VAR9 *VAR10 = (VAR9 *)VAR1;
    AVPicture VAR11;
    AVPicture VAR12;
    VAR2 *VAR13 = VAR3;
    int VAR14;
    int VAR15;
    int VAR16;
    VAR17 *VAR18 = NULL;
    VAR19 *VAR20 = FUN2(VAR10->VAR21);
    VAR19 *VAR22 = FUN3(VAR10->VAR21);
    if (VAR20 == NULL || VAR22 == NULL)
        VAR8 = 1;
    if (!VAR8 && VAR4 != VAR23)
    {
        int VAR24 = FUN4(VAR23, VAR5, VAR6);
        if (VAR24 != VAR10->VAR25)
        {
            FUN5(VAR10->VAR26);
            VAR10->VAR26 = FUN6(VAR24);
            VAR10->VAR25 = VAR24;
            VAR8 = VAR10->VAR26 == NULL;
        }
        if (!VAR8)
        {
            FUN7(&VAR11, VAR10->VAR26, VAR23, VAR5, VAR6);
            VAR10->VAR27 = FUN8(VAR10->VAR27, VAR5, VAR6, VAR4, VAR5, VAR6, VAR23, VAR28, NULL, NULL, NULL);
            if (VAR10->VAR27 == NULL)
            {
                FUN9(NULL, VAR29, "");
                return;
            }
            FUN10(VAR10->VAR27, VAR3->VAR30, VAR3->VAR31, 0, VAR6, VAR11.VAR30, VAR11.VAR31);
            VAR13 = &VAR11;
        }
    }
    if (!VAR8)
    {
        VAR18 = VAR13->VAR30[0];
        fprintf(VAR22, "", VAR5, VAR6);
        for (VAR16 = 0; !VAR8 && VAR16 < VAR6; VAR16++)
        {
            VAR8 = !fwrite(VAR18, VAR5 * 3, 1, VAR22);
            VAR18 += VAR13->VAR31[0];
        }
        if (!VAR8)
            VAR8 = FUN11(VAR22);
    }
    if (!VAR8 && !FUN12(VAR10->VAR21, &VAR14, &VAR15))
    {
        int VAR24 = FUN4(VAR23, VAR14, VAR15);
        if (VAR24 != VAR10->VAR32)
        {
            FUN5(VAR10->VAR33);
            VAR10->VAR33 = FUN6(VAR24);
            VAR10->VAR32 = VAR24;
            VAR8 = VAR10->VAR33 == NULL;
        }
        if (!VAR8)
        {
            FUN7(&VAR12, VAR10->VAR33, VAR23, VAR14, VAR15);
            VAR18 = VAR12.VAR30[0];
            for (VAR16 = 0; !VAR8 && VAR16 < VAR15; VAR16++)
            {
                VAR8 = !fread(VAR18, VAR14 * 3, 1, VAR20);
                VAR18 += VAR12.VAR31[0];
            }
        }
    }
    if (!VAR8)
    {
        FUN9(NULL, VAR34, "", VAR5, VAR6, VAR14, VAR15);
        VAR10->VAR35 = FUN8(VAR10->VAR35, VAR14, VAR15, VAR23, VAR5, VAR6, VAR4, VAR28, NULL, NULL, NULL);
        if (VAR10->VAR35 == NULL)
        {
            FUN9(NULL, VAR29, "");
            return;
        }
        FUN10(VAR10->VAR35, VAR12.VAR30, VAR12.VAR31, 0, VAR15, VAR3->VAR30, VAR3->VAR31);
    }
}