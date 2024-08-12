static void FUN1(VAR1 *VAR2, VAR1 *VAR3, int VAR4, int VAR5, int VAR6, int VAR7, int VAR8)
{
    if (VAR7 == 0 && VAR6 == 0)
    {
        FUN2(VAR2, VAR3, VAR4, VAR5);
        return;
    }
    assert(VAR6 < 8 && VAR7 < 8 && VAR6 >= 0 && VAR7 >= 0);
    if (VAR7 == 0 || VAR6 == 0)
    {
        asm volatile(""
                     ""
                     ""
                     ""
                     ""
                     :
                     : ""(255 * (VAR6 + VAR7) + 8), ""(VAR8 ? VAR9 : VAR10));
        if (VAR6)
        {
            asm volatile(""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         "" FUN3("") FUN3("") ""
                                                                                                                                ""
                                                                                                                                ""
                                                                                                                                ""
                                                                                                                                "" FUN3("") ""
                                                                                                                                                                                                   ""
                                                                                                                                                                                                   ""
                                                                                                                                                                                                   ""
                                                                                                                                                                                                   ""
                                                                                                                                                                                                   ""
                         : ""(VAR2), ""(VAR3), ""(VAR5)
                         : ""((long)VAR4));
        }
        else
        {
            asm volatile(""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         "" FUN3("") FUN3("") ""
                                                                                                                                ""
                                                                                                                                ""
                                                                                                                                ""
                                                                                                                                "" FUN3("") ""
                                                                                                                                                                                                   ""
                                                                                                                                                                                                   ""
                                                                                                                                                                                                   ""
                                                                                                                                                                                                   ""
                                                                                                                                                                                                   ""
                         : ""(VAR2), ""(VAR3), ""(VAR5)
                         : ""((long)VAR4));
        }
        return;
    }
    asm volatile(""
                 ""
                 ""
                 ""
                 ""
                 ""
                 ""
                 :
                 : ""((VAR6 * 255 + 8) * (8 - VAR7)), ""((VAR6 * 255 + 8) * VAR7), ""(VAR8 ? VAR11 : VAR12));
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
                 "" FUN3("") FUN3("") "" FUN3("") ""
                                                                                                                                                                                   ""
                                                                                                                                                                                   ""
                                                                                                                                                                                   ""
                                                                                                                                                                                   ""
                 : ""(VAR2), ""(VAR3), ""(VAR5)
                 : ""((long)VAR4));
}