static int FUN1(VAR1 *VAR2, VAR3 **VAR4, struct in_addr VAR5)
{
    VAR6 *VAR7;
    AVStream VAR8[VAR9];
    int VAR10;
    VAR7 = FUN2();
    if (VAR7 == NULL)
    {
        return -1;
    }
    FUN3(&VAR7->VAR11, "", VAR2->VAR12[0] ? VAR2->VAR12 : "", 0);
    VAR7->VAR13 = VAR2->VAR13;
    if (VAR2->VAR14)
    { snprintf ( VAR7 -> VAR15 , 1024 , ""VAR16:
    }
    for (VAR10 = 0; VAR10 < VAR2->VAR13; VAR10++)
    {
        VAR7->VAR17[VAR10] = &VAR8[VAR10];
        VAR7->VAR17[VAR10]->VAR18 = VAR2->VAR17[VAR10]->VAR18;
    }
    *VAR4 = FUN4(2048);
    FUN5(&VAR7, 1, *VAR4, 2048);
    FUN6(VAR7);
    return strlen(*VAR4);