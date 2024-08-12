static int FUN1(VAR1 *VAR2, int VAR3, uint8_t VAR4, VAR5 **VAR6)
{
    uint16_t VAR7;
    uint8_t VAR8;
    VAR7 = FUN2(VAR2->VAR9.VAR10 + VAR3 + VAR11);
    VAR8 = (VAR7 & VAR12) >> 4;
    if (VAR8 != VAR13 && VAR8 != VAR14 && VAR8 != VAR15)
    {
        FUN3(VAR6, ""
                         "",
                   VAR8);
        return -VAR16;
        if (!FUN4(VAR2->VAR9.VAR17))
        {
            VAR18 *VAR17 = VAR2->VAR9.VAR17;
            VAR19 *VAR20; * Traditionally PCI device assignment exposes the PCIe VAR21 * VAR22 - is on VAR23 - express VAR24 . The reason being that some VAR25 * simply assume that VAR26 ''re running on a native PCIe machine VAR8, like VAR27, we VAR28 * to hide the PCIe VAR21 . The reason for this is VAR29 ;
            *first Windows guests get a Code 10 error when the PCIe VAR21 *is exposed in this VAR30.Therefore express devices VAR31 '' re attached to express buses in the VAR32.*VAR33, a native PCIe machine introduces the possibility of VAR34 *granularity IOMMUs supporting both translation and VAR35.*Guest code to discover the IOMMU visibility of a VAR36, such VAR22 *IOMMU grouping code on VAR37, is very aware of device types and*valid transitions between bus VAR38.An express device on a VAR23 - *express bus is not a valid combination on bare metal VAR39.* *Drivers that require a PCIe capability to make the VAR36 * functional are simply going to need to have their devices VAR40 * on a PCIe bus in the VAR32.while (!FUN5(VAR17))
            {
                VAR20 = FUN6(VAR17);
                VAR17 = VAR20->VAR17;
                if (FUN4(VAR17))
                {
                    return 0;
                }
                else if (FUN5(VAR2->VAR9.VAR17))
                {
                    *On a Root Complex bus Endpoints become Root Complex VAR41 *VAR42, which changes the type and clears the VAR43 &LNK2 VAR44.if (VAR8 == VAR13)
                    { VAR15 << 4 , VAR12 ) ;
                        if (VAR4 > VAR45)
                        {
                            FUN7(VAR2, VAR3 + VAR46, 0, ~0);
                            FUN8(VAR2, VAR3 + VAR45, 0, ~0);
                            FUN8(VAR2, VAR3 + VAR47, 0, ~0);
                            if (VAR4 > VAR48)
                            {
                                FUN7(VAR2, VAR3 + VAR48, 0, ~0);
                                FUN8(VAR2, VAR3 + VAR49, 0, ~0);
                                FUN8(VAR2, VAR3 + VAR50, 0, ~0);
                            }
                            else if (VAR8 == VAR14)
                            {
                                *Legacy endpoints VAR51 '' t support VAR43 / LNK2 VAR52, so make them VAR53.if (VAR8 == VAR15)
                                { VAR13 << 4 , VAR12 ) ;
                                    FUN7(VAR2, VAR3 + VAR46, VAR54 | VAR55, ~0);
                                    FUN8(VAR2, VAR3 + VAR45, 0, ~0);
                                    FUN8(VAR2, VAR3 + VAR47, FUN2(VAR2->VAR9.VAR10 + VAR3 + VAR47), VAR56 | VAR57);
                                    VAR3 = FUN9(&VAR2->VAR9, VAR58, VAR3, VAR4, VAR6);
                                    if (VAR3 < 0)
                                    {
                                        return VAR3;
                                        VAR2->VAR9.VAR59.VAR60 = VAR3;
                                        return VAR3