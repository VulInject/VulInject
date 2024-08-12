void FUN1(char *VAR1, int VAR2, VAR3 *VAR4, int VAR5)
{
    const char *VAR6;
    const char *VAR7;
    const char *VAR8 = NULL;
    const VAR9 *VAR10;
    int64_t VAR11;
    int VAR12 = 0;
    AVRational VAR13;
    const char *VAR14 = VAR4->VAR15 ? (const char *)VAR4->VAR15 : "";
    if (!VAR1 || VAR2 <= 0)
        return;
    VAR6 = FUN2(VAR4->VAR6);
    VAR7 = FUN3(VAR4->VAR16);
    if (VAR4->VAR8 != VAR17)
    {
        if (VAR4->VAR18)
            VAR10 = VAR4->VAR18;
        else
            VAR10 = VAR5 ? FUN4(VAR4->VAR16) : FUN5(VAR4->VAR16);
        if (VAR10)
            VAR8 = FUN6(VAR10, VAR4->VAR8);
    }
    snprintf(VAR1, VAR2, "", VAR6 ? VAR6 : "", VAR7);
    VAR1[0] ^= '' ^ '';
    if (VAR4->VAR18 && strcmp(VAR4->VAR18->VAR19, VAR7))
        snprintf(VAR1 + strlen(VAR1), VAR2 - strlen(VAR1), "", VAR4->VAR18->VAR19);
    if (VAR8)
        snprintf(VAR1 + strlen(VAR1), VAR2 - strlen(VAR1), "", VAR8);
    if (VAR4->VAR6 == VAR20 && FUN7() >= VAR21 && VAR4->VAR22)
        snprintf(VAR1 + strlen(VAR1), VAR2 - strlen(VAR1), "", VAR4->VAR22, VAR4->VAR22 > 1 ? "" : "");
    if (VAR4->VAR23)
    {
        char VAR24[32];
        FUN8(VAR24, sizeof(VAR24), VAR4->VAR23);
        snprintf(VAR1 + strlen(VAR1), VAR2 - strlen(VAR1), "", VAR24, VAR4->VAR23);
    }
    switch (VAR4->VAR6)
    {
    case VAR20:
    {
        char VAR25[256] = "";
        FUN9(VAR1, VAR14, VAR2);
        snprintf(VAR1 + strlen(VAR1), VAR2 - strlen(VAR1), "", VAR4->VAR26 == VAR27 ? "" : FUN10(VAR4->VAR26));
        if (VAR4->VAR28 && VAR4->VAR26 != VAR27 && VAR4->VAR28 < FUN11(VAR4->VAR26)->VAR29[0].VAR30)
            FUN12(VAR25, sizeof(VAR25), "", VAR4->VAR28);
        if (VAR4->VAR31 != VAR32)
            FUN12(VAR25, sizeof(VAR25), "", FUN13(VAR4->VAR31));
        if (VAR4->VAR33 != VAR34 || VAR4->VAR35 != VAR36 || VAR4->VAR37 != VAR38)
        {
            if (VAR4->VAR33 != (int)VAR4->VAR35 || VAR4->VAR33 != (int)VAR4->VAR37)
            {
                VAR12 = 1;
                FUN12(VAR25, sizeof(VAR25), "", FUN14(VAR4->VAR33), FUN15(VAR4->VAR35), FUN16(VAR4->VAR37));
            }
            else
                FUN12(VAR25, sizeof(VAR25), "", FUN17(VAR4->VAR33));
        }
        if (FUN7() >= VAR39 && VAR4->VAR40 != VAR41)
            FUN12(VAR25, sizeof(VAR25), "", FUN18(VAR4->VAR40));
        if (strlen(VAR25) > 1)
        {
            VAR25[strlen(VAR25) - 2] = 0;
            FUN12(VAR1, VAR2, "", VAR25);
        }
    }
        if (VAR4->VAR42)
        {
            FUN9(VAR1, VAR12 ? VAR14 : "", VAR2);
            snprintf(VAR1 + strlen(VAR1), VAR2 - strlen(VAR1), "", VAR4->VAR42, VAR4->VAR43);
            if (FUN7() >= VAR21 && (VAR4->VAR42 != VAR4->VAR44 || VAR4->VAR43 != VAR4->VAR45))
                snprintf(VAR1 + strlen(VAR1), VAR2 - strlen(VAR1), "", VAR4->VAR44, VAR4->VAR45);
            if (VAR4->VAR46.VAR47)
            {
                FUN19(&VAR13.VAR47, &VAR13.VAR48, VAR4->VAR42 * VAR4->VAR46.VAR47, VAR4->VAR43 * VAR4->VAR46.VAR48, 1024 * 1024);
                snprintf(VAR1 + strlen(VAR1), VAR2 - strlen(VAR1), "", VAR4->VAR46.VAR47, VAR4->VAR46.VAR48, VAR13.VAR47, VAR13.VAR48);
            }
            if (FUN7() >= VAR39)
            {
                int VAR49 = FUN20(VAR4->VAR50.VAR47, VAR4->VAR50.VAR48);
                snprintf(VAR1 + strlen(VAR1), VAR2 - strlen(VAR1), "", VAR4->VAR50.VAR47 / VAR49, VAR4->VAR50.VAR48 / VAR49);
            }
        }
        if (VAR5)
        {
            snprintf(VAR1 + strlen(VAR1), VAR2 - strlen(VAR1), "", VAR4->VAR51, VAR4->VAR52);
        }
        else
        {
            if (VAR4->VAR53 & VAR54)
                snprintf(VAR1 + strlen(VAR1), VAR2 - strlen(VAR1), "");
            if (VAR4->VAR53 & VAR55)
                snprintf(VAR1 + strlen(VAR1), VAR2 - strlen(VAR1), "");
        }
        break;
    case VAR56:
        FUN9(VAR1, VAR14, VAR2);
        if (VAR4->VAR57)
        {
            snprintf(VAR1 + strlen(VAR1), VAR2 - strlen(VAR1), "", VAR4->VAR57);
        }
        FUN21(VAR1 + strlen(VAR1), VAR2 - strlen(VAR1), VAR4->VAR58, VAR4->VAR59);
        if (VAR4->VAR60 != VAR61)
        {
            snprintf(VAR1 + strlen(VAR1), VAR2 - strlen(VAR1), "", FUN22(VAR4->VAR60));
        }
        if (VAR4->VAR28 > 0 && VAR4->VAR28 != FUN23(VAR4->VAR60) * 8)
            snprintf(VAR1 + strlen(VAR1), VAR2 - strlen(VAR1), "", VAR4->VAR28);
        break;
    case VAR62:
        if (FUN7() >= VAR39)
        {
            int VAR49 = FUN20(VAR4->VAR50.VAR47, VAR4->VAR50.VAR48);
            if (VAR49)
                snprintf(VAR1 + strlen(VAR1), VAR2 - strlen(VAR1), "", VAR4->VAR50.VAR47 / VAR49, VAR4->VAR50.VAR48 / VAR49);
        }
        break;
    case VAR63:
        if (VAR4->VAR42)
            snprintf(VAR1 + strlen(VAR1), VAR2 - strlen(VAR1), "", VAR4->VAR42, VAR4->VAR43);
        break;
    default:
        return;
    }
    if (VAR5)
    {
        if (VAR4->VAR64 & VAR65)
            snprintf(VAR1 + strlen(VAR1), VAR2 - strlen(VAR1), "");
        if (VAR4->VAR64 & VAR66)
            snprintf(VAR1 + strlen(VAR1), VAR2 - strlen(VAR1), "");
    }
    VAR11 = FUN24(VAR4);
    if (VAR11 != 0)
    {
        snprintf(VAR1 + strlen(VAR1), VAR2 - strlen(VAR1), "" VAR67 "", VAR11 / 1000);
    }
    else if (VAR4->VAR68 > 0)
    {
        snprintf(VAR1 + strlen(VAR1), VAR2 - strlen(VAR1), "" VAR67 "", (VAR69)VAR4->VAR68 / 1000);
    }
}