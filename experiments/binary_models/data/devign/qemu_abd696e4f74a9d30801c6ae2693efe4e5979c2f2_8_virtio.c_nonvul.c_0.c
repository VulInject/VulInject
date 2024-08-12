static long FUN1(unsigned long VAR1, unsigned long VAR2, unsigned long VAR3)
{
    register ulong VAR4 asm("") = VAR1;
    register ulong VAR5 asm("") = VAR2;
    register ulong VAR6 asm("") = VAR3;
    register long VAR7 asm("");
    asm volatile(""
                 : ""(VAR7)
                 : ""(VAR4), ""(VAR5), ""(VAR6)
                 : "", "");
    return VAR7;
}