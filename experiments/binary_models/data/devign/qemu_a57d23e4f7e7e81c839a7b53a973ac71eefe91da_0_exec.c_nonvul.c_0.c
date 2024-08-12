void FUN1(ram_addr_t VAR1, ram_addr_t VAR2, int VAR3)
{
    VAR4 *VAR5;
    unsigned long VAR6, VAR7;
    int VAR8;
    VAR1 &= VAR9;
    VAR2 = FUN2(VAR2);
    VAR6 = VAR2 - VAR1;
    if (VAR6 == 0)
        return;
    FUN3(VAR1, VAR6, VAR3);
    VAR7 = (unsigned long)FUN4(VAR1);
    if ((unsigned long)FUN4(VAR2 - 1) - VAR7 != (VAR2 - 1) - VAR1)
    {
        FUN5();
    }
    for (VAR5 = VAR10; VAR5 != NULL; VAR5 = VAR5->VAR11)
    {
        int VAR12;
        for (VAR12 = 0; VAR12 < VAR13; VAR12++)
        {
            for (VAR8 = 0; VAR8 < VAR14; VAR8++)
                FUN6(&VAR5->VAR15[VAR12][VAR8], VAR7, VAR6);
        }
    }
}