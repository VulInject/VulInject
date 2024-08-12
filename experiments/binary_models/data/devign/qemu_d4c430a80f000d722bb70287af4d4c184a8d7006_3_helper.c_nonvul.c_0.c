int FUN1(VAR1 *VAR2, target_ulong VAR3, int VAR4, int VAR5, int VAR6)
{
    unsigned int VAR7;
    unsigned int VAR8;
    int VAR9 = 1;
    int VAR10;
    VAR8 = 0;
    if (VAR2->VAR11.VAR12[0] & VAR13)
    {
        VAR8 = 1;
        if ((VAR2->VAR11.VAR12[0] & VAR14) && (VAR2->VAR11.VAR12[11] & VAR15) != VAR15)
        {
            VAR8 = 0;
        }
    }
    if (VAR8 && (VAR2->VAR16[VAR17] & VAR18))
    {
        target_ulong VAR19, VAR20;
        struct microblaze_mmu_lookup VAR21;
        VAR7 = FUN2(&VAR2->VAR22, &VAR21, VAR3, VAR4, VAR5);
        if (VAR7)
        {
            VAR19 = VAR3 & VAR23;
            VAR20 = VAR21.VAR20 + VAR19 - VAR21.VAR19;
            FUN3(FUN4("", VAR5, VAR19, VAR20, VAR21.VAR10));
            FUN5(VAR2, VAR19, VAR20, VAR21.VAR10, VAR5, VAR24);
            VAR9 = 0;
        }
        else
        {
            VAR2->VAR16[VAR25] = VAR3;
            FUN3(FUN4("", VAR5, VAR3));
            switch (VAR21.VAR26)
            {
            case VAR27:
                VAR2->VAR16[VAR28] = VAR4 == 2 ? 17 : 16;
                VAR2->VAR16[VAR28] |= (VAR4 == 1) << 10;
                break;
            case VAR29:
                VAR2->VAR16[VAR28] = VAR4 == 2 ? 19 : 18;
                VAR2->VAR16[VAR28] |= (VAR4 == 1) << 10;
                break;
            default:
                FUN6();
                break;
            }
            if (VAR2->VAR30 == VAR31)
            {
                FUN7(VAR2, "");
            }
            VAR2->VAR30 = VAR31;
        }
    }
    else
    {
        VAR3 &= VAR23;
        VAR10 = VAR32;
        FUN5(VAR2, VAR3, VAR3, VAR10, VAR5, VAR24);
        VAR9 = 0;
    }
    return VAR9;
}