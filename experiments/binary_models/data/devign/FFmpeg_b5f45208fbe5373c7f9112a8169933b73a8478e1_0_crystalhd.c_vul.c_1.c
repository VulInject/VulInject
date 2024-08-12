static inline VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5, void *VAR6, int *VAR7)
{
    BC_STATUS VAR8;
    BC_DTS_STATUS VAR9 = {
        0,
    };
    uint8_t VAR10;
    uint8_t VAR11;
    VAR12 *VAR13 = VAR3->VAR14;
    int64_t VAR15 = VAR16;
    uint8_t VAR17 = 0;
    uint8_t VAR18 = (VAR5->VAR19.VAR20 & VAR21) == VAR21;
    uint8_t VAR22 = !!(VAR5->VAR19.VAR20 & VAR23);
    int VAR24 = VAR5->VAR19.VAR24;
    int VAR25 = VAR5->VAR19.VAR25;
    int VAR26;
    VAR27 *VAR28 = VAR5->VAR29;
    int VAR30;
    VAR27 *VAR31;
    int VAR32;
    if (VAR5->VAR19.VAR33 != 0)
    {
        VAR34 *VAR35 = FUN2(VAR13, VAR5->VAR19.VAR33);
        if (VAR35)
        {
            VAR15 = VAR35->VAR36;
            VAR17 = VAR35->VAR17;
            FUN3(VAR35);
        }
        else
        {
            VAR17 = VAR37;
        }
        FUN4(VAR3, VAR38, ""VAR39\"" VAR40 "", VAR5->VAR19.VAR33);
        FUN4(VAR3, VAR38, "", VAR17);
    }
    VAR8 = FUN5(VAR13->VAR41, &VAR9);
    if (VAR8 != VAR42)
    {
        FUN4(VAR3, VAR43, "", VAR8);
        return VAR44;
    }
    VAR10 = VAR3->VAR45->VAR46 != VAR47 || !(VAR5->VAR19.VAR20 & VAR48) || VAR13->VAR49 || (VAR9.VAR50 & ~0x40000000) == VAR5->VAR19.VAR51;
    if (VAR5->VAR19.VAR51 == VAR13->VAR52 && !VAR13->VAR49)
    {
        FUN4(VAR3, VAR53, "");
        return VAR54;
    }
    VAR11 = (VAR5->VAR19.VAR20 & VAR55) && VAR10;
    if (!VAR10 && (VAR9.VAR50 & ~0x40000000) == 0)
    {
        FUN4(VAR3, VAR38, "");
    }
    FUN4(VAR3, VAR38, "", VAR11, VAR10);
    if (VAR13->VAR56->VAR6[0] && !VAR13->VAR49)
        FUN6(VAR13->VAR56);
    VAR13->VAR49 = VAR11 && !VAR13->VAR49;
    if (!VAR13->VAR56->VAR6[0])
    {
        if (FUN7(VAR3, VAR13->VAR56, VAR57) < 0)
            return VAR44;
    }
    VAR26 = FUN8(VAR3->VAR58, VAR24, 0);
    if (VAR13->VAR59)
    {
        int VAR60;
        if (VAR24 <= 720)
            VAR60 = 720;
        else if (VAR24 <= 1280)
            VAR60 = 1280;
        else
            VAR60 = 1920;
        VAR30 = FUN8(VAR3->VAR58, VAR60, 0);
    }
    else
    {
        VAR30 = VAR26;
    }
    VAR32 = VAR13->VAR56->VAR61[0];
    VAR31 = VAR13->VAR56->VAR6[0];
    FUN4(VAR13->VAR3, VAR38, "");
    if (VAR11)
    {
        int VAR62 = 0;
        int VAR63 = 0;
        VAR25 /= 2;
        if (VAR18)
        {
            FUN4(VAR13->VAR3, VAR38, "");
            VAR62 = 1;
        }
        else
        {
            FUN4(VAR13->VAR3, VAR38, "");
            VAR62 = 0;
        }
        for (VAR63 = 0; VAR63 < VAR25; VAR62++, VAR63++)
        {
            memcpy(&(VAR31[VAR62 * VAR32]), &(VAR28[VAR63 * VAR30]), VAR26);
            VAR62++;
        }
    }
    else
    {
        FUN9(VAR31, VAR32, VAR28, VAR30, VAR26, VAR25);
    }
    VAR13->VAR56->VAR64 = VAR11;
    if (VAR11)
        VAR13->VAR56->VAR65 = !VAR22;
    VAR13->VAR56->VAR39 = VAR15;
    FF_DISABLE_DEPRECATION_WARNINGS VAR13->VAR56->VAR15 = VAR15;
    FF_ENABLE_DEPRECATION_WARNINGS if (!VAR13->VAR49)
    {
        *VAR7 = 1;
        if ((VAR8 = FUN10(VAR6, VAR13->VAR56)) < 0)
        {
            return VAR8;
        }
    }
    if (!VAR11 && (VAR5->VAR19.VAR20 & VAR48) && (VAR17 == VAR66 || VAR17 == VAR37))
    {
        FUN4(VAR13->VAR3, VAR38, "");
        return VAR67;
    }
    return VAR13->VAR49 && (!(VAR5->VAR19.VAR20 & VAR48) || VAR17 == VAR68) ? VAR69 : VAR54;
}