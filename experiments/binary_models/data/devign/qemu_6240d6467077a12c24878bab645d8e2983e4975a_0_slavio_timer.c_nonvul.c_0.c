static void FUN1(void *VAR1, target_phys_addr_t VAR2, uint32_t VAR3)
{
    VAR4 *VAR5 = VAR1;
    uint32_t VAR6;
    FUN2("" VAR7 "", VAR2, VAR3);
    VAR6 = (VAR2 & VAR8) >> 2;
    switch (VAR6)
    {
    case VAR9:
        if (FUN3(VAR5))
        {
            FUN4(VAR5->VAR10);
            VAR5->VAR11 = VAR12;
            FUN2("", VAR5->VAR13);
            FUN5(VAR5->VAR14, FUN6(VAR5->VAR11), 1);
        }
        else
        {
            FUN4(VAR5->VAR10);
            VAR5->VAR11 = VAR3 & VAR15;
            if (VAR5->VAR11 == 0)
                FUN5(VAR5->VAR14, FUN6(VAR15), 1);
            else
                FUN5(VAR5->VAR14, FUN6(VAR5->VAR11), 1);
        }
        break;
    case VAR16:
        if (FUN3(VAR5))
        {
            FUN4(VAR5->VAR10);
            VAR5->VAR11 = VAR12;
            FUN2("", VAR5->VAR13);
            FUN5(VAR5->VAR14, FUN6(VAR5->VAR11), 1);
        }
        else
            FUN2("");
        break;
    case VAR17:
        VAR5->VAR11 = VAR3 & VAR15;
        if (VAR5->VAR11 == 0)
            FUN5(VAR5->VAR14, FUN6(VAR15), 0);
        else
            FUN5(VAR5->VAR14, FUN6(VAR5->VAR11), 0);
        break;
    case VAR18:
        if (FUN3(VAR5))
        {
            if ((VAR3 & 1) && !VAR5->VAR19)
            {
                FUN2("", VAR5->VAR13);
                FUN7(VAR5->VAR14, 0);
                VAR5->VAR19 = 1;
            }
            else if (!(VAR3 & 1) && VAR5->VAR19)
            {
                FUN2("", VAR5->VAR13);
                FUN8(VAR5->VAR14);
                VAR5->VAR19 = 0;
            }
        }
        break;
    case VAR20:
        if (VAR5->VAR21 == NULL)
        {
            unsigned int VAR22;
            for (VAR22 = 0; VAR22 < VAR5->VAR23; VAR22++)
            {
                if (VAR3 & (1 << VAR22))
                {
                    FUN4(VAR5->VAR24[VAR22]->VAR10);
                    VAR5->VAR24[VAR22]->VAR11 = -1ULL;
                }
                if ((VAR3 & (1 << VAR22)) != (VAR5->VAR25 & (1 << VAR22)))
                {
                    FUN8(VAR5->VAR24[VAR22]->VAR14);
                    FUN5(VAR5->VAR24[VAR22]->VAR14, FUN6(VAR5->VAR24[VAR22]->VAR11), 1);
                    FUN2("", VAR5->VAR24[VAR22]->VAR13);
                    FUN7(VAR5->VAR24[VAR22]->VAR14, 0);
                }
            }
            VAR5->VAR25 = VAR3 & ((1 << VAR5->VAR23) - 1);
        }
        else
            FUN2("");
        break;
    default:
        FUN2("" VAR7 "", VAR2);
        break;
    }
}