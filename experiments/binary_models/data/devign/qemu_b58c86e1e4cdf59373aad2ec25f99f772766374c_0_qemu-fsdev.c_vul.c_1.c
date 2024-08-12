int FUN1(VAR1 *VAR2)
{
    int VAR3;
    struct VAR4 *VAR5;
    const char *VAR6 = FUN2(VAR2);
    const char *VAR7 = FUN3(VAR2, "");
    const char *VAR8 = FUN3(VAR2, "");
    bool VAR9 = FUN4(VAR2, "", 0);
    if (!VAR6)
    {
        fprintf(VAR10, "");
        return -1;
    }
    if (VAR7)
    {
        for (VAR3 = 0; VAR3 < FUN5(VAR11); VAR3++)
        {
            if (strcmp(VAR11[VAR3].VAR12, VAR7) == 0)
            {
                break;
            }
        }
        if (VAR3 == FUN5(VAR11))
        {
            fprintf(VAR10, "", VAR7);
            return -1;
        }
    }
    else
    {
        fprintf(VAR10, "");
        return -1;
    }
    VAR5 = FUN6(sizeof(*VAR5));
    VAR5->VAR13.VAR6 = FUN7(VAR6);
    VAR5->VAR13.VAR14 = VAR11[VAR3].VAR14;
    if (VAR8)
    {
        if (!strcmp(VAR8, ""))
        {
            VAR5->VAR13.VAR15 |= VAR16;
        }
    }
    if (VAR9)
    {
        VAR5->VAR13.VAR15 |= VAR17;
    }
    else
    {
        VAR5->VAR13.VAR15 &= ~VAR17;
    }
    if (VAR5->VAR13.VAR14->VAR18)
    {
        if (VAR5->VAR13.VAR14->FUN8(VAR2, &VAR5->VAR13))
        {
            return -1;
        }
    }
    FUN9(&VAR19, VAR5, VAR20);
    return 0;