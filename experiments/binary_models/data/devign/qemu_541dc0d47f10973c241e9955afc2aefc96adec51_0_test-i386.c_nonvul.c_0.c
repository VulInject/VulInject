void FUN1(void)
{
    char VAR1[256];
    long VAR2, VAR3;
    for (VAR3 = 0; VAR3 < 256; VAR3++)
        VAR1[VAR3] = 256 - VAR3;
    VAR2 = 0x12345678;
    asm(""
        : ""(VAR2)
        : ""(VAR1), ""(VAR2));
    FUN2("" VAR4 "", VAR2);
    {
        static struct VAR5
        {
            uint64_t VAR6;
            uint16_t VAR7;
        } VAR8;
        long VAR9;
        asm volatile(""
                     : ""(VAR9));
        asm volatile(""
                     ""
                     : ""(VAR2)
                     : ""(VAR9)
                     : "", "");
        FUN2("" VAR4 "", VAR2);
        VAR8.VAR6 = (long)&VAR10;
        VAR8.VAR7 = VAR9;
        asm volatile(""
                     ""
                     : ""(VAR2)
                     : ""(&VAR8)
                     : "", "");
        FUN2("" VAR4 "", VAR2);
        asm volatile(""
                     ""
                     ""
                     ""
                     ""
                     : ""(VAR2)
                     : ""(&VAR8), ""(VAR9)
                     : "", "");
        FUN2("" VAR4 "", VAR2);
    }
    asm volatile(""
                 : ""(VAR2)
                 : ""(VAR10)
                 : "", "");
    FUN2("" VAR4 "", VAR2);
    asm volatile(""
                 : ""(VAR2)
                 : ""(VAR11)
                 : "", "");
    FUN2("" VAR4 "", VAR2);
    asm volatile(""
                 : ""(VAR2));
    FUN2("" VAR4 "", VAR2);
    asm volatile(""
                 : ""(VAR2));
    FUN2("" VAR4 "", VAR2);
    asm volatile(""
                 : ""(VAR2));
    FUN2("" VAR4 "", VAR2);
}