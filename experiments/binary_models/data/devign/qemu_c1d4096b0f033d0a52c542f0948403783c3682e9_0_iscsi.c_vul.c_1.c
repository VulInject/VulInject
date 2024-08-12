static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, VAR6 **VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    struct VAR11 *VAR12 = NULL;
    struct VAR13 *VAR13 = NULL;
    struct VAR14 *VAR15 = NULL;
    struct VAR16 *VAR17 = NULL;
    struct VAR18 *VAR19;
    char *VAR20 = NULL;
    VAR21 *VAR22;
    VAR6 *VAR23 = NULL;
    const char *VAR24;
    int VAR25, VAR26;
    if ((VAR27 % 512) != 0)
    {
        FUN2(VAR7, ""
                         ""
                         "",
                   VAR27);
        return -VAR28;
        VAR22 = FUN3(&VAR29, NULL, 0, &VAR30);
        FUN4(VAR22, VAR4, &VAR23);
        if (VAR23)
        {
            FUN5(VAR7, VAR23);
            VAR26 = -VAR28;
            VAR24 = FUN6(VAR22, "");
            VAR13 = FUN7(VAR12, VAR24);
            if (VAR13 == NULL)
            {
                FUN2(VAR7, "", VAR24);
                VAR26 = -VAR28;
                memset(VAR9, 0, sizeof(VAR8));
                VAR20 = FUN8(VAR13->VAR31);
                VAR12 = FUN9(VAR20);
                if (VAR12 == NULL)
                {
                    FUN2(VAR7, "");
                    VAR26 = -VAR32;
                    if (FUN10(VAR12, VAR13->VAR31))
                    {
                        FUN2(VAR7, "");
                        VAR26 = -VAR28;
                        if (VAR13->VAR33 != NULL)
                        {
                            VAR26 = FUN11(VAR12, VAR13->VAR33, VAR13->VAR34);
                            if (VAR26 != 0)
                            {
                                FUN2(VAR7, "");
                                VAR26 = -VAR28;
                                FUN12(VAR12, VAR13->VAR31, &VAR23);
                                if (VAR23 != NULL)
                                {
                                    FUN5(VAR7, VAR23);
                                    VAR26 = -VAR28;
                                    if (FUN13(VAR12, VAR35) != 0)
                                    {
                                        FUN2(VAR7, "");
                                        VAR26 = -VAR28;
                                        FUN14(VAR12, VAR36);
                                        FUN15(VAR12, VAR13->VAR31, &VAR23);
                                        if (VAR23 != NULL)
                                        {
                                            FUN5(VAR7, VAR23);
                                            VAR26 = -VAR28;
                                            if (FUN16(VAR12, VAR13->VAR37, VAR13->VAR38) != 0)
                                            {
                                                FUN2(VAR7, "", FUN17(VAR12));
                                                VAR26 = -VAR28;
                                                VAR9->VAR12 = VAR12;
                                                VAR9->VAR39 = FUN18(VAR2);
                                                VAR9->VAR38 = VAR13->VAR38;
                                                VAR9->VAR40 = true;
                                                VAR15 = FUN19(VAR9->VAR12, VAR9->VAR38, 0, 0, (void **)&VAR17, VAR7);
                                                if (VAR15 == NULL)
                                                {
                                                    VAR26 = -VAR28;
                                                    VAR9->VAR41 = VAR17->VAR42;
                                                    FUN20(VAR15);
                                                    VAR15 = NULL;
                                                    FUN21(VAR9, &VAR23);
                                                    if (VAR23 != NULL)
                                                    {
                                                        FUN5(VAR7, VAR23);
                                                        VAR26 = -VAR28;
                                                        VAR2->VAR43 = FUN22(VAR9->VAR44, VAR9);
                                                        VAR2->VAR45 = VAR9->VAR46;
                                                        if (VAR9->VAR41 != VAR47 && VAR9->VAR41 != VAR48)
                                                        {
                                                            VAR2->VAR49 = 1;
                                                            VAR15 = FUN19(VAR9->VAR12, VAR9->VAR38, 1, VAR50, (void **)&VAR19, VAR7);
                                                            if (VAR15 == NULL)
                                                            {
                                                                VAR26 = -VAR28;
                                                                for (VAR25 = 0; VAR25 < VAR19->VAR51; VAR25++)
                                                                {
                                                                    struct VAR14 *VAR52;
                                                                    struct VAR53 *VAR54;
                                                                    struct VAR55 *VAR56;
                                                                    switch (VAR19->VAR57[VAR25])
                                                                    {
                                                                    case VAR58:
                                                                        VAR52 = FUN19(VAR9->VAR12, VAR9->VAR38, 1, VAR58, (void **)&VAR54, VAR7);
                                                                        if (VAR52 == NULL)
                                                                        {
                                                                            VAR26 = -VAR28;
                                                                            memcpy(&VAR9->VAR59, VAR54, sizeof(struct VAR53));
                                                                            FUN20(VAR52);
                                                                            break;
                                                                        case VAR60:
                                                                            VAR52 = FUN19(VAR9->VAR12, VAR9->VAR38, 1, VAR60, (void **)&VAR56, VAR7);
                                                                            if (VAR52 == NULL)
                                                                            {
                                                                                VAR26 = -VAR28;
                                                                                memcpy(&VAR9->VAR61, VAR56, sizeof(struct VAR55));
                                                                                FUN20(VAR52);
                                                                                break;
                                                                            default:
                                                                                break;
                                                                                FUN20(VAR15);
                                                                                VAR15 = NULL;
                                                                                FUN23(VAR2, VAR9->VAR39);
                                                                                if (VAR9->VAR61.VAR62 * VAR9->VAR46 >= 4 * 1024 && VAR9->VAR61.VAR62 * VAR9->VAR46 <= 16 * 1024 * 1024)
                                                                                {
                                                                                    VAR9->VAR63 = (VAR9->VAR61.VAR62 * VAR9->VAR46) >> VAR64;
                                                                                    if (VAR9->VAR65 && !(VAR2->VAR66 & VAR67))
                                                                                    {
                                                                                        VAR9->VAR68 = FUN24(VAR9);
                                                                                        if (VAR9->VAR68 == NULL)
                                                                                        {
                                                                                            VAR26 = -VAR32;
                                                                                        VAR69:
                                                                                            FUN25(VAR22);
                                                                                            FUN26(VAR20);
                                                                                            if (VAR13 != NULL)
                                                                                            {
                                                                                                FUN27(VAR13);
                                                                                                if (VAR15 != NULL)
                                                                                                {
                                                                                                    FUN20(VAR15);
                                                                                                    if (VAR26)
                                                                                                    {
                                                                                                        if (VAR12 != NULL)
                                                                                                        {
                                                                                                            FUN28(VAR12);
                                                                                                            memset(VAR9, 0, sizeof(VAR8));
                                                                                                            return VAR26