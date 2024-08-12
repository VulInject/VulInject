int FUN1(VAR1 *VAR2, VAR3 *VAR4, IDEDriveKind VAR5, const char *VAR6, const char *VAR7, const char *VAR8)
{
    int VAR9, VAR10, VAR11;
    uint64_t VAR12;
    VAR2->VAR4 = VAR4;
    VAR2->VAR13 = VAR5;
    FUN2(VAR4, &VAR12);
    FUN3(VAR4, &VAR9, &VAR10, &VAR11);
    if (VAR9 < 1 || VAR9 > 16383)
    {
        FUN4("");
        return -1;
    }
    if (VAR10 < 1 || VAR10 > 16)
    {
        FUN4("");
        return -1;
    }
    if (VAR11 < 1 || VAR11 > 63)
    {
        FUN4("");
        return -1;
    }
    VAR2->VAR9 = VAR9;
    VAR2->VAR10 = VAR10;
    VAR2->VAR14 = VAR11;
    VAR2->VAR12 = VAR12;
    VAR2->VAR15 = 1;
    VAR2->VAR16 = 1;
    VAR2->VAR17 = 0;
    VAR2->VAR18 = 0;
    if (VAR5 == VAR19)
    {
        FUN5(VAR4, &VAR20, VAR2);
        FUN6(VAR4, 2048);
    }
    else
    {
        if (!FUN7(VAR2->VAR4))
        {
            FUN4("");
            return -1;
        }
        if (FUN8(VAR4))
        {
            FUN4("");
            return -1;
        }
    }
    if (VAR7)
    {
        strncpy(VAR2->VAR21, VAR7, sizeof(VAR2->VAR21));
    }
    else
    {
        snprintf(VAR2->VAR21, sizeof(VAR2->VAR21), "", VAR2->VAR22);
    }
    if (VAR8)
    {
        FUN9(VAR2->VAR23, sizeof(VAR2->VAR23), VAR8);
    }
    else
    {
        switch (VAR5)
        {
        case VAR19:
            strcpy(VAR2->VAR23, "");
            break;
        case VAR24:
            strcpy(VAR2->VAR23, "");
            break;
        default:
            strcpy(VAR2->VAR23, "");
            break;
        }
    }
    if (VAR6)
    {
        FUN9(VAR2->VAR6, sizeof(VAR2->VAR6), VAR6);
    }
    else
    {
        FUN9(VAR2->VAR6, sizeof(VAR2->VAR6), VAR25);
    }
    FUN10(VAR2);
    FUN11(VAR4);
    return 0;
}