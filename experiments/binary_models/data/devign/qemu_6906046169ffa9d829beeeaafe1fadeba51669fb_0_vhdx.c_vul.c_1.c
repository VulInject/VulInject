static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 **VAR6)
{
    int VAR7;
    VAR8 *VAR9;
    VAR8 *VAR10;
    bool VAR11 = false;
    bool VAR12 = false;
    uint64_t VAR13 = 0;
    uint64_t VAR14 = 0;
    VAR15 *VAR16;
    VAR9 = FUN2(VAR2, sizeof(VAR8));
    VAR10 = FUN2(VAR2, sizeof(VAR8));
    VAR16 = FUN2(VAR2, VAR17);
    VAR4->VAR18[0] = VAR9;
    VAR4->VAR18[1] = VAR10;
    VAR7 = FUN3(VAR2->VAR19, VAR20, VAR16, VAR17);
    if (VAR7 < 0)
    {
        goto VAR21;
    }
    memcpy(VAR9, VAR16, sizeof(VAR8));
    FUN4(VAR9);
    if (FUN5(VAR16, VAR17, 4) && !memcmp(&VAR9->VAR22, "", 4) && VAR9->VAR23 == 1)
    {
        VAR13 = VAR9->VAR24;
        VAR11 = true;
    }
    VAR7 = FUN3(VAR2->VAR19, VAR25, VAR16, VAR17);
    if (VAR7 < 0)
    {
        goto VAR21;
    }
    memcpy(VAR10, VAR16, sizeof(VAR8));
    FUN4(VAR10);
    if (FUN5(VAR16, VAR17, 4) && !memcmp(&VAR10->VAR22, "", 4) && VAR10->VAR23 == 1)
    {
        VAR14 = VAR10->VAR24;
        VAR12 = true;
    }
    if (VAR11 && !VAR12)
    {
        VAR4->VAR26 = 0;
    }
    else if (!VAR11 && VAR12)
    {
        VAR4->VAR26 = 1;
    }
    else if (!VAR11 && !VAR12)
    {
        goto VAR21;
    }
    else
    {
        if (VAR13 > VAR14)
        {
            VAR4->VAR26 = 0;
        }
        else if (VAR14 > VAR13)
        {
            VAR4->VAR26 = 1;
        }
        else
        {
            goto VAR21;
        }
    }
    FUN6(VAR4, VAR4->VAR18[VAR4->VAR26]->VAR27, VAR4->VAR18[VAR4->VAR26]->VAR28);
    goto VAR29;
VAR21:
    FUN7(VAR6, -VAR7, "");
    FUN8(VAR9);
    FUN8(VAR10);
    VAR4->VAR18[0] = NULL;
    VAR4->VAR18[1] = NULL;
VAR29:
    FUN8(VAR16);
}