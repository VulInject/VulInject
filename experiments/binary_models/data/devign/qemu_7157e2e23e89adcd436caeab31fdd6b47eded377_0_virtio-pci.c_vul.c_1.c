static void FUN1(void *VAR1, uint32_t VAR2, uint32_t VAR3)
{
    VAR4 *VAR5 = VAR1;
    VAR6 *VAR7 = VAR5->VAR7;
    target_phys_addr_t VAR8;
    switch (VAR2)
    {
    case VAR9:
        if (VAR3 & (1 << VAR10))
        {
            if (VAR7->VAR11)
                VAR3 = VAR5->VAR12 & VAR7->FUN2(VAR7);
            else
                VAR3 = 0;
        }
        if (VAR7->VAR13)
            VAR7->FUN3(VAR7, VAR3);
        VAR7->VAR14 = VAR3;
        break;
    case VAR15:
        VAR8 = (VAR16)VAR3 << VAR17;
        if (VAR8 == 0)
        {
            FUN4(VAR5);
            FUN5(VAR5->VAR7);
            FUN6(&VAR5->VAR18);
        }
        else
            FUN7(VAR7, VAR7->VAR19, VAR8);
        break;
    case VAR20:
        if (VAR3 < VAR21)
            VAR7->VAR19 = VAR3;
        break;
    case VAR22:
        FUN8(VAR7, VAR3);
        break;
    case VAR23:
        if (!(VAR3 & VAR24))
        {
            FUN4(VAR5);
        }
        FUN9(VAR7, VAR3 & 0xFF);
        if (VAR3 & VAR24)
        {
            FUN10(VAR5);
        }
        if (VAR7->VAR25 == 0)
        {
            FUN5(VAR5->VAR7);
            FUN6(&VAR5->VAR18);
        }
        if ((VAR3 & VAR24) && !(VAR5->VAR18.VAR26[VAR27] & VAR28))
        {
            VAR5->VAR29 |= VAR30;
        }
        break;
    case VAR31:
        FUN11(&VAR5->VAR18, VAR7->VAR32);
        if (FUN12(&VAR5->VAR18, VAR3) < 0)
            VAR3 = VAR33;
        VAR7->VAR32 = VAR3;
        break;
    case VAR34:
        FUN11(&VAR5->VAR18, FUN13(VAR7, VAR7->VAR19));
        if (FUN12(&VAR5->VAR18, VAR3) < 0)
            VAR3 = VAR33;
        FUN14(VAR7, VAR7->VAR19, VAR3);
        break;
    default:
        FUN15("", VAR35, VAR2, VAR3);
        break;
    }
}