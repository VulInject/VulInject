static int FUN1(VAR1 *VAR2, VAR3 *VAR4, uint32_t VAR5, VAR6 *VAR7, uint32_t VAR8, VAR9 *VAR10)
{
    int VAR11 = 0, VAR12;
    bool VAR13;
    bool VAR14 = (VAR4 != NULL);
    uint8_t VAR15 = VAR7->VAR16 & 0xff;
    VAR17 *VAR18 = FUN2(VAR2, VAR8);
    if (VAR18)
    {
        if (FUN3(VAR18->VAR19, VAR5, VAR7, VAR8, VAR14))
        {
            assert(VAR4 == NULL || VAR4 == VAR18->VAR19);
            VAR4 = VAR18->VAR19;
        }
        else
        {
            FUN4(VAR18->VAR19, "");
            VAR18 = NULL;
            if (VAR4 == NULL)
            {
                VAR4 = FUN5(VAR2, VAR7);
                if (VAR4 && !FUN3(VAR4, VAR5, VAR7, VAR8, VAR14))
                {
                    FUN4(VAR4, "");
                    VAR4 = NULL;
                    if (VAR4)
                    {
                        VAR4->VAR20 = 32;
                        if (!(VAR7->VAR21 & VAR22))
                        {
                            if (VAR18)
                            {
                                FUN4(VAR18->VAR19, "");
                                if (VAR7->VAR21 & VAR23)
                                {
                                    *VAR10 |= 0x01;
                                    return VAR24;
                                    if (VAR18)
                                    {
                                        if (VAR14)
                                        {
                                            return VAR25;
                                            if (!VAR18->VAR26)
                                            {
                                                UHCI_TD VAR27;
                                                VAR17 *VAR28 = FUN6(&VAR18->VAR19->VAR29, VAR30);
                                                FUN7(VAR2, &VAR27, VAR28->VAR8);
                                                FUN8(VAR18->VAR19, &VAR27);
                                                return VAR25;
                                                FUN9(VAR18);
                                                goto VAR26;
                                                if (VAR4 == NULL)
                                                {
                                                    VAR31 *VAR32 = FUN10(VAR2, (VAR7->VAR16 >> 8) & 0x7f);
                                                    VAR33 *VAR34 = FUN11(VAR32, VAR15, (VAR7->VAR16 >> 15) & 0xf);
                                                    VAR4 = FUN12(VAR2, VAR5, VAR7, VAR34);
                                                    VAR18 = FUN13(VAR4, VAR8);
                                                    VAR12 = ((VAR7->VAR16 >> 21) + 1) & 0x7ff;
                                                    VAR13 = (VAR15 == VAR35 && (VAR7->VAR21 & VAR36) != 0);
                                                    FUN14(&VAR18->VAR37, VAR15, VAR4->VAR34, VAR8, VAR13, (VAR7->VAR21 & VAR23) != 0);
                                                    FUN15(&VAR18->VAR38, VAR7->VAR39, VAR12);
                                                    FUN16(&VAR18->VAR37, &VAR18->VAR38);
                                                    switch (VAR15)
                                                    {
                                                    case VAR40:
                                                    case VAR41:
                                                        VAR11 = FUN17(VAR4->VAR34->VAR32, &VAR18->VAR37);
                                                        if (VAR11 >= 0)
                                                            VAR11 = VAR12;
                                                        break;
                                                    case VAR35:
                                                        VAR11 = FUN17(VAR4->VAR34->VAR32, &VAR18->VAR37);
                                                        break;
                                                    default:
                                                        FUN18(&VAR18->VAR37, &VAR18->VAR38);
                                                        FUN19(VAR18);
                                                        VAR2->VAR42 |= VAR43;
                                                        FUN20(VAR2);
                                                        return VAR44;
                                                        if (VAR11 == VAR45)
                                                        {
                                                            FUN21(VAR18);
                                                            if (!VAR14)
                                                            {
                                                                FUN8(VAR4, VAR7);
                                                                return VAR46;
                                                                VAR18->VAR37.VAR47 = VAR11;
                                                            VAR26:
                                                                VAR11 = FUN22(VAR2, VAR7, VAR18, VAR10);
                                                                FUN18(&VAR18->VAR37, &VAR18->VAR38);
                                                                FUN19(VAR18);
                                                                return VAR11