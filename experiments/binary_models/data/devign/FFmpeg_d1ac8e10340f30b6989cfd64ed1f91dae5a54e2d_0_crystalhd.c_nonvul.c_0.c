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
    if (VAR13->VAR56.VAR6[0] && !VAR13->VAR49)
        VAR3->FUN6(VAR3, &VAR13->VAR56);
    VAR13->VAR49 = VAR11 && !VAR13->VAR49;
    VAR13->VAR56.VAR57 = VAR58 | VAR59 | VAR60;
    if (!VAR13->VAR56.VAR6[0])
    {
        if (VAR3->FUN7(VAR3, &VAR13->VAR56) < 0)
        {
            FUN4(VAR3, VAR43, "");
            return VAR44;
        }
    }
    VAR26 = FUN8(VAR3->VAR61, VAR24, 0);
    if (VAR13->VAR62)
    {
        int VAR63;
        if (VAR24 <= 720)
            VAR63 = 720;
        else if (VAR24 <= 1280)
            VAR63 = 1280;
        else
            VAR63 = 1920;
        VAR30 = FUN8(VAR3->VAR61, VAR63, 0);
    }
    else
    {
        VAR30 = VAR26;
    }
    VAR32 = VAR13->VAR56.VAR64[0];
    VAR31 = VAR13->VAR56.VAR6[0];
    FUN4(VAR13->VAR3, VAR38, "");
    if (VAR11)
    {
        int VAR65 = 0;
        int VAR66 = 0;
        VAR25 /= 2;
        if (VAR18)
        {
            FUN4(VAR13->VAR3, VAR38, "");
            VAR65 = 1;
        }
        else
        {
            FUN4(VAR13->VAR3, VAR38, "");
            VAR65 = 0;
        }
        for (VAR66 = 0; VAR66 < VAR25; VAR65++, VAR66++)
        {
            memcpy(&(VAR31[VAR65 * VAR32]), &(VAR28[VAR66 * VAR30]), VAR26);
            VAR65++;
        }
    }
    else
    {
        FUN9(VAR31, VAR32, VAR28, VAR30, VAR26, VAR25);
    }
    VAR13->VAR56.VAR67 = VAR11;
    if (VAR11)
        VAR13->VAR56.VAR68 = !VAR22;
    VAR13->VAR56.VAR15 = VAR15;
    if (!VAR13->VAR49)
    {
        *VAR7 = sizeof(VAR69);
        *(VAR69 *)VAR6 = VAR13->VAR56;
    }
    if (!VAR11 && (VAR5->VAR19.VAR20 & VAR48) && (VAR17 == VAR70 || VAR17 == VAR37))
    {
        FUN4(VAR13->VAR3, VAR38, "");
        return VAR71;
    }
    return VAR13->VAR49 && (!(VAR5->VAR19.VAR20 & VAR48) || VAR17 == VAR72) ? VAR73 : VAR54;
}