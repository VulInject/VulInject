static void FUN1(void *VAR1)
{
    struct VAR2 *VAR3 = (struct VAR2 *)VAR1;
    target_phys_addr_t VAR4;
    int VAR5, VAR6;
    int VAR7;
    if (!(VAR3->VAR8[0] & VAR9))
        return;
    FUN2(VAR3);
    FUN3(VAR3);
    VAR5 = VAR3->VAR10;
    VAR6 = 0;
    VAR3->VAR11 = VAR3->VAR12[2].VAR13 || VAR3->VAR12[3].VAR13;
    for (VAR7 = 0; VAR7 < VAR14; VAR7++)
        if (VAR3->VAR12[VAR7].VAR13)
        {
            if (!VAR3->VAR12[VAR7].VAR15)
            {
                FUN4(VAR3, VAR7);
                continue;
            }
            VAR4 = VAR3->VAR12[VAR7].VAR15;
            if (!(VAR4 >= VAR16 && VAR4 <= VAR16 + VAR17))
            {
                FUN4(VAR3, VAR7);
                continue;
            }
            if (VAR3->VAR12[VAR7].VAR18 & VAR19)
            {
                FUN5(VAR4, VAR3->VAR12[VAR7].VAR20, FUN6(FUN7(VAR3->VAR12[VAR7].VAR18), sizeof(VAR3->VAR12[VAR7].VAR20)));
                FUN8(VAR3, VAR7, VAR3->VAR21);
            }
            else
            {
                if (FUN9(VAR3->VAR8[4]) != VAR3->VAR22)
                    FUN8(VAR3, VAR7, VAR3->VAR21);
                FUN10(VAR3, VAR7);
                VAR3->VAR12[VAR7].FUN11(VAR3, VAR4, &VAR5, &VAR6);
                VAR3->VAR23 = 0;
                FUN12(VAR3, VAR7);
            }
        }
    if (VAR3->VAR8[0] & VAR24)
    {
        VAR3->VAR8[0] &= ~VAR9;
        VAR3->VAR25[0] |= VAR26;
    }
    if (VAR5 >= 0)
    {
        if (VAR3->VAR27)
            FUN13(VAR3->VAR28, VAR5, 0, VAR6, VAR3->VAR29);
        else
            FUN13(VAR3->VAR28, 0, VAR5, VAR3->VAR29, VAR6);
    }
    FUN14(VAR3);
    FUN15(VAR3->VAR30);
}