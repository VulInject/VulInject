static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5;
    static struct VAR6 *VAR7;
    VAR8 *VAR9 = VAR4->VAR10;
    if (VAR11 >= VAR12)
    {
    }
    else
    {
        if (VAR9->VAR13 != VAR14)
        {
            if (!VAR7)
            {
                VAR7 = FUN2(VAR9->VAR15, VAR9->VAR16, VAR14, VAR9->VAR15, VAR9->VAR16, VAR9->VAR13, VAR17, NULL, NULL, NULL);
                if (!VAR7)
                {
                    fprintf(VAR18, "");
                    FUN3(1);
                }
            }
            FUN4(&VAR19, VAR11, VAR9->VAR15, VAR9->VAR16);
            FUN5(VAR7, (const VAR20 *const *)VAR19.VAR21, VAR19.VAR22, 0, VAR9->VAR16, VAR23.VAR21, VAR23.VAR22);
        }
        else
        {
            FUN4(&VAR23, VAR11, VAR9->VAR15, VAR9->VAR16);
        }
    }
    if (VAR2->VAR24->VAR25 & VAR26)
    {
        AVPacket VAR27;
        FUN6(&VAR27);
        VAR27.VAR25 |= VAR28;
        VAR27.VAR29 = VAR4->VAR30;
        VAR27.VAR21 = VAR23.VAR21[0];
        VAR27.VAR31 = sizeof(VAR32);
        VAR5 = FUN7(VAR2, &VAR27);
    }
    else
    {
        AVPacket VAR27 = {0};
        int VAR33;
        FUN6(&VAR27);
        VAR34->VAR35 = VAR11;
        VAR5 = FUN8(VAR9, &VAR27, VAR34, &VAR33);
        if (VAR5 < 0)
        {
            fprintf(VAR18, "", FUN9(VAR5));
            FUN3(1);
        }
        if (VAR33)
        {
            VAR5 = FUN10(VAR2, &VAR9->VAR36, VAR4, &VAR27);
        }
        else
        {
            VAR5 = 0;
        }
    }
    if (VAR5 < 0)
    {
        fprintf(VAR18, "", FUN9(VAR5));
        FUN3(1);
    }
    VAR11++;
}