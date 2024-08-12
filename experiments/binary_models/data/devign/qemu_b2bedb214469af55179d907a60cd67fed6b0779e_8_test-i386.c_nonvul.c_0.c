void FUN1(double VAR1, double VAR2)
{
    long VAR3, VAR4;
    FUN2();
    asm(""
        ""
        : ""(VAR4)
        : ""(VAR1), ""(VAR2));
    FUN3("", VAR1, VAR2, VAR4 & (0x4500 | VAR5));
    FUN2();
    asm(""
        ""
        : ""(VAR4)
        : ""(VAR1), ""(VAR2));
    FUN3("", VAR1, VAR2, VAR4 & (0x4500 | VAR5));
    if (VAR6)
    {
        FUN2();
        asm(""
            ""
            ""
            ""
            : ""(VAR3), ""(VAR4)
            : ""(VAR1), ""(VAR2));
        FUN3("", VAR1, VAR2, VAR4 & VAR5, VAR3 & (VAR7 | VAR8 | VAR9));
        FUN2();
        asm(""
            ""
            ""
            ""
            : ""(VAR3), ""(VAR4)
            : ""(VAR1), ""(VAR2));
        FUN3("", VAR1, VAR2, VAR4 & VAR5, VAR3 & (VAR7 | VAR8 | VAR9));
    }
    FUN2();
    asm volatile(""
                 ""
                 : ""(VAR4)
                 : ""(VAR1));
    FUN3("", VAR1, VAR4 & 0x4700);
    FUN2();
}