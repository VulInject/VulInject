static inline VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5, void *VAR6, int *VAR7, uint8_t VAR8)
{
    BC_STATUS VAR9;
    BC_DTS_STATUS VAR10;
    uint8_t VAR11;
    uint8_t VAR12;
    uint8_t VAR13;
    VAR14 *VAR15 = VAR3->VAR16;
    int64_t VAR17 = VAR18;
    uint8_t VAR19 = 0;
    uint8_t VAR20 = (VAR5->VAR21.VAR22 & VAR23) == VAR23;
    uint8_t VAR24 = !!(VAR5->VAR21.VAR22 & VAR25);
    int VAR26 = VAR5->VAR21.VAR26;
    int VAR27 = VAR5->VAR21.VAR27;
    int VAR28;
    VAR29 *VAR30 = VAR5->VAR31;
    int VAR32;
    VAR29 *VAR33;
    int VAR34;
    if (VAR5->VAR21.VAR35 != 0)
    {
        VAR36 *VAR37 = FUN2(VAR15, VAR5->VAR21.VAR35);
        if (VAR37)
        {
            VAR17 = VAR37->VAR38;
            VAR19 = VAR37->VAR19;
            FUN3(VAR37);
        }
        else
        {
            VAR19 = VAR39;
        }
        FUN4(VAR3, VAR40, ""VAR41\"" VAR42 "", VAR5->VAR21.VAR35);
        FUN4(VAR3, VAR40, "", VAR19);
    }
    VAR9 = FUN5(VAR15->VAR43, &VAR10);
    if (VAR9 != VAR44)
    {
        FUN4(VAR3, VAR45, "", VAR9);
        return VAR46;
    }
    VAR11 = VAR47 || !(VAR5->VAR21.VAR22 & VAR48);
    VAR12 = VAR5->VAR21.VAR49 == (VAR10.VAR50 & ~0x40000000);
    VAR13 = ((VAR5->VAR21.VAR22 & VAR51) && VAR11) || VAR12 || VAR20 || VAR8;
    FUN4(VAR3, VAR40, "", VAR12, VAR5->VAR21.VAR49, VAR10.VAR50 & ~0x40000000);
    if (VAR15->VAR52.VAR6[0] && !VAR15->VAR53)
        VAR3->FUN6(VAR3, &VAR15->VAR52);
    VAR15->VAR53 = VAR13 && !VAR15->VAR53;
    VAR15->VAR52.VAR54 = VAR55 | VAR56 | VAR57;
    if (!VAR15->VAR52.VAR6[0])
    {
        if (VAR3->FUN7(VAR3, &VAR15->VAR52) < 0)
        {
            FUN4(VAR3, VAR45, "");
            return VAR46;
        }
    }
    VAR28 = FUN8(VAR3->VAR58, VAR26, 0);
    if (VAR15->VAR59)
    {
        int VAR60;
        if (VAR26 <= 720)
            VAR60 = 720;
        else if (VAR26 <= 1280)
            VAR60 = 1280;
        else if (VAR26 <= 1080)
            VAR60 = 1080;
        VAR32 = FUN8(VAR3->VAR58, VAR60, 0);
    }
    else
    {
        VAR32 = VAR28;
    }
    VAR34 = VAR15->VAR52.VAR61[0];
    VAR33 = VAR15->VAR52.VAR6[0];
    FUN4(VAR15->VAR3, VAR40, "");
    if (VAR13)
    {
        int VAR62 = 0;
        int VAR63 = 0;
        VAR27 /= 2;
        if (VAR20)
        {
            FUN4(VAR15->VAR3, VAR40, "");
            VAR62 = 1;
        }
        else
        {
            FUN4(VAR15->VAR3, VAR40, "");
            VAR62 = 0;
        }
        for (VAR63 = 0; VAR63 < VAR27; VAR62++, VAR63++)
        {
            memcpy(&(VAR33[VAR62 * VAR34]), &(VAR30[VAR63 * VAR32]), VAR28);
            VAR62++;
        }
    }
    else
    {
        FUN9(VAR33, VAR34, VAR30, VAR32, VAR28, VAR27);
    }
    VAR15->VAR52.VAR64 = VAR13;
    if (VAR13)
        VAR15->VAR52.VAR65 = !VAR24;
    VAR15->VAR52.VAR17 = VAR17;
    if (!VAR15->VAR53)
    {
        *VAR7 = sizeof(VAR66);
        *(VAR66 *)VAR6 = VAR15->VAR52;
    }
    if (VAR67 && VAR5->VAR21.VAR22 & VAR48)
    {
        FUN4(VAR15->VAR3, VAR40, "");
        return VAR68;
    }
    return VAR15->VAR53 && !(VAR5->VAR21.VAR22 & VAR48) ? VAR69 : VAR70;
}