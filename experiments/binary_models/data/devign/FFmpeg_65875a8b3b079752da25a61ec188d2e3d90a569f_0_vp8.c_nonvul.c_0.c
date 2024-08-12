static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = &VAR2->VAR7;
    int VAR8, VAR9, VAR10, VAR11;
    int VAR12 = VAR2->VAR13->VAR12;
    int VAR14 = VAR2->VAR13->VAR14;
    VAR2->VAR15 = !(VAR4[0] & 1);
    VAR2->VAR16 = (VAR4[0] >> 1) & 7;
    VAR2->VAR17 = !(VAR4[0] & 0x10);
    VAR8 = FUN2(VAR4) >> 5;
    VAR4 += 3;
    VAR5 -= 3;
    if (VAR2->VAR16 > 3)
        FUN3(VAR2->VAR13, VAR18, "", VAR2->VAR16);
    if (!VAR2->VAR16)
        memcpy(VAR2->VAR19, VAR2->VAR20.VAR21, sizeof(VAR2->VAR19));
    else
        memcpy(VAR2->VAR19, VAR2->VAR20.VAR22, sizeof(VAR2->VAR19));
    if (VAR8 > VAR5 - 7 * VAR2->VAR15)
    {
        FUN3(VAR2->VAR13, VAR23, "");
        return VAR24;
    }
    if (VAR2->VAR15)
    {
        if (FUN2(VAR4) != 0x2a019d)
        {
            FUN3(VAR2->VAR13, VAR23, "", FUN2(VAR4));
            return VAR24;
        }
        VAR12 = FUN4(VAR4 + 3) & 0x3fff;
        VAR14 = FUN4(VAR4 + 5) & 0x3fff;
        VAR9 = VAR4[4] >> 6;
        VAR10 = VAR4[6] >> 6;
        VAR4 += 7;
        VAR5 -= 7;
        if (VAR9 || VAR10)
            FUN5(VAR2->VAR13, "");
        VAR2->VAR25 = VAR2->VAR26 = VAR27;
        FUN6(VAR2);
        memcpy(VAR2->VAR28->VAR29, VAR30, sizeof(VAR2->VAR28->VAR29));
        memcpy(VAR2->VAR28->VAR31, VAR32, sizeof(VAR2->VAR28->VAR31));
        memcpy(VAR2->VAR28->VAR33, VAR34, sizeof(VAR2->VAR28->VAR33));
        memset(&VAR2->VAR35, 0, sizeof(VAR2->VAR35));
        memset(&VAR2->VAR36, 0, sizeof(VAR2->VAR36));
    }
    FUN7(VAR7, VAR4, VAR8);
    VAR4 += VAR8;
    VAR5 -= VAR8;
    if (VAR2->VAR15)
    {
        VAR2->VAR37 = FUN8(VAR7);
        if (VAR2->VAR37)
            FUN3(VAR2->VAR13, VAR18, "");
        VAR2->VAR38 = FUN8(VAR7);
    }
    if ((VAR2->VAR35.VAR39 = FUN8(VAR7)))
        FUN9(VAR2);
    else
        VAR2->VAR35.VAR40 = 0;
    VAR2->VAR41.VAR42 = FUN8(VAR7);
    VAR2->VAR41.VAR43 = FUN10(VAR7, 6);
    VAR2->VAR41.VAR44 = FUN10(VAR7, 3);
    if ((VAR2->VAR36.VAR39 = FUN8(VAR7)))
        if (FUN8(VAR7))
            FUN11(VAR2);
    if (FUN12(VAR2, VAR4, VAR5))
    {
        FUN3(VAR2->VAR13, VAR23, "");
        return VAR24;
    }
    if (!VAR2->VAR45 || VAR12 != VAR2->VAR13->VAR12 || VAR14 != VAR2->VAR13->VAR14)
        if ((VAR11 = FUN13(VAR2, VAR12, VAR14)) < 0)
            return VAR11;
    FUN14(VAR2);
    if (!VAR2->VAR15)
    {
        FUN15(VAR2);
        VAR2->VAR46[VAR47] = FUN8(VAR7);
        VAR2->VAR46[VAR48] = FUN8(VAR7);
    }
    if (!(VAR2->VAR49 = FUN8(VAR7)))
        VAR2->VAR28[1] = VAR2->VAR28[0];
    VAR2->VAR50 = VAR2->VAR15 || FUN8(VAR7);
    FUN16(VAR2);
    if ((VAR2->VAR51 = FUN8(VAR7)))
        VAR2->VAR28->VAR52 = FUN10(VAR7, 8);
    if (!VAR2->VAR15)
    {
        VAR2->VAR28->VAR53 = FUN10(VAR7, 8);
        VAR2->VAR28->VAR54 = FUN10(VAR7, 8);
        VAR2->VAR28->VAR55 = FUN10(VAR7, 8);
        FUN17(VAR2, VAR56);
    }
    return 0;
}