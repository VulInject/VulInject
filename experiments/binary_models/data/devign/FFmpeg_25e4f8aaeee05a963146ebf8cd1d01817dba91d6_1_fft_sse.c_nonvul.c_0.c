void FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR3 *VAR5, VAR3 *VAR6)
{
    long VAR7, VAR8, VAR9, VAR10, VAR11;
    const VAR12 *VAR13 = VAR2->VAR14.VAR13;
    const VAR3 *VAR15 = VAR2->VAR15;
    const VAR3 *VAR16 = VAR2->VAR16;
    const VAR3 *VAR17, *VAR18;
    VAR19 *VAR20 = (VAR19 *)VAR6;
    VAR11 = 1 << VAR2->VAR21;
    VAR10 = VAR11 >> 1;
    VAR9 = VAR11 >> 2;
    VAR8 = VAR11 >> 3;
    asm volatile(""
                 :
                 : ""(*VAR22));
    VAR17 = VAR5;
    VAR18 = VAR5 + VAR10 - 4;
    for (VAR7 = 0; VAR7 < VAR9; VAR7 += 4)
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
                     ""
                     ""
                     ""
                     ""
                     ""
                     ""
                     ""
                     "" VAR23 ""
                     "" VAR23 ""
                     ""
                     ""
                     ""
                     ""
                     ""
                     ""
                     ""
                     ""
                     :
                     : ""(VAR18[-2 * VAR7]), ""(VAR17[2 * VAR7]), ""(VAR15[VAR7]), ""(VAR16[VAR7]), ""(*VAR22));
        asm(""
            ""
            ""
            ""
            : ""(VAR20[VAR13[VAR7]]), ""(VAR20[VAR13[VAR7 + 1]]), ""(VAR20[VAR13[VAR7 + 2]]), ""(VAR20[VAR13[VAR7 + 3]]));
    }
    FUN2(&VAR2->VAR14, VAR20);
    for (VAR7 = 0; VAR7 < VAR9; VAR7 += 4)
    {
        asm(""
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
            "" VAR23 ""
            ""
            "" VAR23 ""
            ""
            ""
            ""
            ""
            ""
            ""
            ""
            ""
            ""
            : ""(VAR20[VAR7])
            : ""(VAR15[VAR7]), ""(VAR16[VAR7]), ""(*VAR22));
    }
    VAR7 = 16 - VAR11;
    asm volatile(""
                 :
                 : ""(*VAR24));
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
                 : ""(VAR4), ""(VAR4 + VAR10), ""(VAR4 + VAR11), ""(VAR20 + VAR8)
                 : "");
}