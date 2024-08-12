void FUN1(VAR1 *VAR2)
{
    FUN2(VAR3, 1);
    register int VAR4 = ((unsigned long)VAR2 & 0x0000007f);
    register int VAR5 = 0;
    FUN3(VAR3, 1);
    if (VAR4)
    {
        memset(VAR2, 0, sizeof(VAR1) * 6 * 64);
    }
    else
        for (; VAR5 < sizeof(VAR1) * 6 * 64; VAR5 += 128)
        {
            asm volatile(""
                         :
                         : ""(VAR2), ""(VAR5)
                         : "");
        }
    memset(VAR2, 0, sizeof(VAR1) * 6 * 64);
    FUN4(VAR3, 1);
}