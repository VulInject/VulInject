static void FUN1(void)
{
    struct schib VAR1;
    int VAR2;
    int VAR3;
    bool VAR4 = false;
    VAR5.VAR6 = 1;
    for (VAR2 = 0; VAR2 < 0x10000; VAR2++)
    {
        VAR5.VAR7 = VAR2;
        VAR3 = FUN2(VAR5, &VAR1);
        if (VAR3 == 3)
        {
            break;
        }
        if (VAR1.VAR8.VAR9)
        {
            if (FUN3(VAR5))
            {
                VAR4 = true;
                break;
            }
        }
    }
    if (!VAR4)
    {
        FUN4("");
    }
    FUN5(VAR5);
}