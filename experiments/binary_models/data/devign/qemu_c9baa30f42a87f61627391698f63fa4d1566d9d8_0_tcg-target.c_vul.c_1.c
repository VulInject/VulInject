static void FUN1(void)
{
    struct sigaction VAR1, VAR2;
    register int VAR3 FUN2("");
    register void *VAR4 FUN2("");
    int VAR5;
    memset(&VAR2, 0, sizeof(VAR2));
    VAR2.VAR6 = VAR7;
    FUN3(VAR8, &VAR2, &VAR1);
    VAR4 = &VAR9;
    asm volatile(""
                 : ""(VAR3)
                 : ""(0), ""(VAR4)
                 : "", "");
    if (VAR10)
    {
        VAR10 = 0;
        asm volatile(""
                     : ""(VAR3)
                     :
                     : "");
        if (!VAR10)
        {
            VAR9 |= VAR11;
        }
        VAR10 = 0;
        VAR4 = &VAR9;
        asm volatile(""
                     : ""(VAR3)
                     : ""(VAR4)
                     : "");
        if (!VAR10)
        {
            VAR9 |= VAR12;
        }
        VAR10 = 0;
        asm volatile(""
                     :
                     :
                     : "");
        if (!VAR10)
        {
            VAR9 |= VAR13;
        }
        VAR10 = 0;
        asm volatile("");
        if (!VAR10)
        {
            VAR9 |= VAR14;
        }
    }
    FUN3(VAR8, &VAR1, NULL);
    VAR5 = 0;
    if ((VAR9 & VAR11) == 0)
    {
        fprintf(VAR15, "");
        fprintf(VAR15, "");
        VAR5 = 1;
    }
    if ((VAR9 & VAR12) == 0)
    {
        fprintf(VAR15, "");
        VAR5 = 1;
    }
    if (sizeof(void *) != 8)
    {
        fprintf(VAR15, "");
        VAR5 = 1;
    }
    if (VAR5)
    {
        FUN4(-1);
    }
}