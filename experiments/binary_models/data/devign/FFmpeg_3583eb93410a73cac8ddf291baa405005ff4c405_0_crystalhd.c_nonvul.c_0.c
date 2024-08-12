static inline VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5, void *VAR6, int *VAR7, uint8_t VAR8)
{
    BC_STATUS VAR9;
    BC_DTS_STATUS VAR10;
    uint8_t VAR11;
    uint8_t VAR12;
    uint8_t VAR13;
    VAR14 *VAR15 = VAR3->VAR16;
    uint8_t VAR17 = (VAR5->VAR18.VAR19 & VAR20) == VAR20;
    uint8_t VAR21 = !!(VAR5->VAR18.VAR19 & VAR22);
    int VAR23 = VAR5->VAR18.VAR23;
    int VAR24 = VAR5->VAR18.VAR24;
    int VAR25;
    VAR26 *VAR27 = VAR5->VAR28;
    int VAR29;
    VAR26 *VAR30;
    int VAR31;
    VAR9 = FUN2(VAR15->VAR32, &VAR10);
    if (VAR9 != VAR33)
    {
        FUN3(VAR3, VAR34, "", VAR9);
        return VAR35;
    }
    VAR11 = VAR36 || !(VAR5->VAR18.VAR19 & VAR37);
    VAR12 = VAR5->VAR18.VAR38 == (VAR10.VAR39 & ~0x40000000);
    VAR13 = ((VAR5->VAR18.VAR19 & VAR40) && VAR11) || VAR12 || VAR17 || VAR8;
    FUN3(VAR3, VAR41, "", VAR12, VAR5->VAR18.VAR38, VAR10.VAR39 & ~0x40000000);
    if (VAR15->VAR42.VAR6[0] && !VAR15->VAR43)
        VAR3->FUN4(VAR3, &VAR15->VAR42);
    VAR15->VAR43 = VAR13 && !VAR15->VAR43;
    VAR15->VAR42.VAR44 = VAR45 | VAR46 | VAR47;
    if (!VAR15->VAR42.VAR6[0])
    {
        if (VAR3->FUN5(VAR3, &VAR15->VAR42) < 0)
        {
            FUN3(VAR3, VAR34, "");
            return VAR35;
        }
    }
    VAR25 = FUN6(VAR3->VAR48, VAR23, 0);
    if (VAR15->VAR49)
    {
        int VAR50;
        if (VAR23 <= 720)
            VAR50 = 720;
        else if (VAR23 <= 1280)
            VAR50 = 1280;
        else if (VAR23 <= 1080)
            VAR50 = 1080;
        VAR29 = FUN6(VAR3->VAR48, VAR50, 0);
    }
    else
    {
        VAR29 = VAR25;
    }
    VAR31 = VAR15->VAR42.VAR51[0];
    VAR30 = VAR15->VAR42.VAR6[0];
    FUN3(VAR15->VAR3, VAR41, "");
    if (VAR13)
    {
        int VAR52 = 0;
        int VAR53 = 0;
        VAR24 /= 2;
        if (VAR17)
        {
            FUN3(VAR15->VAR3, VAR41, "");
            VAR52 = 1;
        }
        else
        {
            FUN3(VAR15->VAR3, VAR41, "");
            VAR52 = 0;
        }
        for (VAR53 = 0; VAR53 < VAR24; VAR52++, VAR53++)
        {
            memcpy(&(VAR30[VAR52 * VAR31]), &(VAR27[VAR53 * VAR29]), VAR25);
            VAR52++;
        }
    }
    else
    {
        FUN7(VAR30, VAR31, VAR27, VAR29, VAR25, VAR24);
    }
    VAR15->VAR42.VAR54 = VAR13;
    if (VAR13)
        VAR15->VAR42.VAR55 = !VAR21;
    if (VAR5->VAR18.VAR56 != 0)
    {
        VAR15->VAR42.VAR57 = FUN8(VAR15, VAR5->VAR18.VAR56);
        FUN3(VAR3, VAR41, ""VAR58\"" VAR59 "", VAR15->VAR42.VAR57);
    }
    if (!VAR15->VAR43)
    {
        *VAR7 = sizeof(VAR60);
        *(VAR60 *)VAR6 = VAR15->VAR42;
    }
    if (VAR61 && VAR5->VAR18.VAR19 & VAR37)
    {
        FUN3(VAR15->VAR3, VAR41, "");
        return VAR62;
    }
    return VAR63;
}