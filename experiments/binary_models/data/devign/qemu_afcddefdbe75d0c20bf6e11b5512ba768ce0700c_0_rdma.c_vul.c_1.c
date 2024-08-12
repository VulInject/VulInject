static int FUN1(VAR1 *VAR2, void *VAR3)
{
    RDMAControlHeader VAR4 = {
        .VAR5 = sizeof(VAR6),
        .VAR7 = VAR8,
        .VAR9 = 0,
    };
    RDMAControlHeader VAR10 = {
        .VAR5 = 0,
        .VAR7 = VAR11,
        .VAR9 = 0,
    };
    RDMAControlHeader VAR12 = {.VAR7 = VAR13, .VAR9 = 1};
    VAR14 *VAR15 = VAR3;
    VAR16 *VAR17 = VAR15->VAR17;
    VAR18 *VAR19 = &VAR17->VAR20;
    RDMAControlHeader VAR21;
    VAR22 *VAR23, *VAR24;
    VAR25 *VAR26;
    VAR6 *VAR27;
    static RDMARegisterResult VAR28[VAR29];
    VAR30 *VAR31;
    void *VAR32;
    int VAR33 = 0;
    int VAR34 = 0;
    int VAR35 = 0;
    int VAR36 = 0;
    FUN2();
    do
    {
        FUN3();
        VAR33 = FUN4(VAR17, &VAR21, VAR37);
        if (VAR33 < 0)
        {
            if (VAR21.VAR9 > VAR29)
            {
                FUN5(""
                             "",
                             VAR21.VAR9);
                VAR33 = -VAR38;
                switch (VAR21.VAR7)
                {
                case VAR39:
                    VAR26 = (VAR25 *)VAR17->VAR40[VAR34].VAR41;
                    FUN6(VAR26);
                    FUN7(VAR26->VAR42, VAR26->VAR43, VAR26->VAR44);
                    if (VAR26->VAR43 >= VAR17->VAR20.VAR45)
                    {
                        FUN5("", (unsigned int)VAR26->VAR43, VAR17->VAR20.VAR45);
                        VAR33 = -VAR38;
                        VAR31 = &(VAR17->VAR20.VAR31[VAR26->VAR43]);
                        VAR32 = VAR31->VAR46 + (VAR26->VAR44 - VAR31->VAR44);
                        FUN8(VAR32, VAR26->VAR47, VAR26->VAR42);
                    case VAR48:
                        FUN9();
                        goto VAR49;
                    case VAR50:
                        FUN10();
                        FUN11(VAR17->VAR20.VAR31, VAR17->VAR20.VAR45, sizeof(VAR30), VAR51);
                        if (VAR17->VAR52)
                        {
                            VAR33 = FUN12(VAR17);
                            if (VAR33)
                            {
                                FUN5(""
                                             "");
                                goto VAR49;
                                for (VAR36 = 0; VAR36 < VAR19->VAR45; VAR36++)
                                {
                                    VAR17->VAR53[VAR36].VAR54 = (VAR55)(VAR19->VAR31[VAR36].VAR46);
                                    if (VAR17->VAR52)
                                    {
                                        VAR17->VAR53[VAR36].VAR56 = VAR19->VAR31[VAR36].VAR57->VAR58;
                                        VAR17->VAR53[VAR36].VAR44 = VAR19->VAR31[VAR36].VAR44;
                                        VAR17->VAR53[VAR36].VAR42 = VAR19->VAR31[VAR36].VAR42;
                                        FUN13(&VAR17->VAR53[VAR36]);
                                        FUN14(VAR19->VAR31[VAR36].VAR59, VAR19->VAR31[VAR36].VAR44, VAR19->VAR31[VAR36].VAR42, VAR19->VAR31[VAR36].VAR46, VAR19->VAR31[VAR36].VAR60);
                                        VAR12.VAR5 = VAR17->VAR20.VAR45 * sizeof(VAR61);
                                        VAR33 = FUN15(VAR17, (VAR62 *)VAR17->VAR53, &VAR12);
                                        if (VAR33 < 0)
                                        {
                                            FUN5("");
                                            goto VAR49;
                                        case VAR63:
                                            FUN16(VAR21.VAR9);
                                            VAR4.VAR9 = VAR21.VAR9;
                                            VAR24 = (VAR22 *)VAR17->VAR40[VAR34].VAR41;
                                            for (VAR35 = 0; VAR35 < VAR21.VAR9; VAR35++)
                                            {
                                                uint64_t VAR64;
                                                VAR62 *VAR65, *VAR66;
                                                VAR23 = &VAR24[VAR35];
                                                FUN17(VAR23);
                                                VAR27 = &VAR28[VAR35];
                                                FUN18(VAR35, VAR23->VAR67, VAR23->VAR68.VAR69, VAR23->VAR70);
                                                if (VAR23->VAR67 >= VAR17->VAR20.VAR45)
                                                {
                                                    FUN5("", (unsigned int)VAR23->VAR67, VAR17->VAR20.VAR45);
                                                    VAR33 = -VAR71;
                                                    VAR31 = &(VAR17->VAR20.VAR31[VAR23->VAR67]);
                                                    if (VAR31->VAR72)
                                                    {
                                                        if (VAR31->VAR44 > VAR23->VAR68.VAR69)
                                                        {
                                                            FUN5(""
                                                                         "" VAR73 "" VAR73,
                                                                         VAR31->VAR59, VAR31->VAR44, VAR23->VAR68.VAR69);
                                                            VAR32 = (VAR31->VAR46 + (VAR23->VAR68.VAR69 - VAR31->VAR44));
                                                            VAR64 = FUN19(VAR31->VAR46, (VAR62 *)VAR32);
                                                        }
                                                        else
                                                        {
                                                            VAR64 = VAR23->VAR68.VAR64;
                                                            VAR32 = VAR31->VAR46 + (VAR23->VAR68.VAR64 * (1UL << VAR74));
                                                            VAR65 = FUN20(VAR31, VAR64);
                                                            VAR66 = FUN21(VAR31, VAR64 + VAR23->VAR70);
                                                            if (FUN22(VAR17, VAR31, (VAR55)VAR32, NULL, &VAR27->VAR58, VAR64, VAR65, VAR66))
                                                            {
                                                                FUN5("");
                                                                VAR33 = -VAR75;
                                                                goto VAR49;
                                                                VAR27->VAR32 = (VAR55)VAR31->VAR46;
                                                                FUN23(VAR27->VAR58);
                                                                FUN24(VAR27);
                                                                VAR33 = FUN15(VAR17, (VAR62 *)VAR28, &VAR4);
                                                                if (VAR33 < 0)
                                                                {
                                                                    FUN5("");
                                                                    goto VAR49;
                                                                case VAR76:
                                                                    FUN25(VAR21.VAR9);
                                                                    VAR10.VAR9 = VAR21.VAR9;
                                                                    VAR24 = (VAR22 *)VAR17->VAR40[VAR34].VAR41;
                                                                    for (VAR35 = 0; VAR35 < VAR21.VAR9; VAR35++)
                                                                    {
                                                                        VAR23 = &VAR24[VAR35];
                                                                        FUN17(VAR23);
                                                                        FUN26(VAR35, VAR23->VAR67, VAR23->VAR68.VAR64);
                                                                        VAR31 = &(VAR17->VAR20.VAR31[VAR23->VAR67]);
                                                                        VAR33 = FUN27(VAR31->VAR77[VAR23->VAR68.VAR64]);
                                                                        VAR31->VAR77[VAR23->VAR68.VAR64] = NULL;
                                                                        if (VAR33 != 0)
                                                                        {
                                                                            FUN28("");
                                                                            VAR33 = -VAR33;
                                                                            goto VAR49;
                                                                            VAR17->VAR78--;
                                                                            FUN29(VAR23->VAR68.VAR64);
                                                                            VAR33 = FUN15(VAR17, NULL, &VAR10);
                                                                            if (VAR33 < 0)
                                                                            {
                                                                                FUN5("");
                                                                                goto VAR49;
                                                                            case VAR8:
                                                                                FUN5("");
                                                                                VAR33 = -VAR38;
                                                                                goto VAR49;
                                                                            default:
                                                                                FUN5("", VAR79[VAR21.VAR7]);
                                                                                VAR33 = -VAR38;
                                                                                goto VAR49;
                                                                            }
                                                                            while (1)
                                                                                ;
                                                                        VAR49:
                                                                            if (VAR33 < 0)
                                                                            {
                                                                                VAR17->VAR80 = VAR33;
                                                                                return VAR33;