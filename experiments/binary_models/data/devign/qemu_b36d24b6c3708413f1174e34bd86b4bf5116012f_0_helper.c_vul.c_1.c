static void FUN1(uint32_t VAR1, uint32_t VAR2, VAR3 *VAR4, VAR3 *VAR5, VAR3 *VAR6, VAR3 *VAR7)
{
    uint32_t VAR8[4];
    asm volatile(""
                 : ""(VAR8[0]), ""(VAR8[1]), ""(VAR8[2]), ""(VAR8[3])
                 : ""(VAR1), ""(VAR2)
                 : "");
    asm volatile(""
                 ""
                 ""
                 ""
                 ""
                 ""
                 ""
                 :
                 : ""(VAR1), ""(VAR2), ""(VAR8)
                 : "", "");
    if (VAR4)
        *VAR4 = VAR8[0];
    if (VAR5)
        *VAR5 = VAR8[1];
    if (VAR6)
        *VAR6 = VAR8[2];
    if (VAR7)
        *VAR7 = VAR8[3];
}