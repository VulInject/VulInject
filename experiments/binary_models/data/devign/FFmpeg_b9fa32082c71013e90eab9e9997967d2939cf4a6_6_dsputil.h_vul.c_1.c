void FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR3 *VAR5, VAR3 *VAR6)
{
    long VAR7, VAR8, VAR9, VAR10;
    x86_reg VAR11;
    const VAR12 *VAR13 = VAR2->VAR14.VAR13;
    const VAR3 *VAR15 = VAR2->VAR15;
    const VAR3 *VAR16 = VAR2->VAR16;
    const VAR3 *VAR17, *VAR18;
    VAR19 *VAR20 = (VAR19 *)VAR6;
    VAR10 = 1 << VAR2->VAR21;
    VAR9 = VAR10 >> 1;
    VAR8 = VAR10 >> 2;
    VAR7 = VAR10 >> 3;
    VAR17 = VAR5;
    VAR18 = VAR5 + VAR9 - 1;
    for (VAR11 = 0; VAR11 < VAR8; VAR11++)
    {
        asm volatile(""
                     ""
                     ""
                     ""
                     ""
                     ""
                     ""
                     ""
                     ""
                     :
                     : ""(VAR18[-2 * VAR11]), ""(VAR17[2 * VAR11]), ""(VAR15[VAR11]), ""(VAR16[VAR11]));
        asm volatile(""
                     : ""(VAR20[VAR13[VAR11]]));
    }
    FUN2(&VAR2->VAR14, VAR20);
    for (VAR11 = 0; VAR11 < VAR8; VAR11++)
    {
        asm volatile(""
                     ""
                     ""
                     ""
                     ""
                     ""
                     ""
                     ""
                     ""
                     : ""(VAR20[VAR11])
                     : ""(VAR15[VAR11]), ""(VAR16[VAR11]));
    }
    VAR11 = VAR10 - 8;
    asm volatile(""
                 :
                 : ""(1 << 31));
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
                 : ""(VAR11)
                 : ""(VAR4), ""(VAR4 + VAR9), ""(VAR4 + VAR10), ""(VAR20 + VAR7)
                 : "");
    asm volatile("");
}