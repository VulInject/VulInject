static void FUN1(VAR1 *VAR2, run_on_cpu_data VAR3)
{
    FUN2();
    if (VAR4.VAR5.VAR3 != VAR3.VAR6)
    {
        goto VAR7;
    }
    FUN3("", (unsigned long)(VAR4.VAR8 - VAR4.VAR9), VAR4.VAR5.VAR10, VAR4.VAR5.VAR10 > 0 ? ((unsigned long)(VAR4.VAR8 - VAR4.VAR9)) / VAR4.VAR5.VAR10 : 0);
    if ((unsigned long)(VAR4.VAR8 - VAR4.VAR9) > VAR4.VAR11)
    {
        FUN4(VAR2, "");
    }
    FUN5(VAR2)
    {
        int VAR12;
        for (VAR12 = 0; VAR12 < VAR13; ++VAR12)
        {
            FUN6(&VAR2->VAR14[VAR12], NULL);
        }
    }
    VAR4.VAR5.VAR10 = 0;
    FUN7(&VAR4.VAR5.VAR15, VAR16);
    FUN8();
    VAR4.VAR8 = VAR4.VAR9;
    FUN9(&VAR4.VAR5.VAR3, VAR4.VAR5.VAR3 + 1);
VAR7:
    FUN10();
}