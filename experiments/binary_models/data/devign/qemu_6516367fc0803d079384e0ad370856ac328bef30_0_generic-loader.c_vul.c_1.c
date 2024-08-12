static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    hwaddr VAR7;
    int VAR8;
    int VAR9 = 0;
    VAR6->VAR10 = false;
    if (VAR6->VAR11 || VAR6->VAR12 || VAR6->VAR13)
    {
        if (VAR6->VAR14)
        {
            FUN3(VAR4, ""
                             "");
            return;
        }
        else if (VAR6->VAR15)
        {
            FUN3(VAR4, ""
                             "");
            return;
        }
        else if (!VAR6->VAR12)
        {
            FUN3(VAR4, "");
            return;
        }
        else if (VAR6->VAR12 > 8)
        {
            FUN3(VAR4, "");
            return;
        }
    }
    else if (VAR6->VAR14 || VAR6->VAR15)
    {
        if (VAR6->VAR11 || VAR6->VAR12 || VAR6->VAR13)
        {
            FUN3(VAR4, ""
                             "");
            return;
        }
        if (VAR6->VAR16 != VAR17)
        {
            VAR6->VAR10 = true;
        }
    }
    else if (VAR6->VAR18)
    {
        if (VAR6->VAR11 || VAR6->VAR12 || VAR6->VAR13)
        {
            FUN3(VAR4, ""
                             "");
            return;
        }
        else if (!VAR6->VAR16)
        {
            FUN3(VAR4, ""
                             "");
            return;
        }
        VAR6->VAR10 = true;
    }
    else
    {
        FUN3(VAR4, "");
        return;
    }
    FUN4(VAR19, VAR2);
    if (VAR6->VAR16 != VAR17)
    {
        VAR6->VAR20 = FUN5(VAR6->VAR16);
        if (!VAR6->VAR20)
        {
            FUN3(VAR4, "", VAR6->VAR16);
            return;
        }
    }
    else
    {
        VAR6->VAR20 = VAR21;
    }
    VAR8 = 1;
    VAR8 = 0;
    if (VAR6->VAR14)
    {
        if (!VAR6->VAR15)
        {
            VAR9 = FUN6(VAR6->VAR14, NULL, NULL, &VAR7, NULL, NULL, VAR8, 0, 0, 0, VAR6->VAR20->VAR22);
            if (VAR9 < 0)
            {
                VAR9 = FUN7(VAR6->VAR14, &VAR7, NULL, NULL, NULL, NULL, VAR6->VAR20->VAR22);
            }
        }
        if (VAR9 < 0 || VAR6->VAR15)
        {
            VAR9 = FUN8(VAR6->VAR14, VAR6->VAR18, VAR23, VAR6->VAR20->VAR22);
        }
        else
        {
            VAR6->VAR18 = VAR7;
        }
        if (VAR9 < 0)
        {
            FUN3(VAR4, "", VAR6->VAR14);
            return;
        }
    }
    if (VAR6->VAR13)
    {
        VAR6->VAR11 = FUN9(VAR6->VAR11);
    }
    else
    {
        VAR6->VAR11 = FUN10(VAR6->VAR11);
    }
}