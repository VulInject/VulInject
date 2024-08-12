static void FUN1(VAR1 *VAR2, VAR3 **VAR4, VAR5 *VAR6)
{
    const char *VAR7 = FUN2(VAR2->VAR8);
    int VAR9 = VAR7 ? (!FUN3(VAR7, "") || !FUN3(VAR7, "")) : 0;
    if (VAR6->VAR10)
    {
        FUN4(VAR4, "", VAR6->VAR10, 0);
    }
    else if (VAR9)
    {
        FUN5(VAR6, VAR11, "");
        FUN4(VAR4, "", "", 0);
    }
}