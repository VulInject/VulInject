void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    if (VAR5 & VAR6)
    {
        const int VAR7 = VAR4->VAR7;
        if (VAR7 == VAR8 || VAR7 == VAR9)
        {
            if (VAR5 & VAR10)
            {
                VAR2->VAR11 = VAR12;
            }
            else if (VAR5 & VAR13)
            {
                VAR2->VAR11 = VAR14;
            }
            else
            {
                VAR2->VAR11 = VAR15;
            }
        }
        VAR2->VAR16 = VAR17;
        VAR2->VAR18 = VAR19;
        VAR2->VAR20 = VAR21;
        VAR2->VAR22 = VAR23;
        VAR2->VAR24 = VAR25;
        VAR2->VAR26[0] = VAR27;
        VAR2->VAR26[1] = VAR28;
        VAR2->VAR29 = VAR30;
        VAR2->VAR31[0] = (VAR5 & VAR10) ? VAR32 : VAR33;
        VAR2->VAR31[1] = VAR34;
        VAR2->VAR35[4] = VAR36;
        VAR2->VAR37[0] = VAR38;
        VAR2->VAR37[1] = VAR39;
        if (!(VAR4->VAR40 & VAR41))
        {
            VAR2->VAR35[0] = VAR42;
        }
        if (!(VAR4->VAR40 & VAR41))
        {
            VAR2->VAR43 = VAR44;
        }
        VAR2->VAR45 = VAR46;
        VAR2->VAR47 = VAR48;
        if (VAR5 & VAR13)
        {
            VAR2->VAR24 = VAR49;
            VAR2->VAR26[0] = VAR50;
            VAR2->VAR26[1] = VAR51;
            VAR2->VAR35[4] = VAR52;
            if (!(VAR4->VAR40 & VAR41))
            {
                VAR2->VAR35[0] = VAR53;
            }
            VAR2->VAR54 = VAR55;
        }
        if (VAR5 & VAR10)
        {
            VAR2->VAR16 = VAR56;
            VAR2->VAR24 = VAR57;
            VAR2->VAR26[0] = VAR58;
            VAR2->VAR26[1] = VAR59;
        }
        if (VAR60 && VAR5 & (VAR10 | VAR61))
        {
            VAR2->VAR62 = VAR63;
        }
        if (VAR5 & VAR64)
        {
            if (!(VAR4->VAR40 & VAR41))
            {
                VAR2->VAR43 = VAR65;
            }
            VAR2->VAR45 = VAR66;
            VAR2->VAR24 = VAR67;
            VAR2->VAR26[0] = VAR68;
            VAR2->VAR26[1] = VAR69;
        }
        if (VAR5 & VAR70)
        {
            if (!(VAR4->VAR40 & VAR41))
            {
                VAR2->VAR43 = VAR71;
            }
            VAR2->VAR45 = VAR72;
        }
    }
    FUN2(VAR2, VAR4);
}