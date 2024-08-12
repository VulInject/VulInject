static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, VAR6 **VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    int VAR11, VAR12, VAR13 = 0;
    QCowHeader VAR14;
    VAR15 *VAR16;
    VAR6 *VAR17 = NULL;
    uint64_t VAR18;
    uint64_t VAR19;
    const char *VAR20;
    int VAR21 = 0;
    VAR13 = FUN2(VAR2->VAR22, 0, &VAR14, sizeof(VAR14));
    if (VAR13 < 0)
    {
        FUN3(VAR7, -VAR13, "");
        FUN4(&VAR14.VAR23);
        FUN4(&VAR14.VAR24);
        FUN5(&VAR14.VAR25);
        FUN4(&VAR14.VAR26);
        FUN5(&VAR14.VAR27);
        FUN4(&VAR14.VAR28);
        FUN4(&VAR14.VAR29);
        FUN5(&VAR14.VAR30);
        FUN4(&VAR14.VAR31);
        FUN5(&VAR14.VAR32);
        FUN4(&VAR14.VAR33);
        FUN5(&VAR14.VAR34);
        FUN4(&VAR14.VAR35);
        if (VAR14.VAR23 != VAR36)
        {
            FUN6(VAR7, "");
            if (VAR14.VAR24 < 2 || VAR14.VAR24 > 3)
            {
                FUN7(VAR2, VAR7, "", VAR14.VAR24);
                VAR13 = -VAR37;
                VAR9->VAR38 = VAR14.VAR24;
                if (VAR14.VAR28 < VAR39 || VAR14.VAR28 > VAR40)
                {
                    FUN6(VAR7, "", VAR14.VAR28);
                    VAR9->VAR28 = VAR14.VAR28;
                    VAR9->VAR41 = 1 << VAR9->VAR28;
                    VAR9->VAR42 = 1 << (VAR9->VAR28 - 9);
                    if (VAR14.VAR24 == 2)
                    {
                        VAR14.VAR43 = 0;
                        VAR14.VAR44 = 0;
                        VAR14.VAR45 = 0;
                        VAR14.VAR46 = 4;
                        VAR14.VAR47 = 72;
                    }
                    else
                    {
                        FUN5(&VAR14.VAR43);
                        FUN5(&VAR14.VAR44);
                        FUN5(&VAR14.VAR45);
                        FUN4(&VAR14.VAR46);
                        FUN4(&VAR14.VAR47);
                        if (VAR14.VAR47 < 104)
                        {
                            FUN6(VAR7, "");
                            if (VAR14.VAR47 > VAR9->VAR41)
                            {
                                FUN6(VAR7, "");
                                if (VAR14.VAR47 > sizeof(VAR14))
                                {
                                    VAR9->VAR48 = VAR14.VAR47 - sizeof(VAR14);
                                    VAR9->VAR49 = FUN8(VAR9->VAR48);
                                    VAR13 = FUN2(VAR2->VAR22, sizeof(VAR14), VAR9->VAR49, VAR9->VAR48);
                                    if (VAR13 < 0)
                                    {
                                        FUN3(VAR7, -VAR13, ""
                                                                     "");
                                        if (VAR14.VAR25)
                                        {
                                            VAR18 = VAR14.VAR25;
                                        }
                                        else
                                        {
                                            VAR18 = 1 << VAR14.VAR28;
                                            VAR9->VAR43 = VAR14.VAR43;
                                            VAR9->VAR44 = VAR14.VAR44;
                                            VAR9->VAR45 = VAR14.VAR45;
                                            if (VAR9->VAR43 & ~VAR50)
                                            {
                                                void *VAR51 = NULL;
                                                FUN9(VAR2, VAR14.VAR47, VAR18, &VAR51, NULL);
                                                FUN10(VAR2, VAR7, VAR51, VAR9->VAR43 & ~VAR50);
                                                VAR13 = -VAR37;
                                                FUN11(VAR51);
                                                if (VAR9->VAR43 & VAR52)
                                                {
                                                    if ((VAR5 & VAR53) && !(VAR5 & VAR54))
                                                    {
                                                        FUN6(VAR7, ""
                                                                         "");
                                                        VAR13 = -VAR55;
                                                        if (VAR14.VAR46 != 4)
                                                        {
                                                            FUN7(VAR2, VAR7, "", 1 << VAR14.VAR46);
                                                            VAR13 = -VAR37;
                                                            VAR9->VAR46 = VAR14.VAR46;
                                                            if (VAR14.VAR29 > VAR56)
                                                            {
                                                                FUN6(VAR7, "", VAR14.VAR29);
                                                                VAR9->VAR57 = VAR14.VAR29;
                                                                if (VAR9->VAR57)
                                                                {
                                                                    VAR2->VAR58 = 1;
                                                                    VAR9->VAR59 = VAR9->VAR28 - 3;
                                                                    VAR9->VAR60 = 1 << VAR9->VAR59;
                                                                    VAR2->VAR61 = VAR14.VAR27 / 512;
                                                                    VAR9->VAR62 = (62 - (VAR9->VAR28 - 8));
                                                                    VAR9->VAR63 = (1 << (VAR9->VAR28 - 8)) - 1;
                                                                    VAR9->VAR64 = (1LL << VAR9->VAR62) - 1;
                                                                    VAR9->VAR32 = VAR14.VAR32;
                                                                    VAR9->VAR65 = VAR14.VAR33 << (VAR9->VAR28 - 3);
                                                                    VAR9->VAR34 = VAR14.VAR34;
                                                                    VAR9->VAR35 = VAR14.VAR35;
                                                                    VAR9->VAR31 = VAR14.VAR31;
                                                                    VAR19 = FUN12(VAR9, VAR14.VAR27);
                                                                    if (VAR19 > VAR66)
                                                                    {
                                                                        FUN6(VAR7, "");
                                                                        VAR13 = -VAR67;
                                                                        VAR9->VAR19 = VAR19;
                                                                        if (VAR9->VAR31 < VAR9->VAR19)
                                                                        {
                                                                            FUN6(VAR7, "");
                                                                            VAR9->VAR30 = VAR14.VAR30;
                                                                            if (VAR9->VAR31 > 0)
                                                                            {
                                                                                VAR9->VAR68 = FUN13(FUN14(VAR9->VAR31 * sizeof(VAR69), 512));
                                                                                VAR13 = FUN2(VAR2->VAR22, VAR9->VAR30, VAR9->VAR68, VAR9->VAR31 * sizeof(VAR69));
                                                                                if (VAR13 < 0)
                                                                                {
                                                                                    FUN3(VAR7, -VAR13, "");
                                                                                    for (VAR12 = 0; VAR12 < VAR9->VAR31; VAR12++)
                                                                                    {
                                                                                        FUN5(&VAR9->VAR68[VAR12]);
                                                                                        VAR9->VAR70 = FUN15(VAR2, VAR71);
                                                                                        VAR9->VAR72 = FUN15(VAR2, VAR73);
                                                                                        VAR9->VAR74 = FUN8(VAR9->VAR41);
                                                                                        VAR9->VAR75 = FUN16(VAR2, VAR76 * VAR9->VAR41 + 512);
                                                                                        VAR9->VAR77 = -1;
                                                                                        VAR9->VAR5 = VAR5;
                                                                                        VAR13 = FUN17(VAR2);
                                                                                        if (VAR13 != 0)
                                                                                        {
                                                                                            FUN3(VAR7, -VAR13, "");
                                                                                            FUN18(&VAR9->VAR78);
                                                                                            FUN19(&VAR9->VAR79);
                                                                                            if (FUN9(VAR2, VAR14.VAR47, VAR18, NULL, &VAR17))
                                                                                            {
                                                                                                FUN20(VAR7, VAR17);
                                                                                                if (VAR14.VAR25 != 0)
                                                                                                {
                                                                                                    VAR11 = VAR14.VAR26;
                                                                                                    if (VAR11 > 1023)
                                                                                                    {
                                                                                                        VAR11 = 1023;
                                                                                                        VAR13 = FUN2(VAR2->VAR22, VAR14.VAR25, VAR2->VAR80, VAR11);
                                                                                                        if (VAR13 < 0)
                                                                                                        {
                                                                                                            FUN3(VAR7, -VAR13, "");
                                                                                                            VAR2->VAR80[VAR11] = '';
                                                                                                            VAR13 = FUN21(VAR2);
                                                                                                            if (VAR13 < 0)
                                                                                                            {
                                                                                                                FUN3(VAR7, -VAR13, "");
                                                                                                                if (!VAR2->VAR81 && !(VAR5 & VAR82) && VAR9->VAR45)
                                                                                                                {
                                                                                                                    VAR9->VAR45 = 0;
                                                                                                                    VAR13 = FUN22(VAR2);
                                                                                                                    if (VAR13 < 0)
                                                                                                                    {
                                                                                                                        FUN3(VAR7, -VAR13, "");
                                                                                                                        FUN23(&VAR9->VAR83);
                                                                                                                        if (!(VAR5 & (VAR54 | VAR82)) && !VAR2->VAR81 && (VAR9->VAR43 & VAR84))
                                                                                                                        {
                                                                                                                            BdrvCheckResult VAR85 = {0};
                                                                                                                            VAR13 = FUN24(VAR2, &VAR85, VAR86);
                                                                                                                            if (VAR13 < 0)
                                                                                                                            {
                                                                                                                                FUN3(VAR7, -VAR13, "");
                                                                                                                                VAR16 = FUN25(&VAR87, NULL, 0, &VAR88);
                                                                                                                                FUN26(VAR16, VAR4, &VAR17);
                                                                                                                                if (VAR17)
                                                                                                                                {
                                                                                                                                    FUN20(VAR7, VAR17);
                                                                                                                                    VAR9->VAR89 = FUN27(VAR16, VAR90, (VAR9->VAR44 & VAR91));
                                                                                                                                    VAR9->VAR92[VAR93] = false;
                                                                                                                                    VAR9->VAR92[VAR94] = true;
                                                                                                                                    VAR9->VAR92[VAR95] = FUN27(VAR16, VAR96, VAR5 & VAR97);
                                                                                                                                    VAR9->VAR92[VAR98] = FUN27(VAR16, VAR99, true);
                                                                                                                                    VAR9->VAR92[VAR100] = FUN27(VAR16, VAR101, false);
                                                                                                                                    VAR20 = FUN28(VAR16, "") ?: "";
                                                                                                                                    if (!strcmp(VAR20, ""))
                                                                                                                                    {
                                                                                                                                        VAR21 = 0;
                                                                                                                                    }
                                                                                                                                    else if (!strcmp(VAR20, ""))
                                                                                                                                    {
                                                                                                                                        VAR21 = VAR102;
                                                                                                                                    }
                                                                                                                                    else if (!strcmp(VAR20, ""))
                                                                                                                                    {
                                                                                                                                        VAR21 = VAR103;
                                                                                                                                    }
                                                                                                                                    else if (!strcmp(VAR20, ""))
                                                                                                                                    {
                                                                                                                                        VAR21 = VAR104;
                                                                                                                                    }
                                                                                                                                    else
                                                                                                                                    {
                                                                                                                                        FUN6(VAR7, ""
                                                                                                                                                         ""
                                                                                                                                                         "",
                                                                                                                                                   VAR20);
                                                                                                                                        FUN29(VAR16);
                                                                                                                                        VAR9->VAR105 = 0;
                                                                                                                                        for (VAR12 = 0; VAR12 < VAR106; VAR12++)
                                                                                                                                        {
                                                                                                                                            VAR9->VAR105 |= FUN27(VAR16, VAR107[VAR12], VAR21 & (1 << VAR12)) << VAR12;
                                                                                                                                            FUN29(VAR16);
                                                                                                                                            if (VAR9->VAR89 && VAR9->VAR38 < 3)
                                                                                                                                            {
                                                                                                                                                FUN6(VAR7, ""
                                                                                                                                                                 "");
                                                                                                                                                {
                                                                                                                                                    BdrvCheckResult VAR85 = {0};
                                                                                                                                                    FUN30(VAR2, &VAR85, 0);
                                                                                                                                                    return VAR13;
                                                                                                                                                VAR108:
                                                                                                                                                    FUN11(VAR9->VAR49);
                                                                                                                                                    FUN31(VAR2);
                                                                                                                                                    FUN32(VAR2);
                                                                                                                                                    FUN33(VAR2);
                                                                                                                                                    FUN11(VAR9->VAR68);
                                                                                                                                                    VAR9->VAR68 = NULL;
                                                                                                                                                    if (VAR9->VAR70)
                                                                                                                                                    {
                                                                                                                                                        FUN34(VAR2, VAR9->VAR70);
                                                                                                                                                        if (VAR9->VAR72)
                                                                                                                                                        {
                                                                                                                                                            FUN34(VAR2, VAR9->VAR72);
                                                                                                                                                            FUN11(VAR9->VAR74);
                                                                                                                                                            FUN35(VAR9->VAR75);
                                                                                                                                                            return VAR13