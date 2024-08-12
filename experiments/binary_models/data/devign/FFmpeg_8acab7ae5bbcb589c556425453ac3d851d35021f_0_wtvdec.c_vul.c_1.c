static void FUN1(VAR1 *VAR2, VAR3 *VAR4, const char *VAR5, int VAR6, int VAR7)
{
    int VAR8 = FUN2(2 * VAR7, VAR9) + 1;
    char *VAR10 = FUN3(VAR8);
    if (!VAR10)
        return;
    if (VAR6 == 0 && VAR7 == 4)
    {
        snprintf(VAR10, VAR8, "" VAR11, FUN4(VAR4));
    }
    else if (VAR6 == 1)
    {
        FUN5(VAR4, VAR7, VAR10, VAR8);
        if (!strlen(VAR10))
        {
            FUN6(VAR10);
            return;
        }
    }
    else if (VAR6 == 3 && VAR7 == 4)
    {
        strcpy(VAR10, FUN4(VAR4) ? "" : "");
    }
    else if (VAR6 == 4 && VAR7 == 8)
    {
        int64_t VAR12 = FUN7(VAR4);
        if (!strcmp(VAR5, "") || !strcmp(VAR5, ""))
            FUN8(VAR10, VAR8, VAR12);
        else if (!strcmp(VAR5, "") || !strcmp(VAR5, ""))
            FUN9(VAR10, VAR8, VAR12);
        else if (!strcmp(VAR5, ""))
            FUN10(VAR10, VAR8, VAR12);
        else if (!strcmp(VAR5, ""))
            snprintf(VAR10, VAR8, "", FUN11(VAR12));
        else
            snprintf(VAR10, VAR8, "" VAR13, VAR12);
    }
    else if (VAR6 == 5 && VAR7 == 2)
    {
        snprintf(VAR10, VAR8, "" VAR14, FUN12(VAR4));
    }
    else if (VAR6 == 6 && VAR7 == 16)
    {
        ff_asf_guid VAR15;
        FUN13(VAR4, VAR15, 16);
        snprintf(VAR10, VAR8, VAR16, FUN14(VAR15));
    }
    else if (VAR6 == 2 && !strcmp(VAR5, ""))
    {
        FUN15(VAR2, VAR4, VAR7);
        FUN16(&VAR10);
        return;
    }
    else
    {
        FUN16(&VAR10);
        FUN17(VAR2, VAR17, "", VAR5, VAR6, VAR7);
        FUN18(VAR4, VAR7);
        return;
    }
    FUN19(&VAR2->VAR18, VAR5, VAR10, 0);
    FUN16(&VAR10);
}