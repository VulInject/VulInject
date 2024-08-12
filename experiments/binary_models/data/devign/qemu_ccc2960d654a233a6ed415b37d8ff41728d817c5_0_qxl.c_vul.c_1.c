static void FUN1(void *VAR1, target_phys_addr_t VAR2, uint64_t VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = VAR1;
    uint32_t VAR7 = VAR2;
    qxl_async_io VAR8 = VAR9;
    uint32_t VAR10 = VAR7;
    if (VAR6->VAR11 && !VAR7 == VAR12)
    {
        return;
        if (VAR6->VAR13 <= VAR14 && VAR7 >= VAR15)
        {
            FUN2(VAR6, "", VAR7, VAR6->VAR13);
            return;
            switch (VAR7)
            {
            case VAR12:
            case VAR16:
            case VAR17:
            case VAR18:
            case VAR19:
            case VAR20:
            case VAR21:
            case VAR22:
            case VAR23:
            default:
                if (VAR6->VAR24 != VAR25)
                {
                    FUN3(VAR6->VAR26, VAR7, FUN4(VAR7));
                    if (VAR7 >= VAR27 && VAR7 < VAR28)
                    {
                        FUN5(VAR6, VAR29);
                        return;
                        VAR10 = VAR7;
                        switch (VAR7)
                        {
                        case VAR27:
                            VAR7 = VAR30;
                            goto VAR31;
                        case VAR22:
                            VAR7 = VAR17;
                            goto VAR31;
                        case VAR23:
                            VAR7 = VAR19;
                            goto VAR31;
                        case VAR32:
                            VAR7 = VAR33;
                            goto VAR31;
                        case VAR34:
                            VAR7 = VAR35;
                            goto VAR31;
                        case VAR36:
                            VAR7 = VAR37;
                            goto VAR31;
                        case VAR15:
                        case VAR38:
                        VAR31:
                            VAR8 = VAR39;
                            FUN6(&VAR6->VAR40);
                            if (VAR6->VAR41 != VAR42)
                            {
                                FUN2(VAR6, "", VAR7, VAR6->VAR41);
                                FUN7(&VAR6->VAR40);
                                return;
                                VAR6->VAR41 = VAR10;
                                FUN7(&VAR6->VAR40);
                            default:
                                FUN8(VAR6->VAR26, FUN9(VAR6->VAR24), VAR2, VAR3, VAR4, VAR8);
                                switch (VAR7)
                                {
                                case VAR30:
                                {
                                    VAR43 *VAR44 = NULL;
                                    QXLRect update = VAR6->VAR45->VAR46;
                                    if (VAR6->VAR45->VAR47 > VAR6->VAR48.VAR49)
                                    {
                                        FUN2(VAR6, "", VAR6->VAR45->VAR47);
                                        return;
                                        if (update.VAR50 >= update.VAR51 || update.VAR52 >= update.VAR53)
                                        {
                                            FUN2(VAR6, "", update.VAR50, update.VAR52, update.VAR51, update.VAR53);
                                            return;
                                            if (VAR8 == VAR39)
                                            {
                                                VAR44 = FUN10(VAR54, VAR27);
                                                VAR44->VAR55.VAR56 = update;
                                                FUN11(VAR6, VAR6->VAR45->VAR47, VAR44 ? &VAR44->VAR55.VAR56 : &update, NULL, 0, 0, VAR8, VAR44);
                                            case VAR57:
                                                FUN12(&VAR6->VAR48);
                                            case VAR58:
                                                FUN12(&VAR6->VAR48);
                                            case VAR20:
                                                FUN13(VAR6);
                                            case VAR59:
                                                if (!FUN14(&VAR6->VAR45->VAR60))
                                                {
                                                    VAR6->VAR61 = 1;
                                                    FUN15(VAR6);
                                                    VAR6->VAR61 = 0;
                                                case VAR16:
                                                    FUN16(VAR6, VAR3, 0);
                                                case VAR21:
                                                    if (VAR6->VAR62)
                                                    {
                                                        fprintf(VAR63, "" VAR64 "", VAR6->VAR26, FUN17(VAR65), VAR6->VAR45->VAR66);
                                                    case VAR12:
                                                        FUN18(VAR6, 0);
                                                    case VAR17:
                                                        if (VAR3 >= VAR67)
                                                        {
                                                            FUN2(VAR6, "");
                                                            if (VAR6->VAR68[VAR3].VAR69)
                                                            {
                                                                FUN2(VAR6, "");
                                                                VAR6->VAR68[VAR3].VAR70 = VAR6->VAR45->VAR71;
                                                                FUN19(VAR6, VAR3, 0, VAR8);
                                                            case VAR18:
                                                                if (VAR3 >= VAR67)
                                                                {
                                                                    FUN2(VAR6, "");
                                                                    FUN20(VAR6, VAR3);
                                                                case VAR19:
                                                                    if (VAR3 != 0)
                                                                    {
                                                                        FUN2(VAR6, "", VAR8);
                                                                        goto VAR72;
                                                                        VAR6->VAR73.VAR74 = VAR6->VAR45->VAR75;
                                                                        FUN21(VAR6, 0, VAR8);
                                                                    case VAR33:
                                                                        if (VAR3 != 0)
                                                                        {
                                                                            FUN2(VAR6, "", VAR8);
                                                                            goto VAR72;
                                                                            if (!FUN22(VAR6, VAR8))
                                                                            {
                                                                                FUN23(VAR6->VAR26, FUN9(VAR6->VAR24));
                                                                                goto VAR72;
                                                                            case VAR35:
                                                                                if (VAR3 >= VAR6->VAR48.VAR49)
                                                                                {
                                                                                    FUN2(VAR6, ""
                                                                                                         "" VAR76 "",
                                                                                                      VAR8, VAR3);
                                                                                    goto VAR72;
                                                                                    FUN24(VAR6, VAR3, VAR8);
                                                                                case VAR77:
                                                                                {
                                                                                    VAR78 *VAR79 = &VAR6->VAR45->VAR60;
                                                                                    if (VAR79->VAR80 - VAR79->VAR81 + 1 == VAR79->VAR82)
                                                                                    {
                                                                                        fprintf(VAR63, "", VAR79->VAR80, VAR79->VAR81);
                                                                                        FUN25(VAR6, 1);
                                                                                    case VAR15:
                                                                                        FUN26(VAR6);
                                                                                    case VAR37:
                                                                                        VAR6->VAR24 = VAR83;
                                                                                        FUN27(VAR6, VAR8);
                                                                                    case VAR38:
                                                                                        FUN28(VAR6, 0);
                                                                                    default:
                                                                                        FUN2(VAR6, "", VAR84, VAR7);
                                                                                        return;
                                                                                    VAR72:
                                                                                        if (VAR8)
                                                                                        {
                                                                                            FUN5(VAR6, VAR29);
                                                                                            FUN6(&VAR6->VAR40);
                                                                                            VAR6->VAR41 = VAR42;
                                                                                            FUN7(&VAR6->VAR40);