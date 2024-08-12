int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2, VAR4->VAR6.VAR7, VAR4->VAR8);
    VAR9 *VAR10;
    VAR11 *VAR12;
    if (!VAR6)
    {
        return 1;
    }
    if (!FUN3(VAR2->VAR13.VAR14))
    {
        return 0;
    }
    if (VAR2->VAR15 > 1 && VAR6->VAR16 != VAR17)
    {
        fprintf(VAR18, "", VAR19);
        FUN4(VAR2, VAR6, VAR4->VAR8);
        fprintf(VAR18, "");
    }
    switch (VAR6->VAR16)
    {
    case VAR20:
        VAR10 = FUN2(VAR2, VAR6->VAR21.VAR22.VAR23, VAR4->VAR8);
        if (!VAR10)
        {
            return 1;
        }
        VAR12 = FUN5(VAR2, VAR10, VAR4->VAR8);
        if (VAR12 == NULL)
        {
            VAR12 = FUN6();
        }
        FUN7(&VAR2->VAR24.VAR25);
        if (VAR2->VAR24.VAR10)
        {
            FUN8(VAR2->VAR24.VAR10);
        }
        VAR2->VAR24.VAR10 = VAR12;
        VAR2->VAR24.VAR26 = VAR6->VAR21.VAR22.VAR27.VAR28;
        VAR2->VAR24.VAR29 = VAR6->VAR21.VAR22.VAR27.VAR30;
        FUN9(&VAR2->VAR24.VAR25);
        FUN10(VAR2->VAR24.VAR31);
        break;
    case VAR17:
        FUN7(&VAR2->VAR24.VAR25);
        VAR2->VAR24.VAR26 = VAR6->VAR21.VAR27.VAR28;
        VAR2->VAR24.VAR29 = VAR6->VAR21.VAR27.VAR30;
        FUN9(&VAR2->VAR24.VAR25);
        FUN10(VAR2->VAR24.VAR31);
        break;
    }
    return 0;
}