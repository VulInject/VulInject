static void FUN1(VAR1 *VAR2, const char *VAR3, bool *VAR4, VAR5 **VAR6)
{
    VAR7 *VAR8 = FUN2(VAR2);
    if (VAR8->VAR9)
    {
        if (!FUN3(VAR8->VAR9, "") || !FUN3(VAR8->VAR9, "") || !FUN3(VAR8->VAR9, ""))
        {
            *VAR4 = true;
            return;
        }
        if (!FUN3(VAR8->VAR9, "") || !FUN3(VAR8->VAR9, "") || !FUN3(VAR8->VAR9, ""))
        {
            *VAR4 = false;
            return;
        }
    }
    FUN4(VAR6, VAR10, VAR3 ? VAR3 : "", "");
}