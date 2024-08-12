static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    int VAR9, VAR10, VAR11 = 0;
    QCowHeader VAR12;
    VAR13 *VAR14;
    VAR15 *VAR16 = NULL;
    uint64_t VAR17;
    uint64_t VAR18;
    VAR11 = FUN2(VAR2->VAR19, 0, &VAR12, sizeof(VAR12));
    if (VAR11 < 0)
    {
        FUN3(&VAR12.VAR20);
        FUN3(&VAR12.VAR21);
        FUN4(&VAR12.VAR22);
        FUN3(&VAR12.VAR23);
        FUN4(&VAR12.VAR24);
        FUN3(&VAR12.VAR25);
        FUN3(&VAR12.VAR26);
        FUN4(&VAR12.VAR27);
        FUN3(&VAR12.VAR28);
        FUN4(&VAR12.VAR29);
        FUN3(&VAR12.VAR30);
        FUN4(&VAR12.VAR31);
        FUN3(&VAR12.VAR32);
        if (VAR12.VAR20 != VAR33)
        {
            VAR11 = -VAR34;
            if (VAR12.VAR21 < 2 || VAR12.VAR21 > 3)
            {
                FUN5(VAR2, "", VAR12.VAR21);
                VAR11 = -VAR35;
                VAR7->VAR36 = VAR12.VAR21;
                if (VAR12.VAR21 == 2)
                {
                    VAR12.VAR37 = 0;
                    VAR12.VAR38 = 0;
                    VAR12.VAR39 = 0;
                    VAR12.VAR40 = 4;
                    VAR12.VAR41 = 72;
                }
                else
                {
                    FUN4(&VAR12.VAR37);
                    FUN4(&VAR12.VAR38);
                    FUN4(&VAR12.VAR39);
                    FUN3(&VAR12.VAR40);
                    FUN3(&VAR12.VAR41);
                    if (VAR12.VAR41 > sizeof(VAR12))
                    {
                        VAR7->VAR42 = VAR12.VAR41 - sizeof(VAR12);
                        VAR7->VAR43 = FUN6(VAR7->VAR42);
                        VAR11 = FUN2(VAR2->VAR19, sizeof(VAR12), VAR7->VAR43, VAR7->VAR42);
                        if (VAR11 < 0)
                        {
                            if (VAR12.VAR22)
                            {
                                VAR17 = VAR12.VAR22;
                            }
                            else
                            {
                                VAR17 = 1 << VAR12.VAR25;
                                VAR7->VAR37 = VAR12.VAR37;
                                VAR7->VAR38 = VAR12.VAR38;
                                VAR7->VAR39 = VAR12.VAR39;
                                if (VAR7->VAR37 & ~VAR44)
                                {
                                    void *VAR45 = NULL;
                                    FUN7(VAR2, VAR12.VAR41, VAR17, &VAR45);
                                    FUN8(VAR2, VAR45, VAR7->VAR37 & ~VAR44);
                                    VAR11 = -VAR35;
                                    if (VAR12.VAR40 != 4)
                                    {
                                        FUN5(VAR2, "", 1 << VAR12.VAR40);
                                        VAR11 = -VAR35;
                                        if (VAR12.VAR25 < VAR46 || VAR12.VAR25 > VAR47)
                                        {
                                            VAR11 = -VAR48;
                                            if (VAR12.VAR26 > VAR49)
                                            {
                                                VAR11 = -VAR48;
                                                VAR7->VAR50 = VAR12.VAR26;
                                                if (VAR7->VAR50)
                                                {
                                                    VAR2->VAR51 = 1;
                                                    VAR7->VAR25 = VAR12.VAR25;
                                                    VAR7->VAR52 = 1 << VAR7->VAR25;
                                                    VAR7->VAR53 = 1 << (VAR7->VAR25 - 9);
                                                    VAR7->VAR54 = VAR7->VAR25 - 3;
                                                    VAR7->VAR55 = 1 << VAR7->VAR54;
                                                    VAR2->VAR56 = VAR12.VAR24 / 512;
                                                    VAR7->VAR57 = (62 - (VAR7->VAR25 - 8));
                                                    VAR7->VAR58 = (1 << (VAR7->VAR25 - 8)) - 1;
                                                    VAR7->VAR59 = (1LL << VAR7->VAR57) - 1;
                                                    VAR7->VAR29 = VAR12.VAR29;
                                                    VAR7->VAR60 = VAR12.VAR30 << (VAR7->VAR25 - 3);
                                                    VAR7->VAR31 = VAR12.VAR31;
                                                    VAR7->VAR32 = VAR12.VAR32;
                                                    VAR7->VAR28 = VAR12.VAR28;
                                                    VAR18 = FUN9(VAR7, VAR12.VAR24);
                                                    if (VAR18 > VAR61)
                                                    {
                                                        VAR11 = -VAR62;
                                                        VAR7->VAR18 = VAR18;
                                                        if (VAR7->VAR28 < VAR7->VAR18)
                                                        {
                                                            VAR11 = -VAR48;
                                                            VAR7->VAR27 = VAR12.VAR27;
                                                            if (VAR7->VAR28 > 0)
                                                            {
                                                                VAR7->VAR63 = FUN10(FUN11(VAR7->VAR28 * sizeof(VAR64), 512));
                                                                VAR11 = FUN2(VAR2->VAR19, VAR7->VAR27, VAR7->VAR63, VAR7->VAR28 * sizeof(VAR64));
                                                                if (VAR11 < 0)
                                                                {
                                                                    for (VAR10 = 0; VAR10 < VAR7->VAR28; VAR10++)
                                                                    {
                                                                        FUN4(&VAR7->VAR63[VAR10]);
                                                                        VAR7->VAR65 = FUN12(VAR2, VAR66);
                                                                        VAR7->VAR67 = FUN12(VAR2, VAR68);
                                                                        VAR7->VAR69 = FUN6(VAR7->VAR52);
                                                                        VAR7->VAR70 = FUN13(VAR2, VAR71 * VAR7->VAR52 + 512);
                                                                        VAR7->VAR72 = -1;
                                                                        VAR7->VAR5 = VAR5;
                                                                        VAR11 = FUN14(VAR2);
                                                                        if (VAR11 != 0)
                                                                        {
                                                                            FUN15(&VAR7->VAR73);
                                                                            FUN16(&VAR7->VAR74);
                                                                            if (FUN7(VAR2, VAR12.VAR41, VAR17, NULL))
                                                                            {
                                                                                VAR11 = -VAR48;
                                                                                if (VAR12.VAR22 != 0)
                                                                                {
                                                                                    VAR9 = VAR12.VAR23;
                                                                                    if (VAR9 > 1023)
                                                                                    {
                                                                                        VAR9 = 1023;
                                                                                        VAR11 = FUN2(VAR2->VAR19, VAR12.VAR22, VAR2->VAR75, VAR9);
                                                                                        if (VAR11 < 0)
                                                                                        {
                                                                                            VAR2->VAR75[VAR9] = '';
                                                                                            VAR11 = FUN17(VAR2);
                                                                                            if (VAR11 < 0)
                                                                                            {
                                                                                                if (!VAR2->VAR76 && VAR7->VAR39 != 0)
                                                                                                {
                                                                                                    VAR7->VAR39 = 0;
                                                                                                    VAR11 = FUN18(VAR2);
                                                                                                    if (VAR11 < 0)
                                                                                                    {
                                                                                                        FUN19(&VAR7->VAR77);
                                                                                                        if (!(VAR5 & VAR78) && !VAR2->VAR76 && (VAR7->VAR37 & VAR79))
                                                                                                        {
                                                                                                            BdrvCheckResult VAR80 = {0};
                                                                                                            VAR11 = FUN20(VAR2, &VAR80, VAR81);
                                                                                                            if (VAR11 < 0)
                                                                                                            {
                                                                                                                VAR14 = FUN21(&VAR82);
                                                                                                                FUN22(VAR14, VAR4, &VAR16);
                                                                                                                if (FUN23(&VAR16))
                                                                                                                {
                                                                                                                    FUN24(VAR16);
                                                                                                                    FUN25(VAR16);
                                                                                                                    VAR11 = -VAR48;
                                                                                                                    VAR7->VAR83 = FUN26(VAR14, VAR84, (VAR7->VAR38 & VAR85));
                                                                                                                    VAR7->VAR86[VAR87] = false;
                                                                                                                    VAR7->VAR86[VAR88] = true;
                                                                                                                    VAR7->VAR86[VAR89] = FUN26(VAR14, VAR90, VAR5 & VAR91);
                                                                                                                    VAR7->VAR86[VAR92] = FUN26(VAR14, VAR93, true);
                                                                                                                    VAR7->VAR86[VAR94] = FUN26(VAR14, VAR95, false);
                                                                                                                    FUN27(VAR14);
                                                                                                                    if (VAR7->VAR83 && VAR7->VAR36 < 3)
                                                                                                                    {
                                                                                                                        FUN28(VAR96, ""
                                                                                                                                                                 "");
                                                                                                                        VAR11 = -VAR48;
                                                                                                                        {
                                                                                                                            BdrvCheckResult VAR80 = {0};
                                                                                                                            FUN29(VAR2, &VAR80, 0);
                                                                                                                            return VAR11;
                                                                                                                        VAR97:
                                                                                                                            FUN30(VAR7->VAR43);
                                                                                                                            FUN31(VAR2);
                                                                                                                            FUN32(VAR2);
                                                                                                                            FUN33(VAR2);
                                                                                                                            FUN30(VAR7->VAR63);
                                                                                                                            if (VAR7->VAR65)
                                                                                                                            {
                                                                                                                                FUN34(VAR2, VAR7->VAR65);
                                                                                                                                FUN30(VAR7->VAR69);
                                                                                                                                FUN35(VAR7->VAR70);
                                                                                                                                return VAR11