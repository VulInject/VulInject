void FUN1(VAR1 *VAR2)
{
    FUN2(VAR3, 1);
    register int VAR4 = ((unsigned long)VAR2 & 0x00000010);
    register int VAR5 = 0;
    FUN3(VAR3, 1);
    if (VAR4)
    {
        ((unsigned long *)VAR2)[0] = 0L;
        ((unsigned long *)VAR2)[1] = 0L;
        ((unsigned long *)VAR2)[2] = 0L;
        ((unsigned long *)VAR2)[3] = 0L;
        VAR5 += 16;
    }
    for (; VAR5 < sizeof(VAR1) * 6 * 64; VAR5 += 32)
    {
        asm volatile(""
                     :
                     : ""(VAR2), ""(VAR5)
                     : "");
    }
    if (VAR4)
    {
        ((unsigned long *)VAR2)[188] = 0L;
        ((unsigned long *)VAR2)[189] = 0L;
        ((unsigned long *)VAR2)[190] = 0L;
        ((unsigned long *)VAR2)[191] = 0L;
        VAR5 += 16;
    }
    memset(VAR2, 0, sizeof(VAR1) * 6 * 64);
    FUN4(VAR3, 1);
}