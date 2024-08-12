static void FUN1(struct VAR1 *VAR2)
{
    uint32_t VAR3, VAR4, VAR5;
    struct VAR6 *VAR7 = VAR2->VAR8.VAR7;
    VAR3 = VAR7->VAR9;
    VAR5 = VAR7->VAR5;
    if (VAR3 - VAR5 > VAR10)
    {
        return;
    }
    FUN2();
    for (VAR4 = VAR5; VAR4 != VAR3; VAR4++)
    {
        union VAR11 *VAR12 = &FUN3(VAR7, VAR4);
        uint8_t VAR13 = VAR12->VAR13;
        int VAR14, VAR15, VAR16, VAR17;
        switch (VAR13)
        {
        case VAR18:
            if (VAR2->VAR19 == VAR20)
                VAR2->VAR21 = 1;
            if (VAR2->VAR21)
                break;
            VAR14 = FUN4(VAR12->update.VAR14, 0);
            VAR15 = FUN4(VAR12->update.VAR15, 0);
            VAR16 = FUN5(VAR12->update.VAR22, VAR2->VAR22 - VAR14);
            VAR17 = FUN5(VAR12->update.VAR23, VAR2->VAR23 - VAR15);
            if (VAR16 < 0 || VAR17 < 0)
            {
                FUN6(&VAR2->VAR8.VAR24, 1, "");
                break;
            }
            if (VAR14 != VAR12->update.VAR14 || VAR15 != VAR12->update.VAR15 || VAR16 != VAR12->update.VAR22 || VAR17 != VAR12->update.VAR23)
            {
                FUN6(&VAR2->VAR8.VAR24, 1, "");
            }
            if (VAR16 == VAR2->VAR22 && VAR17 > VAR2->VAR23 / 2)
            {
                VAR2->VAR21 = 1;
            }
            else
            {
                VAR2->VAR25[VAR2->VAR19].VAR14 = VAR14;
                VAR2->VAR25[VAR2->VAR19].VAR15 = VAR15;
                VAR2->VAR25[VAR2->VAR19].VAR16 = VAR16;
                VAR2->VAR25[VAR2->VAR19].VAR17 = VAR17;
                VAR2->VAR19++;
            }
            break;
        case VAR26:
            if (FUN7(VAR2, VAR2->VAR27, VAR12->VAR28.VAR22, VAR12->VAR28.VAR23, VAR12->VAR28.VAR29, VAR2->VAR27, VAR12->VAR28.VAR30, VAR12->VAR28.VAR31) < 0)
                break;
            FUN8(VAR2);
            break;
        }
    }
    FUN9();
    VAR7->VAR5 = VAR4;
}