VAR1 *FUN1(VAR2 **VAR3)
{
    VAR1 *VAR4 = FUN2(sizeof(*VAR4));
    VAR5 *VAR6 = FUN3(NULL);
    VAR7 *VAR8 = NULL;
    if (VAR6 == NULL || !VAR6->VAR9)
    {
        VAR4->VAR10 = false;
    }
    else
    {
        VAR4->VAR10 = true;
        VAR4->VAR11 = true;
        VAR4->VAR12 = FUN4(VAR6);
        if (VAR6->VAR13 == NULL)
        {
            return VAR4;
        }
        VAR8 = FUN5(VAR6->VAR13[0], VAR3);
        if (!VAR8)
        {
            goto VAR14;
        }
        switch (VAR8->VAR15)
        {
        case VAR16:
            VAR4->VAR17 = FUN6(VAR8->VAR18.VAR19.VAR17);
            VAR4->VAR20 = FUN6(VAR8->VAR18.VAR19.VAR21);
            if (VAR8->VAR18.VAR19.VAR22)
            {
                VAR4->VAR23 = VAR24;
            }
            else
            {
                VAR4->VAR23 = VAR25;
            }
            break;
        case VAR26:
            VAR4->VAR17 = FUN6("");
            VAR4->VAR20 = FUN6(VAR8->VAR18.VAR27.VAR28);
            VAR4->VAR23 = VAR29;
            break;
        case VAR30:
        case VAR31:
            FUN7(VAR3, "", VAR32[VAR8->VAR15]);
            goto VAR14;
        default:
            FUN8();
        }
        VAR4->VAR33 = true;
        VAR4->VAR34 = true;
        VAR4->VAR35 = true;
        VAR4->VAR36 = true;
        VAR4->VAR37 = FUN6(FUN9(VAR6));
    }
    FUN10(VAR8);
    return VAR4;
VAR14:
    FUN10(VAR8);
    FUN11(VAR4);
    return NULL;
}