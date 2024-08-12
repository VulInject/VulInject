static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 **VAR6)
{
    uint16_t VAR7;
    VAR8 *VAR9 = NULL;
    VAR10 *VAR11 = FUN2(VAR2);
    if (VAR4->VAR12)
    {
        VAR7 = VAR4->VAR13;
    }
    else
    {
        VAR7 = VAR14;
    }
    if (VAR7 >= VAR15)
    {
        FUN3(VAR6, "" VAR16 "", VAR7);
        return;
    }
    if (VAR17[VAR7].VAR18)
    {
        FUN3(VAR6, "" VAR16, VAR7);
        return;
    }
    if (!VAR11->VAR19)
    {
        FUN4("");
        FUN5(1);
    }
    for (VAR9 = VAR4->VAR9; VAR9; VAR9 = VAR9->VAR20)
    {
        CpuInstanceProperties VAR21;
        if (VAR9->VAR22 >= VAR23)
        {
            FUN3(VAR6, "" VAR16 ""
                             "",
                       VAR9->VAR22, VAR23);
            return;
        }
        VAR21 = VAR11->FUN6(VAR2, VAR9->VAR22);
        VAR21.VAR24 = VAR7;
        VAR21.VAR25 = true;
        FUN7(VAR2, &VAR21, &VAR26);
    }
    if (VAR4->VAR27 && VAR4->VAR28)
    {
        FUN3(VAR6, "");
        return;
    }
    if (VAR29 == -1)
    {
        VAR29 = VAR4->VAR28;
    }
    if (VAR4->VAR28 != VAR29)
    {
        FUN3(VAR6, ""
                         "");
        return;
    }
    if (VAR4->VAR27)
    {
        VAR17[VAR7].VAR30 = VAR4->VAR31;
    }
    if (VAR4->VAR28)
    {
        VAR32 *VAR33;
        VAR33 = FUN8(VAR4->VAR34, VAR35, NULL);
        if (!VAR33)
        {
            FUN3(VAR6, "", VAR4->VAR34);
            return;
        }
        FUN9(VAR33);
        VAR17[VAR7].VAR30 = FUN10(VAR33, "", NULL);
        VAR17[VAR7].VAR36 = FUN11(VAR33);
    }
    VAR17[VAR7].VAR18 = true;
    VAR37 = FUN12(VAR37, VAR7 + 1);
}