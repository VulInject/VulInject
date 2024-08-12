static void FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = &VAR2->VAR6[VAR3];
    VAR7 *VAR8 = &VAR5->VAR9;
    VAR10 *VAR11 = &VAR5->VAR3.VAR12[0];
    int VAR13;
    FUN2(VAR3, "");
    FUN3(&VAR5->VAR3);
    VAR11->VAR14 = VAR15;
    VAR8->VAR16 = 0;
    VAR8->VAR17 = 0;
    VAR8->VAR18 = 0;
    VAR8->VAR19 = 0x7F;
    VAR8->VAR20 = 0xFFFFFFFF;
    VAR5->VAR21 = -1;
    VAR5->VAR22 = false;
    VAR11 = &VAR2->VAR6[VAR3].VAR3.VAR12[0];
    if (!VAR11->VAR23)
    {
        return;
    }
    for (VAR13 = 0; VAR13 < VAR15; VAR13++)
    {
        VAR24 *VAR25 = &VAR2->VAR6[VAR3].VAR25[VAR13];
        if (!VAR25->VAR26)
        {
            continue;
        }
        if (VAR25->VAR27)
        {
            FUN4(VAR25->VAR27);
            VAR25->VAR27 = NULL;
        }
        if (!VAR25->VAR26)
        {
            continue;
        }
        FUN5(&VAR25->VAR28);
        VAR25->VAR26 = 0;
    }
    VAR2->VAR6[VAR3].VAR29 = VAR30;
    if (!VAR11->VAR23)
    {
        VAR8->VAR20 = 0;
        VAR11->VAR31 = VAR32 | VAR33;
    }
    else if (VAR11->VAR34 == VAR35)
    {
        VAR8->VAR20 = VAR36;
        VAR11->VAR37 = 0x14;
        VAR11->VAR38 = 0xeb;
        FUN2(VAR3, "", VAR11->VAR37);
        VAR11->VAR31 = VAR32 | VAR33 | VAR39;
    }
    else
    {
        VAR8->VAR20 = VAR40;
        VAR11->VAR31 = VAR32 | VAR33;
    }
    VAR11->VAR41 = 1;
    FUN6(VAR5);
}