int FUN1(VAR1 *VAR2, VAR3 *VAR4, IDEDriveKind VAR5, const char *VAR6, const char *VAR7, const char *VAR8, uint64_t VAR9)
{
    int VAR10, VAR11, VAR12;
    uint64_t VAR13;
    VAR2->VAR4 = VAR4;
    VAR2->VAR14 = VAR5;
    FUN2(VAR4, &VAR13);
    FUN3(VAR4, &VAR10, &VAR11, &VAR12);
    if (VAR10 < 1 || VAR10 > 16383)
    {
        FUN4("");
        return -1;
    }
    if (VAR11 < 1 || VAR11 > 16)
    {
        FUN4("");
        return -1;
    }
    if (VAR12 < 1 || VAR12 > 63)
    {
        FUN4("");
        return -1;
    }
    VAR2->VAR10 = VAR10;
    VAR2->VAR11 = VAR11;
    VAR2->VAR15 = VAR12;
    VAR2->VAR13 = VAR13;
    VAR2->VAR9 = VAR9;
    VAR2->VAR16 = 1;
    VAR2->VAR17 = 1;
    VAR2->VAR18 = 0;
    VAR2->VAR19 = 0;
    if (VAR5 == VAR20)
    {
        FUN5(VAR4, &VAR21, VAR2);
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
        FUN9(VAR2->VAR22, sizeof(VAR2->VAR22), VAR7);
    }
    else
    {
        snprintf(VAR2->VAR22, sizeof(VAR2->VAR22), "", VAR2->VAR23);
    }
    if (VAR8)
    {
        FUN9(VAR2->VAR24, sizeof(VAR2->VAR24), VAR8);
    }
    else
    {
        switch (VAR5)
        {
        case VAR20:
            strcpy(VAR2->VAR24, "");
            break;
        case VAR25:
            strcpy(VAR2->VAR24, "");
            break;
        default:
            strcpy(VAR2->VAR24, "");
            break;
        }
    }
    if (VAR6)
    {
        FUN9(VAR2->VAR6, sizeof(VAR2->VAR6), VAR6);
    }
    else
    {
        FUN9(VAR2->VAR6, sizeof(VAR2->VAR6), FUN10());
    }
    FUN11(VAR2);
    FUN12(VAR4);
    return 0;
}