FUN1(struct VAR1 *VAR2)
{
    uint32_t VAR3;
    uint16_t VAR4;
    uint16_t VAR5;
    uint32_t VAR6;
    FUN2();
    if (VAR2->VAR7)
    {
        if (VAR2->VAR8)
        {
            VAR5 = FUN3(VAR2->VAR9.VAR10.VAR11.VAR12);
            FUN4();
        }
        else
        {
            VAR5 = FUN3(VAR2->VAR13.VAR14.VAR15) - FUN5(&VAR2->VAR13.VAR14);
            FUN6();
        }
        VAR3 = FUN7(&VAR2->VAR13.VAR14, VAR5, &VAR6);
        FUN8(VAR3, VAR5);
    }
    else
    {
        if (VAR2->VAR8)
        {
            VAR5 = FUN3(VAR2->VAR9.VAR10.VAR11.VAR12);
            FUN9();
        }
        else
        {
            struct VAR16 *VAR17 = &VAR2->VAR18.VAR19;
            size_t VAR20 = VAR2->VAR21 - VAR2->VAR22;
            size_t VAR23 = VAR20 - sizeof(struct VAR16);
            VAR5 = FUN3(VAR17->VAR24.VAR25.VAR26) - VAR23;
            FUN10();
        }
        VAR3 = FUN11(&VAR2->VAR18.VAR19, VAR5, VAR2->VAR18.VAR27, &VAR6);
        FUN8(VAR3, VAR5);
    }
    VAR3 += FUN12(VAR2->VAR28, VAR2->VAR29, VAR2->VAR21, VAR5, VAR6);
    VAR4 = FUN13(VAR3);
    FUN14(VAR2->VAR21, VAR5, VAR3, VAR4);
    return VAR4;
}