long FUN1(void)
{
    register char *VAR1 = FUN2(1024);
    register char *VAR2;
    register long VAR3 = 0;
    register long VAR4 = 0;
    long VAR5 = 0;
    if (!VAR1)
    {
        return 0L;
    }
    VAR2 = (VAR1 + 512);
    memset(VAR1, 0xFF, 1024);
    asm volatile(""
                 :
                 : ""(VAR2), ""(VAR3));
    for (VAR4 = 0; VAR4 < 1024; VAR4++)
    {
        if (VAR1[VAR4] == (char)0)
            VAR5++;
    }
    FUN3(VAR1);
    return VAR5;
}