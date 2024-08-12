int FUN1(VAR1 *VAR2, VAR3 *VAR4, int *VAR5)
{
    VAR6 *VAR7 = &VAR2->VAR8.VAR9;
    VAR10 *VAR11 = &VAR2->VAR8.VAR12;
    uint16_t VAR13;
    IRB VAR14;
    if (~(VAR11->VAR15) & (VAR16 | VAR17))
    {
        return 3;
    }
    VAR13 = VAR7->VAR18 & VAR19;
    memset(&VAR14, 0, sizeof(VAR3));
    memcpy(&VAR14.VAR9, VAR7, sizeof(VAR6));
    if (VAR13 & VAR20)
    {
        if (VAR7->VAR21 & (VAR22 | VAR23 | VAR24))
        {
            VAR14.VAR9.VAR15 |= VAR25;
            VAR14.VAR26[0] = 0x04804000;
        }
        else
        {
            VAR14.VAR26[0] = 0x00800000;
        }
        if ((VAR7->VAR27 & VAR28) && (VAR11->VAR29 & VAR30))
        {
            int VAR31;
            VAR14.VAR9.VAR15 |= VAR25 | VAR32;
            memcpy(VAR14.VAR33, VAR2->VAR34, sizeof(VAR2->VAR34));
            for (VAR31 = 0; VAR31 < FUN2(VAR14.VAR33); VAR31++)
            {
                VAR14.VAR33[VAR31] = FUN3(VAR14.VAR33[VAR31]);
            }
            VAR14.VAR26[1] = 0x01000000 | (sizeof(VAR2->VAR34) << 8);
        }
    }
    FUN4(VAR4, &VAR14, VAR11, VAR5);
    return ((VAR13 & VAR20) == 0);
}