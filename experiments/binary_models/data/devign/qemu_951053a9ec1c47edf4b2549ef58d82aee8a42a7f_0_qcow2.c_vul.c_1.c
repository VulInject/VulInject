static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, VAR6 **VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    unsigned int VAR11, VAR12;
    int VAR13 = 0;
    QCowHeader VAR14;
    VAR6 *VAR15 = NULL;
    uint64_t VAR16;
    uint64_t VAR17;
    bool VAR18 = false;
    VAR13 = FUN2(VAR2->VAR19, 0, &VAR14, sizeof(VAR14));
    if (VAR13 < 0)
    {
        FUN3(VAR7, -VAR13, "");
        FUN4(&VAR14.VAR20);
        FUN4(&VAR14.VAR21);
        FUN5(&VAR14.VAR22);
        FUN4(&VAR14.VAR23);
        FUN5(&VAR14.VAR24);
        FUN4(&VAR14.VAR25);
        FUN4(&VAR14.VAR26);
        FUN5(&VAR14.VAR27);
        FUN4(&VAR14.VAR28);
        FUN5(&VAR14.VAR29);
        FUN4(&VAR14.VAR30);
        FUN5(&VAR14.VAR31);
        FUN4(&VAR14.VAR32);
        if (VAR14.VAR20 != VAR33)
        {
            FUN6(VAR7, "");
            if (VAR14.VAR21 < 2 || VAR14.VAR21 > 3)
            {
                FUN6(VAR7, "" VAR34, VAR14.VAR21);
                VAR13 = -VAR35;
                VAR9->VAR36 = VAR14.VAR21;
                if (VAR14.VAR25 < VAR37 || VAR14.VAR25 > VAR38)
                {
                    FUN6(VAR7, "" VAR34, VAR14.VAR25);
                    VAR9->VAR25 = VAR14.VAR25;
                    VAR9->VAR39 = 1 << VAR9->VAR25;
                    VAR9->VAR40 = 1 << (VAR9->VAR25 - VAR41);
                    if (VAR14.VAR21 == 2)
                    {
                        VAR14.VAR42 = 0;
                        VAR14.VAR43 = 0;
                        VAR14.VAR44 = 0;
                        VAR14.VAR45 = 4;
                        VAR14.VAR46 = 72;
                    }
                    else
                    {
                        FUN5(&VAR14.VAR42);
                        FUN5(&VAR14.VAR43);
                        FUN5(&VAR14.VAR44);
                        FUN4(&VAR14.VAR45);
                        FUN4(&VAR14.VAR46);
                        if (VAR14.VAR46 < 104)
                        {
                            FUN6(VAR7, "");
                            if (VAR14.VAR46 > VAR9->VAR39)
                            {
                                FUN6(VAR7, "");
                                if (VAR14.VAR46 > sizeof(VAR14))
                                {
                                    VAR9->VAR47 = VAR14.VAR46 - sizeof(VAR14);
                                    VAR9->VAR48 = FUN7(VAR9->VAR47);
                                    VAR13 = FUN2(VAR2->VAR19, sizeof(VAR14), VAR9->VAR48, VAR9->VAR47);
                                    if (VAR13 < 0)
                                    {
                                        FUN3(VAR7, -VAR13, ""
                                                                     "");
                                        if (VAR14.VAR22 > VAR9->VAR39)
                                        {
                                            FUN6(VAR7, "");
                                            if (VAR14.VAR22)
                                            {
                                                VAR16 = VAR14.VAR22;
                                            }
                                            else
                                            {
                                                VAR16 = 1 << VAR14.VAR25;
                                                VAR9->VAR42 = VAR14.VAR42;
                                                VAR9->VAR43 = VAR14.VAR43;
                                                VAR9->VAR44 = VAR14.VAR44;
                                                if (VAR9->VAR42 & ~VAR49)
                                                {
                                                    void *VAR50 = NULL;
                                                    FUN8(VAR2, VAR14.VAR46, VAR16, &VAR50, VAR5, NULL, NULL);
                                                    FUN9(VAR7, VAR50, VAR9->VAR42 & ~VAR49);
                                                    VAR13 = -VAR35;
                                                    FUN10(VAR50);
                                                    if (VAR9->VAR42 & VAR51)
                                                    {
                                                        if ((VAR5 & VAR52) && !(VAR5 & VAR53))
                                                        {
                                                            FUN6(VAR7, ""
                                                                             "");
                                                            VAR13 = -VAR54;
                                                            if (VAR14.VAR45 > 6)
                                                            {
                                                                FUN6(VAR7, ""
                                                                                 "");
                                                                VAR9->VAR45 = VAR14.VAR45;
                                                                VAR9->VAR55 = 1 << VAR9->VAR45;
                                                                VAR9->VAR56 = FUN11(1) << (VAR9->VAR55 - 1);
                                                                VAR9->VAR56 += VAR9->VAR56 - 1;
                                                                VAR9->VAR57 = VAR14.VAR26;
                                                                if (VAR9->VAR57)
                                                                {
                                                                    if (FUN12() && VAR9->VAR57 == VAR58)
                                                                    {
                                                                        FUN6(VAR7, ""
                                                                                         "");
                                                                        FUN13(VAR7, ""
                                                                                                ""
                                                                                                ""
                                                                                                "");
                                                                        VAR13 = -VAR59;
                                                                        if (VAR9->VAR57 == VAR58)
                                                                        {
                                                                            VAR9->VAR60 = false;
                                                                        }
                                                                        else
                                                                        {
                                                                            VAR9->VAR60 = true;
                                                                            VAR2->VAR61 = true;
                                                                            VAR9->VAR62 = VAR9->VAR25 - 3;
                                                                            VAR9->VAR63 = 1 << VAR9->VAR62;
                                                                            VAR9->VAR64 = VAR9->VAR25 - (VAR9->VAR45 - 3);
                                                                            VAR9->VAR65 = 1 << VAR9->VAR64;
                                                                            VAR2->VAR66 = VAR14.VAR24 / 512;
                                                                            VAR9->VAR67 = (62 - (VAR9->VAR25 - 8));
                                                                            VAR9->VAR68 = (1 << (VAR9->VAR25 - 8)) - 1;
                                                                            VAR9->VAR69 = (1LL << VAR9->VAR67) - 1;
                                                                            VAR9->VAR29 = VAR14.VAR29;
                                                                            VAR9->VAR70 = VAR14.VAR30 << (VAR9->VAR25 - 3);
                                                                            if (VAR14.VAR30 > FUN14(VAR9))
                                                                            {
                                                                                FUN6(VAR7, "");
                                                                                VAR13 = FUN15(VAR2, VAR9->VAR29, VAR9->VAR70, sizeof(VAR71));
                                                                                if (VAR13 < 0)
                                                                                {
                                                                                    FUN6(VAR7, "");
                                                                                    if (VAR14.VAR32 > VAR72)
                                                                                    {
                                                                                        FUN6(VAR7, "");
                                                                                        VAR13 = FUN15(VAR2, VAR14.VAR31, VAR14.VAR32, sizeof(VAR73));
                                                                                        if (VAR13 < 0)
                                                                                        {
                                                                                            FUN6(VAR7, "");
                                                                                            if (VAR14.VAR28 > VAR74 / sizeof(VAR71))
                                                                                            {
                                                                                                FUN6(VAR7, "");
                                                                                                VAR13 = -VAR75;
                                                                                                VAR9->VAR28 = VAR14.VAR28;
                                                                                                VAR17 = FUN16(VAR9, VAR14.VAR24);
                                                                                                if (VAR17 > VAR76)
                                                                                                {
                                                                                                    FUN6(VAR7, "");
                                                                                                    VAR13 = -VAR75;
                                                                                                    VAR9->VAR17 = VAR17;
                                                                                                    if (VAR9->VAR28 < VAR9->VAR17)
                                                                                                    {
                                                                                                        FUN6(VAR7, "");
                                                                                                        VAR13 = FUN15(VAR2, VAR14.VAR27, VAR14.VAR28, sizeof(VAR71));
                                                                                                        if (VAR13 < 0)
                                                                                                        {
                                                                                                            FUN6(VAR7, "");
                                                                                                            VAR9->VAR27 = VAR14.VAR27;
                                                                                                            if (VAR9->VAR28 > 0)
                                                                                                            {
                                                                                                                VAR9->VAR77 = FUN17(VAR2->VAR19->VAR2, FUN18(VAR9->VAR28 * sizeof(VAR71), 512));
                                                                                                                if (VAR9->VAR77 == NULL)
                                                                                                                {
                                                                                                                    FUN6(VAR7, "");
                                                                                                                    VAR13 = -VAR78;
                                                                                                                    VAR13 = FUN2(VAR2->VAR19, VAR9->VAR27, VAR9->VAR77, VAR9->VAR28 * sizeof(VAR71));
                                                                                                                    if (VAR13 < 0)
                                                                                                                    {
                                                                                                                        FUN3(VAR7, -VAR13, "");
                                                                                                                        for (VAR12 = 0; VAR12 < VAR9->VAR28; VAR12++)
                                                                                                                        {
                                                                                                                            FUN5(&VAR9->VAR77[VAR12]);
                                                                                                                            VAR13 = FUN19(VAR2, VAR4, VAR5, VAR7);
                                                                                                                            if (VAR13 < 0)
                                                                                                                            {
                                                                                                                                VAR9->VAR79 = -1;
                                                                                                                                VAR9->VAR5 = VAR5;
                                                                                                                                VAR13 = FUN20(VAR2);
                                                                                                                                if (VAR13 != 0)
                                                                                                                                {
                                                                                                                                    FUN3(VAR7, -VAR13, "");
                                                                                                                                    FUN21(&VAR9->VAR80);
                                                                                                                                    FUN22(&VAR9->VAR81);
                                                                                                                                    if (FUN8(VAR2, VAR14.VAR46, VAR16, NULL, VAR5, &VAR18, &VAR15))
                                                                                                                                    {
                                                                                                                                        FUN23(VAR7, VAR15);
                                                                                                                                        if (VAR9->VAR57 && !VAR9->VAR82)
                                                                                                                                        {
                                                                                                                                            if (VAR9->VAR57 == VAR58)
                                                                                                                                            {
                                                                                                                                                unsigned int VAR83 = 0;
                                                                                                                                                if (VAR5 & VAR84)
                                                                                                                                                {
                                                                                                                                                    VAR83 |= VAR85;
                                                                                                                                                    VAR9->VAR82 = FUN24(VAR9->VAR86, "", NULL, NULL, VAR83, VAR7);
                                                                                                                                                    if (!VAR9->VAR82)
                                                                                                                                                    {
                                                                                                                                                    }
                                                                                                                                                    else if (!(VAR5 & VAR84))
                                                                                                                                                    {
                                                                                                                                                        FUN6(VAR7, "", VAR9->VAR57);
                                                                                                                                                        if (VAR14.VAR22 != 0)
                                                                                                                                                        {
                                                                                                                                                            VAR11 = VAR14.VAR23;
                                                                                                                                                            if (VAR11 > FUN25(1023, VAR9->VAR39 - VAR14.VAR22) || VAR11 >= sizeof(VAR2->VAR87))
                                                                                                                                                            {
                                                                                                                                                                FUN6(VAR7, "");
                                                                                                                                                                VAR13 = FUN2(VAR2->VAR19, VAR14.VAR22, VAR2->VAR87, VAR11);
                                                                                                                                                                if (VAR13 < 0)
                                                                                                                                                                {
                                                                                                                                                                    FUN3(VAR7, -VAR13, "");
                                                                                                                                                                    VAR2->VAR87[VAR11] = '';
                                                                                                                                                                    VAR9->VAR88 = FUN26(VAR2->VAR87);
                                                                                                                                                                    VAR9->VAR31 = VAR14.VAR31;
                                                                                                                                                                    VAR9->VAR32 = VAR14.VAR32;
                                                                                                                                                                    VAR13 = FUN27(VAR2);
                                                                                                                                                                    if (VAR13 < 0)
                                                                                                                                                                    {
                                                                                                                                                                        FUN3(VAR7, -VAR13, "");
                                                                                                                                                                        VAR18 |= VAR9->VAR44 & ~VAR89;
                                                                                                                                                                        VAR18 = VAR18 && !VAR2->VAR90 && !(VAR5 & VAR91);
                                                                                                                                                                        if (VAR18)
                                                                                                                                                                        {
                                                                                                                                                                            VAR9->VAR44 &= VAR89;
                                                                                                                                                                            if (FUN28(VAR2, &VAR15))
                                                                                                                                                                            {
                                                                                                                                                                                VAR18 = false;
                                                                                                                                                                                if (VAR15 != NULL)
                                                                                                                                                                                {
                                                                                                                                                                                    FUN23(VAR7, VAR15);
                                                                                                                                                                                    if (VAR18)
                                                                                                                                                                                    {
                                                                                                                                                                                        VAR13 = FUN29(VAR2);
                                                                                                                                                                                        if (VAR13 < 0)
                                                                                                                                                                                        {
                                                                                                                                                                                            FUN3(VAR7, -VAR13, "");
                                                                                                                                                                                            FUN30(&VAR9->VAR92);
                                                                                                                                                                                            VAR2->VAR93 = VAR94;
                                                                                                                                                                                            if (!(VAR5 & (VAR53 | VAR91)) && !VAR2->VAR90 && (VAR9->VAR42 & VAR95))
                                                                                                                                                                                            {
                                                                                                                                                                                                BdrvCheckResult VAR96 = {0};
                                                                                                                                                                                                VAR13 = FUN31(VAR2, &VAR96, VAR97 | VAR98);
                                                                                                                                                                                                if (VAR13 < 0)
                                                                                                                                                                                                {
                                                                                                                                                                                                    FUN3(VAR7, -VAR13, "");
                                                                                                                                                                                                    {
                                                                                                                                                                                                        BdrvCheckResult VAR96 = {0};
                                                                                                                                                                                                        FUN32(VAR2, &VAR96, 0);
                                                                                                                                                                                                        return VAR13;
                                                                                                                                                                                                    VAR99:
                                                                                                                                                                                                        FUN10(VAR9->VAR48);
                                                                                                                                                                                                        FUN33(VAR2);
                                                                                                                                                                                                        FUN34(VAR2);
                                                                                                                                                                                                        FUN35(VAR2);
                                                                                                                                                                                                        FUN36(VAR9->VAR77);
                                                                                                                                                                                                        VAR9->VAR77 = NULL;
                                                                                                                                                                                                        FUN37(VAR2);
                                                                                                                                                                                                        if (VAR9->VAR100)
                                                                                                                                                                                                        {
                                                                                                                                                                                                            FUN38(VAR2, VAR9->VAR100);
                                                                                                                                                                                                            if (VAR9->VAR101)
                                                                                                                                                                                                            {
                                                                                                                                                                                                                FUN38(VAR2, VAR9->VAR101);
                                                                                                                                                                                                                FUN39(VAR9->VAR82);
                                                                                                                                                                                                                FUN40(VAR9->VAR86);
                                                                                                                                                                                                                return VAR13