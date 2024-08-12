static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5 = 0;
    char *VAR6, *VAR7;
    char *VAR8;
    if (VAR4->VAR9 != -1)
    {
        VAR10 *VAR11;
        VAR11 = FUN2(VAR2, VAR4->VAR9);
        if (VAR11 == NULL)
        {
            VAR5 = -VAR12;
            goto VAR13;
        }
        FUN3(VAR11->VAR14 != VAR15);
        VAR7 = FUN4(VAR11->VAR16.VAR17 + VAR4->VAR18.VAR17 + 2);
        strcpy(VAR7, VAR11->VAR16.VAR19);
        strcat(VAR7, "");
        strcat(VAR7 + VAR11->VAR16.VAR17, VAR4->VAR18.VAR19);
    }
    else
    {
        VAR6 = VAR4->VAR20->VAR16.VAR19;
        VAR8 = strrchr(VAR6, '');
        if (VAR8)
        {
            VAR8++;
        }
        else
        {
            VAR8 = VAR6;
        }
        VAR7 = FUN4(VAR8 - VAR6 + VAR4->VAR18.VAR17 + 1);
        strncat(VAR7, VAR6, VAR8 - VAR6);
        strncat(VAR7 + (VAR8 - VAR6), VAR4->VAR18.VAR19, VAR4->VAR18.VAR17);
    }
    FUN5(&VAR4->VAR18);
    VAR4->VAR18.VAR19 = FUN6(VAR7);
    VAR4->VAR18.VAR17 = strlen(VAR7);
    if (strcmp(VAR7, VAR4->VAR20->VAR16.VAR19) != 0)
    {
        if (FUN7(VAR2, &VAR4->VAR20->VAR16, &VAR4->VAR18))
        {
            VAR5 = -VAR21;
        }
        else
        {
            VAR10 *VAR20;
            for (VAR20 = VAR2->VAR22; VAR20; VAR20 = VAR20->VAR23)
            {
                if (VAR4->VAR20 == VAR20)
                {
                    continue;
                }
                if (FUN8(&VAR4->VAR20->VAR16, &VAR20->VAR16))
                {
                    FUN9(&VAR20->VAR16, &VAR4->VAR18, strlen(VAR4->VAR20->VAR16.VAR19));
                }
            }
            FUN10(&VAR4->VAR20->VAR16, &VAR4->VAR18);
        }
    }
VAR13:
    FUN5(&VAR4->VAR18);
    return VAR5;
}