void FUN1(void *VAR1, VAR2 *VAR3, enum PixelFormat VAR4, int VAR5, int VAR6, INT64 VAR7)
{
    VAR8 *VAR9 = (VAR8 *)VAR1;
    AVPicture VAR10;
    Imlib_Image VAR11;
    VAR12 *VAR13;
    VAR11 = FUN2(VAR9, VAR5, VAR6);
    if (!VAR11)
    {
        VAR11 = FUN3(VAR5, VAR6);
        FUN4(VAR9, VAR11, VAR5, VAR6);
    }
    FUN5(VAR11);
    VAR13 = FUN6();
    if (VAR4 != VAR14)
    {
        FUN7(&VAR10, (VAR15 *)VAR13, VAR14, VAR5, VAR6);
        if (FUN8(&VAR10, VAR14, VAR3, VAR4, VAR5, VAR6) < 0)
        {
            goto VAR16;
        }
    }
    else
    {
        FUN9();
    }
    FUN10(0);
    {
        int VAR17, VAR18, VAR19, VAR20;
        char VAR21[1000];
        char VAR22[1000];
        char *VAR23 = VAR9->VAR24;
        time_t VAR25 = FUN11(0);
        char *VAR26, *VAR27;
        int VAR28, VAR29;
        if (VAR9->VAR30)
        {
            int VAR31 = open(VAR9->VAR30, VAR32);
            if (VAR31 < 0)
            {
                VAR23 = "";
            }
            else
            {
                int VAR33 = read(VAR31, VAR22, sizeof(VAR22) - 1);
                if (VAR33 >= 0)
                {
                    VAR22[VAR33] = 0;
                    VAR23 = VAR22;
                }
                else
                {
                    VAR23 = "";
                }
                close(VAR31);
            }
        }
        FUN12(VAR21, sizeof(VAR21), VAR23 ? VAR23 : "", FUN13(&VAR25));
        VAR28 = VAR9->VAR28;
        VAR29 = VAR9->VAR29;
        for (VAR26 = VAR21; VAR26; VAR26 = VAR27)
        {
            VAR27 = strchr(VAR26, '');
            if (VAR27)
                *VAR27++ = 0;
            FUN14(VAR28, VAR29, VAR26, &VAR17, &VAR18, &VAR19, &VAR20);
            VAR29 += VAR20;
        }
    }
    if (VAR4 != VAR14)
    {
        if (FUN8(VAR3, VAR4, &VAR10, VAR14, VAR5, VAR6) < 0)
        {
        }
    }
VAR16:;
}