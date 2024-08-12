int FUN1(VAR1 *VAR2, VAR3 *VAR4, IDEDriveKind VAR5, const char *VAR6, const char *VAR7, const char *VAR8, uint64_t VAR9, uint32_t VAR10, uint32_t VAR11, uint32_t VAR12, int VAR13)
{
    uint64_t VAR14;
    VAR2->VAR4 = VAR4;
    VAR2->VAR15 = VAR5;
    FUN2(VAR4, &VAR14);
    VAR2->VAR10 = VAR10;
    VAR2->VAR11 = VAR11;
    VAR2->VAR16 = VAR12;
    VAR2->VAR13 = VAR13;
    VAR2->VAR14 = VAR14;
    VAR2->VAR9 = VAR9;
    VAR2->VAR17 = 1;
    VAR2->VAR18 = 1;
    VAR2->VAR19 = 0;
    VAR2->VAR20 = 0;
    if (VAR5 == VAR21)
    {
        FUN3(VAR4, &VAR22, VAR2);
        FUN4(VAR4, 2048);
    }
    else
    {
        if (!FUN5(VAR2->VAR4))
        {
            FUN6("");
            return -1;
        }
        if (FUN7(VAR4))
        {
            FUN6("");
            return -1;
        }
        FUN3(VAR4, &VAR23, VAR2);
    }
    if (VAR7)
    {
        FUN8(VAR2->VAR24, sizeof(VAR2->VAR24), VAR7);
    }
    else
    {
        snprintf(VAR2->VAR24, sizeof(VAR2->VAR24), "", VAR2->VAR25);
    }
    if (VAR8)
    {
        FUN8(VAR2->VAR26, sizeof(VAR2->VAR26), VAR8);
    }
    else
    {
        switch (VAR5)
        {
        case VAR21:
            strcpy(VAR2->VAR26, "");
            break;
        case VAR27:
            strcpy(VAR2->VAR26, "");
            break;
        default:
            strcpy(VAR2->VAR26, "");
            break;
        }
    }
    if (VAR6)
    {
        FUN8(VAR2->VAR6, sizeof(VAR2->VAR6), VAR6);
    }
    else
    {
        FUN8(VAR2->VAR6, sizeof(VAR2->VAR6), FUN9());
    }
    FUN10(VAR2);
    FUN11(VAR4);
    return 0;
}