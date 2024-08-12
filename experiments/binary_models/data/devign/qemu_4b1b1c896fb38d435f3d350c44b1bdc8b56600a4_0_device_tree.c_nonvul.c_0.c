VAR1 FUN1(void *VAR2)
{
    static int VAR3 = 0x0;
    if (!VAR3)
    {
        VAR4 *VAR5;
        VAR5 = FUN2(FUN3(""), 0);
        if (VAR5)
        {
            const char *VAR6;
            VAR6 = FUN4(VAR5, "");
            if (VAR6)
            {
                VAR3 = FUN5(VAR6, NULL, 0);
            }
        }
    }
    if (!VAR3)
    {
        VAR3 = 0x8000;
    }
    return VAR3++;
}