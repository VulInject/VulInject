static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int32_t VAR5)
{
    int VAR6, VAR7;
    int32_t VAR8;
    TCGv VAR9;
    VAR6 = FUN2(VAR4->VAR10);
    VAR7 = FUN3(VAR4->VAR10);
    VAR8 = FUN4(VAR4->VAR10);
    switch (VAR5)
    {
    case VAR11:
        VAR9 = FUN5();
        FUN6(VAR9, VAR12[VAR7], VAR8);
        FUN7(VAR12[VAR6], VAR9, VAR4->VAR13, VAR14);
        FUN8(VAR9);
        break;
    case VAR15:
        VAR9 = FUN5();
        FUN6(VAR9, VAR12[VAR7], VAR8);
        FUN7(VAR16[VAR6], VAR9, VAR4->VAR13, VAR14);
        FUN8(VAR9);
        break;
    case VAR17:
        FUN6(VAR12[VAR6], VAR12[VAR7], VAR8);
        break;
    case VAR18:
        if (FUN9(VAR2, VAR19))
        {
            FUN10(VAR4, VAR12[VAR6], VAR12[VAR7], VAR8, VAR14);
        }
        else
        {
        }
        break;
    case VAR20:
        FUN10(VAR4, VAR16[VAR6], VAR12[VAR7], VAR8, VAR14);
        break;
    case VAR21:
        if (FUN9(VAR2, VAR19))
        {
            FUN11(VAR4, VAR16[VAR6], VAR12[VAR7], VAR8, VAR22);
        }
        else
        {
        }
        break;
    case VAR23:
        if (FUN9(VAR2, VAR19))
        {
            FUN11(VAR4, VAR16[VAR6], VAR12[VAR7], VAR8, VAR24);
        }
        else
        {
        }
        break;
    case VAR25:
        if (FUN9(VAR2, VAR19))
        {
            FUN11(VAR4, VAR16[VAR6], VAR12[VAR7], VAR8, VAR26);
        }
        else
        {
        }
        break;
    case VAR27:
        if (FUN9(VAR2, VAR19))
        {
            FUN11(VAR4, VAR16[VAR6], VAR12[VAR7], VAR8, VAR28);
        }
        else
        {
        }
        break;
    case VAR29:
        if (FUN9(VAR2, VAR19))
        {
            FUN10(VAR4, VAR16[VAR6], VAR12[VAR7], VAR8, VAR22);
        }
        else
        {
        }
        break;
    case VAR30:
        if (FUN9(VAR2, VAR19))
        {
            FUN10(VAR4, VAR16[VAR6], VAR12[VAR7], VAR8, VAR26);
        }
        else
        {
        }
        break;
    }
}