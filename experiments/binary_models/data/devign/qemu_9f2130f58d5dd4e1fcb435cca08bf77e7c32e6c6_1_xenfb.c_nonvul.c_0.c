static void FUN1(void *VAR1)
{
    struct VAR2 *VAR3 = VAR1;
    VAR4 *VAR5;
    int VAR6;
    if (VAR3->VAR7.VAR8.VAR9 != VAR10)
        return;
    if (!VAR3->VAR11)
    {
        VAR3->VAR12 = 1;
    }
    if (VAR3->VAR13)
    {
        pixman_format_code_t VAR14;
        VAR3->VAR13 = 0;
        switch (VAR3->VAR15)
        {
        case 16:
        case 32:
            VAR14 = FUN2(VAR3->VAR15, true);
            VAR5 = FUN3(VAR3->VAR16, VAR3->VAR17, VAR14, VAR3->VAR18, VAR3->VAR19 + VAR3->VAR20);
            break;
        default:
            VAR5 = FUN4(VAR3->VAR16, VAR3->VAR17);
            break;
        }
        FUN5(VAR3->VAR21, VAR5);
        FUN6(&VAR3->VAR7.VAR8, 1, "", VAR3->VAR16, VAR3->VAR17, VAR3->VAR15, FUN7(VAR5) ? "" : "");
        VAR3->VAR12 = 1;
    }
    if (VAR3->VAR12)
    {
        FUN6(&VAR3->VAR7.VAR8, 3, "");
        FUN8(VAR3, 0, 0, VAR3->VAR16, VAR3->VAR17);
    }
    else if (VAR3->VAR22)
    {
        FUN6(&VAR3->VAR7.VAR8, 3, "", VAR3->VAR22);
        for (VAR6 = 0; VAR6 < VAR3->VAR22; VAR6++)
            FUN8(VAR3, VAR3->VAR23[VAR6].VAR24, VAR3->VAR23[VAR6].VAR25, VAR3->VAR23[VAR6].VAR26, VAR3->VAR23[VAR6].VAR27);
    }
    else
    {
        FUN6(&VAR3->VAR7.VAR8, 3, "");
    }
    VAR3->VAR22 = 0;
    VAR3->VAR12 = 0;
}