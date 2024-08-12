void FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4, int VAR5, struct VAR6 *VAR7, int VAR8)
{
    unsigned int VAR9, VAR10;
    struct VAR11 *VAR12;
    for (VAR9 = 0; VAR9 < VAR5; VAR9++)
    {
        struct VAR3 *VAR13 = VAR4 + VAR9;
        FUN2(VAR2, VAR13->VAR14, VAR7, VAR8);
        VAR12 = FUN3(VAR2, VAR13->VAR14);
        if (VAR12)
            VAR12->VAR13 = VAR13->VAR13;
        FUN4("", VAR13->VAR14, VAR12->VAR13, VAR12->VAR15, VAR12->VAR16);
    }
    if (VAR7)
    {
        for (VAR9 = 0; VAR9 < VAR8; VAR9++)
        {
            struct VAR6 *VAR17 = VAR7 + VAR9;
            VAR12 = FUN3(VAR2, VAR17->VAR14);
            VAR12->VAR18 = VAR17->VAR19[0];
            for (VAR10 = 1; VAR10 < FUN5(VAR17->VAR19); VAR10++)
            {
                if (!VAR17->VAR19[VAR10])
                    continue;
                VAR12 = FUN3(VAR2, VAR17->VAR19[VAR10 - 1]);
                VAR12->VAR18 = VAR17->VAR19[VAR10];
            }
            FUN4("", VAR17->VAR14, VAR12->VAR15, VAR12->VAR16);
        }
    }
}