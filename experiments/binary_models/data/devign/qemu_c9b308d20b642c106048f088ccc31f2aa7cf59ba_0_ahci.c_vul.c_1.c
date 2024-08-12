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
    VAR5->VAR19 = -1;
    VAR5->VAR20 = 0;
    VAR11 = &VAR2->VAR6[VAR3].VAR3.VAR12[0];
    if (!VAR11->VAR21)
    {
        return;
        for (VAR13 = 0; VAR13 < VAR15; VAR13++)
        {
            VAR22 *VAR23 = &VAR2->VAR6[VAR3].VAR23[VAR13];
            if (VAR23->VAR24)
            {
                FUN4(VAR23->VAR24);
                VAR23->VAR24 = NULL;
                FUN5(&VAR23->VAR25);
                VAR23->VAR26 = 0;
                VAR2->VAR6[VAR3].VAR27 = VAR28;
                if (!VAR11->VAR21)
                {
                    VAR2->VAR6[VAR3].VAR9.VAR29 = 0;
                    VAR11->VAR30 = VAR31 | VAR32;
                }
                else if (VAR11->VAR33 == VAR34)
                {
                    VAR2->VAR6[VAR3].VAR9.VAR29 = VAR35;
                    VAR11->VAR36 = 0x14;
                    VAR11->VAR37 = 0xeb;
                    FUN2(VAR3, "", VAR11->VAR36);
                    VAR11->VAR30 = VAR31 | VAR32 | VAR38;
                }
                else
                {
                    VAR2->VAR6[VAR3].VAR9.VAR29 = VAR39;
                    VAR11->VAR30 = VAR31 | VAR32;
                    VAR11->VAR40 = 1;
                    FUN6(VAR5)