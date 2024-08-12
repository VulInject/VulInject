static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4, *VAR5 = NULL;
    float VAR6 = 0.0f;
    int VAR7 = 0, VAR8, VAR9;
    char *VAR10 = NULL, *VAR11, *VAR12;
    char *VAR13 = NULL;
    VAR4 = VAR2->VAR14;
    while (VAR4)
    {
        VAR6 += VAR4->VAR15;
        VAR4 = VAR4->VAR16;
    }
    VAR4 = VAR2->VAR17;
    while (VAR4)
    {
        VAR6 -= VAR4->VAR15;
        VAR5 = VAR4;
        VAR4 = VAR5->VAR16;
        if (VAR6 <= -VAR5->VAR15)
        {
            VAR5->VAR16 = NULL;
            break;
        }
    }
    if (VAR4 && !VAR2->VAR18)
    {
        if (VAR2->VAR19)
        {
            VAR10 = FUN2(VAR2->VAR19);
        }
        else
        {
            VAR10 = FUN2(VAR2->VAR20->VAR21);
        }
        if (!VAR10)
        {
            VAR7 = FUN3(VAR22);
            goto VAR23;
        }
        VAR11 = (char *)FUN4(VAR10);
        *VAR11 = '';
    }
    while (VAR4)
    {
        FUN5(VAR2, VAR24, "", VAR4->VAR21);
        VAR8 = (VAR2->VAR18 ? 0 : strlen(VAR10)) + strlen(VAR4->VAR21) + 1;
        VAR13 = FUN6(VAR8);
        if (!VAR13)
        {
            VAR7 = FUN3(VAR22);
            goto VAR23;
        }
        if (VAR2->VAR18)
            FUN7(VAR13, VAR4->VAR21, VAR8);
        else
        {
            FUN7(VAR13, VAR10, VAR8);
            FUN8(VAR13, VAR4->VAR21, VAR8);
        }
        if (unlink(VAR13) < 0)
        {
            FUN5(VAR2, VAR25, "", VAR13, strerror(VAR26));
        }
        if (VAR4->VAR27[0] != '')
        {
            VAR9 = strlen(VAR10) + strlen(VAR4->VAR27) + 1;
            VAR12 = FUN6(VAR9);
            if (!VAR12)
            {
                VAR7 = FUN3(VAR22);
                goto VAR23;
            }
            FUN7(VAR12, VAR10, VAR9);
            FUN8(VAR12, VAR4->VAR27, VAR9);
            if (unlink(VAR12) < 0)
            {
                FUN5(VAR2, VAR25, "", VAR12, strerror(VAR26));
            }
            FUN9(VAR12);
        }
        FUN10(&VAR13);
        VAR5 = VAR4;
        VAR4 = VAR5->VAR16;
        FUN9(VAR5);
    }
VAR23:
    FUN9(VAR13);
    FUN9(VAR10);
    return VAR7;
}