int FUN1(VAR1 *VAR2, VAR3 *VAR4, BdrvCheckMode VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    BdrvCheckResult VAR9;
    int64_t VAR10, VAR11, VAR12;
    VAR13 *VAR14 = NULL;
    bool VAR15 = false;
    int VAR16;
    VAR10 = FUN2(VAR2->VAR17);
    if (VAR10 < 0)
    {
        VAR4->VAR18++;
        return VAR10;
        VAR12 = FUN3(VAR7, VAR10);
        if (VAR12 > VAR19)
        {
            VAR4->VAR18++;
            return -VAR20;
            VAR4->VAR21.VAR22 = FUN3(VAR7, VAR2->VAR23 * VAR24); VAR16 = FUN4 ( VAR2 , VAR4 , VAR5 , & VAR15 , & VAR14 , VAR9 = * VAR4 ; FUN5 ( VAR2 , VAR4 , 0 , & VAR15 , & VAR11 , VAR14 , VAR12 ) ; if ( VAR15 && ( VAR5 & VAR25 ) ) {
                fprintf(VAR26, ""); VAR16 = FUN6 ( VAR2 , VAR4 , & VAR14 , } else if ( VAR5 ) {
                fprintf(VAR26, "");
                VAR4->VAR18++;
                VAR16 = -VAR27;
                if (VAR4->VAR28 || VAR4->VAR29)
                {
                    *VAR4 = VAR9;
                    FUN5(VAR2, VAR4, VAR5, &VAR15, &VAR11, VAR14, VAR12);
                    VAR16 = FUN7(VAR2, VAR4, VAR5);
                    VAR4->VAR30 = (VAR11 + 1) * VAR7->VAR31;
                    VAR16 = 0;
                VAR32:
                    FUN8(VAR14);
                    return VAR16