int FUN1(VAR1 *VAR2, VAR3 *VAR4, const char *VAR5, VAR6 *VAR7)
{
    if (FUN2(VAR2, ""))
    {
        int VAR8;
        if (FUN2(VAR2, "") || FUN2(VAR2, "") || FUN2(VAR2, "") || FUN2(VAR2, ""))
        {
            FUN3("");
            return -1;
        }
        VAR8 = FUN4(VAR4, FUN2(VAR2, ""));
        if (VAR8 == -1)
        {
            return -1;
        }
        if (!FUN5(VAR7, "", VAR5, VAR8, 1))
        {
            close(VAR8);
            return -1;
        }
    }
    else if (FUN2(VAR2, ""))
    {
        const char *VAR9;
        if (FUN2(VAR2, "") || FUN2(VAR2, "") || FUN2(VAR2, "") || FUN2(VAR2, ""))
        {
            FUN3("");
            return -1;
        }
        VAR9 = FUN2(VAR2, "");
        if (FUN6(VAR7, "", VAR5, VAR9) == -1)
        {
            return -1;
        }
    }
    else if (FUN2(VAR2, ""))
    {
        const char *connect;
        if (FUN2(VAR2, "") || FUN2(VAR2, "") || FUN2(VAR2, "") || FUN2(VAR2, ""))
        {
            FUN3("");
            return -1;
        }
        connect = FUN2(VAR2, "");
        if (FUN7(VAR7, "", VAR5, connect) == -1)
        {
            return -1;
        }
    }
    else if (FUN2(VAR2, ""))
    {
        const char *VAR10, *VAR11;
        if (FUN2(VAR2, "") || FUN2(VAR2, "") || FUN2(VAR2, ""))
        {
            FUN3("");
            return -1;
        }
        VAR10 = FUN2(VAR2, "");
        VAR11 = FUN2(VAR2, "");
        if (FUN8(VAR7, "", VAR5, VAR10, VAR11) == -1)
        {
            return -1;
        }
    }
    else
    {
        FUN3("");
        return -1;
    }
    return 0;
}