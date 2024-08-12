static void FUN1(void)
{
    struct VAR1 *VAR2;
    int VAR3, VAR4;
    int VAR5 = 0;
    static int VAR6 = 0;
    if (VAR6)
    {
        VAR5 = 1;
        goto VAR7;
    }
    else
    {
        VAR6 = 1;
    }
    VAR2 = VAR8;
    for (VAR3 = 0; VAR3 < 2; VAR3++, VAR2++)
    {
        for (VAR4 = 0; VAR4 < 4; VAR4++)
        {
            int VAR9;
            VAR9 = 1 << VAR4;
            if ((0 == (VAR2->VAR9 & VAR9)) && (0 != (VAR2->VAR10 & (VAR9 << 4))))
            {
                FUN2(VAR3, VAR4);
                VAR5 = 1;
            }
        }
    }
    VAR6 = 0;
VAR7:
    if (VAR5)
    {
        FUN3(VAR11);
        VAR12 = true;
    }
}