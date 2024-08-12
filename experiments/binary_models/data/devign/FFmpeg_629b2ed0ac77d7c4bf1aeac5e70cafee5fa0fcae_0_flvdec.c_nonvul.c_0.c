static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int64_t VAR5, int64_t VAR6)
{
    VAR7 *VAR8 = VAR2->VAR8;
    VAR9 *VAR10 = NULL;
    char VAR11[20];
    int VAR12 = VAR13;
    int VAR14, VAR15 = -1;
    switch (FUN2(VAR8))
    {
    case VAR16:
        FUN3(VAR8, 4, VAR17);
    case VAR18:
        break;
    default:
        goto VAR19;
    }
    while ((VAR12 = FUN4(VAR8, VAR11, sizeof(VAR11))) > 0)
    {
        AMFDataType VAR20 = FUN2(VAR8);
        if (VAR20 == VAR21 && !strcmp(VAR11, ""))
        {
            VAR15 = FUN5(VAR8);
            VAR12 = FUN6(VAR8, VAR4, VAR15);
            if (VAR12 < 0)
                goto VAR19;
            else
                break;
        }
        else
        {
            if ((VAR12 = FUN7(VAR8, VAR20)) < 0)
                goto VAR19;
        }
    }
    if (VAR15 < 0)
    {
        VAR12 = VAR13;
        goto VAR19;
    }
    for (VAR14 = 0; VAR14 < VAR2->VAR22; VAR14++)
    {
        VAR10 = VAR2->VAR23[VAR14];
        if (VAR10->VAR24->VAR25 == VAR26)
            break;
    }
    if (VAR14 == VAR2->VAR22)
    {
        VAR10 = FUN8(VAR2, VAR26);
        if (!VAR10)
            return FUN9(VAR27);
        VAR10->VAR24->VAR28 = VAR29;
    }
    VAR4->VAR5 = VAR5;
    VAR4->VAR30 = VAR5;
    VAR4->VAR31 = VAR12;
    VAR4->VAR32 = VAR10->VAR33;
    VAR4->VAR34 |= VAR35;
VAR19:
    FUN3(VAR2->VAR8, VAR6 + 4, VAR36);
    return VAR12;
}