void FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    VAR5 *VAR6;
    VAR7 *VAR8;
    const char *VAR9;
    const char *const VAR10[] = {
        [VAR11] = "",
        [VAR12] = "",
        [VAR13] = "",
        [VAR14] = "",
        [VAR15] = "",
        [VAR16] = "",
        [VAR17] = "",
        [VAR18] = "",
        [VAR19] = "",
        [VAR20] = "",
        [VAR21] = "",
    };
    VAR8 = FUN2(NULL);
    if (!VAR8->VAR22)
    {
        FUN3(VAR2, "");
        goto VAR23;
    }
    FUN3(VAR2, "");
    if (VAR8->VAR24)
    {
        FUN3(VAR2, "" VAR25 "", VAR8->VAR26, VAR8->VAR27);
    }
    if (VAR8->VAR28)
    {
        FUN3(VAR2, "" VAR25 "", VAR8->VAR26, VAR8->VAR29);
    }
    FUN3(VAR2, "", VAR8->VAR30 ? "" : "");
    FUN3(VAR2, "", VAR8->VAR31);
    FUN3(VAR2, "", VAR8->VAR32);
    FUN3(VAR2, "", VAR33[VAR8->VAR34]);
    if (!VAR8->VAR35 || VAR8->VAR36 == NULL)
    {
        FUN3(VAR2, "");
    }
    else
    {
        for (VAR6 = VAR8->VAR36; VAR6; VAR6 = VAR6->VAR37)
        {
            FUN3(VAR2, "");
            FUN3(VAR2, "", VAR6->VAR38->VAR26, VAR6->VAR38->VAR27, VAR6->VAR38->VAR39 ? "" : "");
            FUN3(VAR2, "" VAR25 "", VAR6->VAR38->VAR40);
            FUN3(VAR2, "" VAR25 "" VAR25 "", VAR6->VAR38->VAR41, VAR6->VAR38->VAR42);
            VAR9 = "";
            if (VAR6->VAR38->VAR41 > 0 && VAR6->VAR38->VAR41 < FUN4(VAR10) && VAR10[VAR6->VAR38->VAR41])
            {
                VAR9 = VAR10[VAR6->VAR38->VAR41];
            }
            FUN3(VAR2, "", VAR9);
        }
    }
VAR23:
    FUN5(VAR8);
}