static VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5, uint8_t VAR6)
{
    uint32_t VAR7;
    int VAR8;
    VAR8 = VAR3->VAR9[VAR10] & VAR11;
    if (VAR3->VAR12)
    {
        VAR7 = VAR3->VAR13[VAR14];
        VAR7 |= VAR3->VAR13[VAR15] << 8;
        VAR7 |= VAR3->VAR13[VAR16] << 16;
        if (VAR7 > VAR6)
        {
            VAR3->FUN2(VAR3->VAR17, VAR5, VAR7);
        }
        else
        {
            VAR7 = VAR3->VAR18;
            memcpy(VAR5, VAR3->VAR19, VAR7);
            VAR5[0] = VAR5[2] >> 5;
            FUN3(VAR7, VAR8);
            VAR3->VAR18 = 0;
            VAR3->VAR20 = 0;
            VAR3->VAR21 = 0;
            if (VAR3->VAR22)
            {
                FUN4(VAR3->VAR22);
                VAR3->VAR23 = 0;
                VAR3->VAR24 = FUN5(&VAR3->VAR25, 0, VAR8, 0);
                if (!VAR3->VAR24)
                {
                    VAR3->VAR13[VAR26] = 0;
                    VAR3->VAR13[VAR27] = VAR28;
                    VAR3->VAR13[VAR29] = VAR30;
                    FUN6(VAR3);
                    return VAR7;