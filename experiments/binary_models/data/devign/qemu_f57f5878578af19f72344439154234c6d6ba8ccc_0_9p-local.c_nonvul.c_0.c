static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const char *VAR5, VAR3 *VAR6)
{
    if (VAR2->VAR7 & VAR8 && FUN2(VAR2, VAR5))
    {
        VAR9 = VAR10;
        return -1;
    }
    if (VAR4)
    {
        if (!strcmp(VAR5, ""))
        {
            FUN3(VAR6, VAR4);
        }
        else if (!strcmp(VAR5, ""))
        {
            if (!strcmp(VAR4->VAR11, ""))
            {
                FUN4(VAR6, "");
            }
            else
            {
                char *VAR12 = FUN5(VAR4->VAR11);
                FUN4(VAR6, "", VAR12);
                FUN6(VAR12);
            }
        }
        else
        {
            assert(!strchr(VAR5, ''));
            FUN4(VAR6, "", VAR4->VAR11, VAR5);
        }
    }
    else if (!strcmp(VAR5, "") || !strcmp(VAR5, "") || !strcmp(VAR5, ""))
    {
        FUN4(VAR6, "");
    }
    else
    {
        assert(!strchr(VAR5, ''));
        FUN4(VAR6, "", VAR5);
    }
    return 0;
}