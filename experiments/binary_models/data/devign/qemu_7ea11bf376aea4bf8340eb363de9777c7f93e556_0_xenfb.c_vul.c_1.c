static void FUN1(struct VAR1 *VAR2)
{
    uint32_t VAR3, VAR4;
    struct VAR5 *VAR6 = VAR2->VAR7.VAR6;
    VAR3 = VAR6->VAR8;
    if (VAR3 == VAR6->VAR9)
        return;
    FUN2();
    for (VAR4 = VAR6->VAR9; VAR4 != VAR3; VAR4++)
    {
        union VAR10 *VAR11 = &FUN3(VAR6, VAR4);
        int VAR12, VAR13, VAR14, VAR15;
        switch (VAR11->VAR16)
        {
        case VAR17:
            if (VAR2->VAR18 == VAR19)
                VAR2->VAR20 = 1;
            if (VAR2->VAR20)
                break;
            VAR12 = FUN4(VAR11->update.VAR12, 0);
            VAR13 = FUN4(VAR11->update.VAR13, 0);
            VAR14 = FUN5(VAR11->update.VAR21, VAR2->VAR21 - VAR12);
            VAR15 = FUN5(VAR11->update.VAR22, VAR2->VAR22 - VAR13);
            if (VAR14 < 0 || VAR15 < 0)
            {
                FUN6(&VAR2->VAR7.VAR23, 1, "");
                break;
            }
            if (VAR12 != VAR11->update.VAR12 || VAR13 != VAR11->update.VAR13 || VAR14 != VAR11->update.VAR21 || VAR15 != VAR11->update.VAR22)
            {
                FUN6(&VAR2->VAR7.VAR23, 1, "");
            }
            if (VAR14 == VAR2->VAR21 && VAR15 > VAR2->VAR22 / 2)
            {
                VAR2->VAR20 = 1;
            }
            else
            {
                VAR2->VAR24[VAR2->VAR18].VAR12 = VAR12;
                VAR2->VAR24[VAR2->VAR18].VAR13 = VAR13;
                VAR2->VAR24[VAR2->VAR18].VAR14 = VAR14;
                VAR2->VAR24[VAR2->VAR18].VAR15 = VAR15;
                VAR2->VAR18++;
            }
            break;
        case VAR25:
            if (FUN7(VAR2, VAR2->VAR26, VAR11->VAR27.VAR21, VAR11->VAR27.VAR22, VAR11->VAR27.VAR28, VAR2->VAR26, VAR11->VAR27.VAR29, VAR11->VAR27.VAR30) < 0)
                break;
            FUN8(VAR2);
            break;
        }
    }
    FUN9();
    VAR6->VAR9 = VAR4;
}