int FUN1(VAR1 *VAR2, VdpDecoderProfile VAR3, int VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR2->VAR10->VAR11;
    VAR12 *VAR13;
    VAR14 *VAR15;
    VAR16 *VAR17;
    VAR18 *VAR19;
    const char *VAR20;
    void *VAR21;
    VdpStatus VAR22;
    VdpBool VAR23;
    uint32_t VAR24, VAR25, VAR26, VAR27;
    VdpChromaType VAR28;
    uint32_t VAR29;
    uint32_t VAR30;
    VAR9->VAR29 = VAR31;
    VAR9->VAR30 = VAR31;
    if (FUN2(VAR2, &VAR28, &VAR29, &VAR30))
        return FUN3(VAR32);
    if (VAR6)
    {
        VAR6->VAR33 = 0;
        if (VAR6->VAR34.VAR35 != VAR36)
        {
            VAR9->VAR35 = VAR6->VAR34.VAR35;
            VAR9->VAR37 = VAR6->VAR34.VAR37;
            VAR9->VAR38 = VAR36;
            return 0;
            VAR9->VAR38 = VAR6->VAR38;
            VAR9->VAR39 = VAR6->VAR39;
            if (VAR6->VAR40 & VAR41)
                VAR4 = 0;
            if (!(VAR6->VAR40 & VAR42) && VAR28 != VAR43)
                return FUN3(VAR32);
        }
        else
        {
            VAR44 *VAR45 = NULL;
            VAR46 *VAR47;
            if (VAR2->VAR48)
            {
                VAR45 = (VAR44 *)VAR2->VAR48->VAR49;
            }
            else if (VAR2->VAR50)
            {
                int VAR51;
                VAR2->VAR48 = FUN4(VAR2->VAR50);
                if (!VAR2->VAR48)
                    return FUN3(VAR52);
                VAR45 = (VAR44 *)VAR2->VAR48->VAR49;
                VAR45->VAR53 = VAR54;
                VAR45->VAR55 = VAR2->VAR56;
                VAR45->VAR29 = VAR2->VAR57;
                VAR45->VAR30 = VAR2->VAR58;
                VAR51 = FUN5(VAR2->VAR48);
                if (VAR51 < 0)
                {
                    FUN6(&VAR2->VAR48);
                    return VAR51;
                    if (!VAR45)
                    {
                        FUN7(VAR2, VAR59, ""
                                                    "");
                        return FUN3(VAR60);
                        VAR47 = VAR45->VAR61->VAR6;
                        VAR9->VAR38 = VAR47->VAR38;
                        VAR9->VAR39 = VAR47->VAR39;
                        if (VAR2->VAR62 & VAR41)
                            VAR4 = 0;
                        if (VAR4 < 0)
                            VAR63, VAR13 = VAR21;
                        VAR22 = FUN8(VAR9->VAR38, VAR28, &VAR23, &VAR26, &VAR27);
                        if (VAR23 != VAR64 || VAR26 < VAR29 || VAR27 < VAR30)
                            VAR65, VAR15 = VAR21;
                        VAR22 = FUN9(VAR9->VAR38, VAR3, &VAR23, &VAR24, &VAR25, &VAR26, &VAR27);
                        if ((VAR22 != VAR66 || VAR23 != VAR64) && VAR3 == VAR67)
                        {
                            VAR3 = VAR68;
                            VAR22 = FUN9(VAR9->VAR38, VAR3, &VAR23, &VAR24, &VAR25, &VAR26, &VAR27);
                            if (VAR23 != VAR64 || VAR24 < VAR4 || VAR26 < VAR29 || VAR27 < VAR30) VAR22 = VAR9 -> FUN10 ( VAR9 -> VAR38 , VAR69 , VAR17 = VAR21 ; VAR22 = VAR9 -> FUN10 ( VAR9 -> VAR38 , VAR70 , VAR9 -> VAR37 = VAR21 ; VAR22 = FUN11 ( VAR9 -> VAR38 , VAR3 , VAR29 , VAR30 , VAR2 -> VAR71 , & VAR9 -> VAR35 ) ; if ( VAR22 == VAR66 ) {
                                    VAR9->VAR29 = VAR2->VAR57;
                                VAR9->VAR30 = VAR2->VAR58