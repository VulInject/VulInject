int FUN1(VAR1 *VAR2, VAR1 *VAR3, VAR1 *VAR4, const char *VAR5)
{
    VAR1 *VAR6;
    VAR1 *VAR7 = NULL;
    VAR1 *VAR8 = NULL;
    VAR9 *VAR10, *VAR11;
    int VAR12 = -VAR13;
    FUN2(VAR14, VAR9)
    VAR14;
    FUN3(&VAR14);
    if (!VAR3->VAR15 || !VAR4->VAR15)
    {
        goto VAR16;
    }
    VAR8 = FUN4(VAR2, VAR3);
    if (VAR8 == NULL)
    {
        goto VAR16;
    }
    if (VAR8->VAR17 == VAR4)
    {
        VAR12 = 0;
        goto VAR16;
    }
    VAR6 = VAR3;
    while (VAR6)
    {
        VAR10 = FUN5(sizeof(VAR9));
        VAR10->VAR18 = VAR6;
        FUN6(&VAR14, VAR10, VAR19);
        if (VAR6->VAR17 == VAR4)
        {
            VAR7 = VAR6->VAR17;
            break;
        }
        VAR6 = VAR6->VAR17;
    }
    if (VAR7 == NULL)
    {
        goto VAR16;
    }
    VAR5 = VAR5 ? VAR5 : VAR7->VAR20;
    VAR12 = FUN7(VAR8, VAR5, VAR7->VAR15 ? VAR7->VAR15->VAR21 : "");
    if (VAR12)
    {
        goto VAR16;
    }
    FUN8(VAR8, VAR7);
    FUN9(VAR10, &VAR14, VAR19, VAR11)
    {
        FUN8(VAR10->VAR18, NULL);
        FUN10(VAR10->VAR18);
    }
    VAR12 = 0;
VAR16:
    FUN9(VAR10, &VAR14, VAR19, VAR11) { FUN11(VAR10); }
    return VAR12;
}