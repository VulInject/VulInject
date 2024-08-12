void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5 = VAR2->VAR6;
    long VAR7, VAR8;
    long VAR9, VAR10;
    VAR3 *VAR11, *VAR12;
    asm volatile(""
                 ""
                 :
                 : ""(*VAR13), ""(*(VAR2->VAR14 ? VAR15 : VAR16)));
    VAR7 = 8 << VAR5;
    asm volatile(""
                 ""
                 ""
                 ""
                 ""
                 ""
                 ""
                 ""
                 ""
                 ""
                 ""
                 ""
                 ""
                 ""
                 ""
                 ""
                 ""
                 ""
                 ""
                 ""
                 : ""(VAR7)
                 : ""(VAR4));
    VAR9 = 1 << (VAR5 - 3);
    VAR10 = 1 << 2;
    VAR12 = VAR2->VAR17;
    do
    {
        VAR11 = VAR4;
        VAR8 = VAR9;
        do
        {
            VAR7 = VAR10 * 8;
            asm volatile(""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         : ""(VAR7)
                         : ""(VAR11), ""(VAR11 + VAR10), ""(VAR12));
            VAR11 += VAR10 * 2;
        } while (--VAR8);
        VAR12 += VAR10 * 2;
        VAR9 >>= 1;
        VAR10 <<= 1;
    } while (VAR9 != 0);
}