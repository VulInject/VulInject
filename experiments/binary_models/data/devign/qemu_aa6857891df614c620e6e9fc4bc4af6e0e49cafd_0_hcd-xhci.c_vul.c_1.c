static void FUN1(VAR1 *VAR2)
{
    uint32_t VAR3 = 0;
    unsigned int VAR4;
    bool VAR5 = 0;
    bool VAR6 = 0;
    XHCIEvent VAR7 = {VAR8, VAR9};
    VAR10 *VAR11 = VAR2->VAR11;
    int VAR12;
    VAR4 = VAR2->VAR13.VAR14;
    for (VAR12 = 0; VAR12 < VAR2->VAR15; VAR12++)
    {
        VAR16 *VAR17 = &VAR2->VAR18[VAR12];
        unsigned int VAR19 = 0;
        switch (FUN2(*VAR17))
        {
        case VAR20:
        case VAR21:
        case VAR22:
            VAR19 = VAR17->VAR23 & 0x1ffff;
            if (VAR19 > VAR4)
            {
                VAR19 = VAR4;
                if (VAR2->VAR23 == VAR9)
                {
                    VAR6 = 1;
                }
            }
            VAR4 -= VAR19;
            VAR3 += VAR19;
            break;
        case VAR24:
            VAR5 = 0;
            VAR6 = 0;
            break;
        }
        if (!VAR5 && ((VAR17->VAR25 & VAR26) || (VAR6 && (VAR17->VAR25 & VAR27)) || (VAR2->VAR23 != VAR9 && VAR4 == 0)))
        {
            VAR7.VAR28 = VAR2->VAR28;
            VAR7.VAR29 = VAR2->VAR29;
            VAR7.VAR30 = (VAR17->VAR23 & 0x1ffff) - VAR19;
            VAR7.VAR31 = 0;
            VAR7.VAR32 = VAR17->VAR33;
            if (VAR2->VAR23 == VAR9)
            {
                VAR7.VAR34 = VAR6 ? VAR35 : VAR9;
            }
            else
            {
                VAR7.VAR34 = VAR2->VAR23;
            }
            if (FUN2(*VAR17) == VAR36)
            {
                VAR7.VAR32 = VAR17->VAR37;
                VAR7.VAR31 |= VAR38;
                VAR7.VAR30 = VAR3 & 0xffffff;
                FUN3("", VAR7.VAR30);
                VAR3 = 0;
            }
            FUN4(VAR11, &VAR7, FUN5(*VAR17));
            VAR5 = 1;
            if (VAR2->VAR23 != VAR9)
            {
                return;
            }
        }
    }
}