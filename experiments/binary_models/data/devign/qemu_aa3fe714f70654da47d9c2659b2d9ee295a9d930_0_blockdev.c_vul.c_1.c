void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR1 *VAR5 = VAR2;
    VAR6 *VAR7, *VAR8;
    VAR3 *VAR9 = NULL;
    FUN2(VAR10, VAR6)
    VAR10;
    FUN3(&VAR10);
    FUN4();
    while (NULL != VAR5)
    {
        VAR11 *VAR12 = NULL;
        const VAR13 *VAR14;
        VAR12 = VAR5->VAR15;
        VAR5 = VAR5->VAR8;
        assert(VAR12->VAR16 < FUN5(VAR17));
        VAR14 = &VAR17[VAR12->VAR16];
        VAR7 = FUN6(VAR14->VAR18);
        VAR7->VAR14 = VAR14;
        VAR7->VAR19 = VAR12;
        FUN7(&VAR10, VAR7, VAR20);
        VAR7->VAR14->FUN8(VAR7, &VAR9);
        if (FUN9(&VAR9))
        {
            FUN10(VAR4, VAR9);
            goto VAR21;
        }
    }
    FUN11(VAR7, &VAR10, VAR20)
    {
        if (VAR7->VAR14->VAR22)
        {
            VAR7->VAR14->FUN12(VAR7);
        }
    }
    goto VAR23;
VAR21:
    FUN11(VAR7, &VAR10, VAR20)
    {
        if (VAR7->VAR14->VAR24)
        {
            VAR7->VAR14->FUN13(VAR7);
        }
    }
VAR23:
    FUN14(VAR7, &VAR10, VAR20, VAR8)
    {
        if (VAR7->VAR14->VAR25)
        {
            VAR7->VAR14->FUN15(VAR7);
        }
        FUN16(VAR7);
    }