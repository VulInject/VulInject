static void FUN1(GuestSuspendMode VAR1, VAR2 **VAR3)
{
    SYSTEM_POWER_CAPABILITIES VAR4;
    VAR2 *VAR5 = NULL;
    if (FUN2(VAR3))
    {
        return;
    }
    FUN3(&VAR4, sizeof(VAR4));
    if (!FUN4(&VAR4))
    {
        FUN5(&VAR5, VAR6, "");
        goto VAR7;
    }
    switch (VAR1)
    {
    case VAR8:
        if (!VAR4.VAR9)
        {
            FUN5(&VAR5, VAR6, "");
        }
        break;
    case VAR10:
        if (!VAR4.VAR11)
        {
            FUN5(&VAR5, VAR6, "");
        }
        break;
    default:
        FUN5(&VAR5, VAR12, "", "");
    }
VAR7:
    if (VAR5)
    {
        FUN6(VAR3, VAR5);
    }
}