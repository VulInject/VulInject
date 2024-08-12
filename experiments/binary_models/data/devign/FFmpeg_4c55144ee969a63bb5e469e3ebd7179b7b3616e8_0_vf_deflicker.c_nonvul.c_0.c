static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR1 *VAR8 = VAR6->VAR9[0];
    VAR10 *VAR11 = VAR6->VAR12;
    VAR13 **VAR14;
    VAR3 *VAR15, *VAR16;
    float VAR17;
    int VAR18;
    if (VAR11->VAR19.VAR20 < VAR11->VAR21 && !VAR11->VAR22)
    {
        VAR11->VAR23[VAR11->VAR20] = VAR11->FUN2(VAR6, VAR4);
        FUN3(VAR6, &VAR11->VAR19, VAR4);
        VAR11->VAR20++;
        return 0;
    }
    VAR16 = FUN4(&VAR11->VAR19, 0);
    VAR15 = FUN5(VAR8, VAR8->VAR24, VAR8->VAR25);
    if (!VAR15)
    {
        FUN6(&VAR4);
        return FUN7(VAR26);
    }
    VAR11->FUN8(VAR6, &VAR17);
    if (!VAR11->VAR27)
        VAR11->FUN9(VAR6, VAR16->VAR28[0], VAR16->VAR29[0], VAR15->VAR28[0], VAR15->VAR29[0], VAR8->VAR24, VAR8->VAR25, VAR17);
    for (VAR18 = 1 - VAR11->VAR27; VAR18 < VAR11->VAR30; VAR18++)
    {
        FUN10(VAR15->VAR28[VAR18], VAR15->VAR29[VAR18], VAR16->VAR28[VAR18], VAR16->VAR29[VAR18], VAR11->VAR31[VAR18] * (1 + (VAR11->VAR32 > 8)), VAR11->VAR33[VAR18]);
    }
    FUN11(VAR15, VAR16);
    VAR14 = &VAR15->VAR14;
    if (VAR14)
    {
        uint8_t VAR34[128];
        snprintf(VAR34, sizeof(VAR34), "", VAR11->VAR23[0]);
        FUN12(VAR14, "", VAR34, 0);
        snprintf(VAR34, sizeof(VAR34), "", VAR11->VAR23[0] * VAR17);
        FUN12(VAR14, "", VAR34, 0);
        snprintf(VAR34, sizeof(VAR34), "", VAR17 - 1.0f);
        FUN12(VAR14, "", VAR34, 0);
    }
    VAR16 = FUN13(&VAR11->VAR19);
    FUN6(&VAR16);
    memmove(&VAR11->VAR23[0], &VAR11->VAR23[1], sizeof(*VAR11->VAR23) * (VAR11->VAR21 - 1));
    VAR11->VAR23[VAR11->VAR20 - 1] = VAR11->FUN2(VAR6, VAR4);
    FUN3(VAR6, &VAR11->VAR19, VAR4);
    return FUN14(VAR8, VAR15);
}