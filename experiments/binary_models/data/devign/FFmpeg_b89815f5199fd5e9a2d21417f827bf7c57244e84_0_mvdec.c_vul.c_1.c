static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const char *VAR5, int VAR6)
{
    VAR7 *VAR8 = VAR2->VAR8;
    if (!strcmp(VAR5, ""))
    {
        VAR4->VAR9 = FUN2(VAR8, VAR6);
    }
    else if (!strcmp(VAR5, ""))
    {
        VAR4->VAR10->VAR11 = FUN2(VAR8, VAR6);
    }
    else if (!strcmp(VAR5, ""))
    {
        VAR4->VAR10->VAR12 = FUN2(VAR8, VAR6);
    }
    else if (!strcmp(VAR5, ""))
    {
        FUN3(VAR2, VAR5, VAR6);
    }
    else if (!strcmp(VAR5, ""))
    {
        VAR4->VAR10->VAR13 = FUN2(VAR8, VAR6);
        VAR4->VAR10->VAR14 = (VAR4->VAR10->VAR13 == 1) ? VAR15 : VAR16;
    }
    else if (!strcmp(VAR5, ""))
    {
        VAR4->VAR10->VAR17 = FUN2(VAR8, VAR6);
        FUN4(VAR4, 33, 1, VAR4->VAR10->VAR17);
    }
    else if (!strcmp(VAR5, ""))
    {
        VAR4->VAR10->VAR18 = FUN2(VAR8, VAR6) * 8;
    }
    else
        return -1;
    return 0;
}