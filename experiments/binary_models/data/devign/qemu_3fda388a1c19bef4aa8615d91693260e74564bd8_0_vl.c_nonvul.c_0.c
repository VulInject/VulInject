VAR1 *FUN1(const char *VAR2)
{
    const char *VAR3;
    if (!strcmp(VAR2, ""))
    {
        return FUN2(&VAR4);
    }
    else if (!strcmp(VAR2, ""))
    {
        return FUN3();
    }
    else if (FUN4(VAR2, "", &VAR3))
    {
        return FUN5(VAR3, 0, 0);
    }
    else if (FUN4(VAR2, "", &VAR3))
    {
        return FUN5(VAR3, 1, 0);
    }
    else if (FUN4(VAR2, "", &VAR3))
    {
        return FUN6(VAR3);
    }
    else if (FUN4(VAR2, "", &VAR3))
    {
        VAR1 *VAR5 = FUN1(VAR3);
        if (VAR5)
        {
            VAR5 = FUN7(VAR5);
            FUN8(VAR5, !VAR6);
            return VAR5;
        }
        FUN9("", VAR3);
        return 0;
    }
    else if (FUN4(VAR2, "", &VAR3))
    {
        return FUN5(VAR3, 0, 1);
    }
    else if (FUN4(VAR2, "", &VAR3))
    {
        return FUN10(VAR3);
    }
    else if (FUN4(VAR2, "", &VAR3))
    {
        return FUN11(VAR3);
    }
    else if (!strcmp(VAR2, ""))
    {
        return FUN12();
    }
    else if (!strcmp(VAR2, ""))
    {
        return FUN13();
    }
    else if (FUN4(VAR2, "", NULL))
    {
        return FUN14(VAR2);
    }
    else if (FUN4(VAR2, "", NULL))
    {
        return FUN15(VAR2);
    }
    else if (FUN4(VAR2, "", NULL))
    {
        return FUN16(VAR2);
    }
    else if (FUN4(VAR2, "", &VAR3))
    {
        return FUN17(VAR3);
    }
    else if (FUN4(VAR2, "", NULL))
    {
        return FUN18(VAR2);
    }
    else if (FUN4(VAR2, "", &VAR3))
    {
        return FUN19(VAR3);
    }
    {
        return NULL;
    }
}