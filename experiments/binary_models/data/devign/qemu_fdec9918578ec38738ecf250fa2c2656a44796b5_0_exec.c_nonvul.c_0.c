VAR1 FUN1(ram_addr_t VAR2, void *VAR3, VAR4 *VAR5)
{
    VAR6 *VAR7;
    VAR2 = FUN2(VAR2);
    VAR7 = FUN3(sizeof(*VAR7));
    VAR7->VAR5 = VAR5;
    VAR7->VAR8 = FUN4(VAR2);
    if (VAR3)
    {
        VAR7->VAR3 = VAR3;
        VAR7->VAR9 |= VAR10;
    }
    else
    {
        if (VAR11)
        {
            VAR7->VAR3 = FUN5(VAR7, VAR2, VAR11);
            if (!VAR7->VAR3)
            {
                VAR7->VAR3 = FUN6(VAR2);
                FUN7(VAR7->VAR3, VAR2, VAR12);
            }
            fprintf(VAR13, "");
            FUN8(1);
        }
        else
        {
            if (FUN9())
            {
                FUN10(VAR7->VAR8, VAR2, VAR5);
            }
            else if (FUN11())
            {
                VAR7->VAR3 = FUN12(VAR2);
            }
            else
            {
                VAR7->VAR3 = FUN6(VAR2);
            }
            FUN7(VAR7->VAR3, VAR2, VAR12);
        }
    }
    VAR7->VAR14 = VAR2;
    FUN13(&VAR15.VAR16, VAR7, VAR17);
    VAR15.VAR18 = FUN14(VAR15.VAR18, FUN15() >> VAR19);
    FUN16(VAR7->VAR8, VAR2, 0xff);
    if (FUN11())
        FUN17(VAR7->VAR3, VAR2);
    return VAR7->VAR8;
}