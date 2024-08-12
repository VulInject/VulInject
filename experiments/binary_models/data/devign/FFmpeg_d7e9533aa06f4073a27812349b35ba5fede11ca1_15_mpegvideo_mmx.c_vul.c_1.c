static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6)
{
    int VAR7;
    const VAR8 *VAR9;
    if (VAR2->VAR10)
        VAR7 = 64;
    else
        VAR7 = VAR7 = VAR11[VAR2->VAR12[VAR5]];
    if (VAR2->VAR13)
    {
        int VAR14;
        if (VAR5 < 4)
            VAR14 = VAR4[0] * VAR2->VAR15;
        else
            VAR14 = VAR4[0] * VAR2->VAR16;
        VAR9 = VAR2->VAR17;
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
                     :
                     : ""(VAR4 + VAR7), ""(VAR9 + VAR7), ""(VAR6), ""(-2 * VAR7)
                     : "", "");
        VAR4[0] = VAR14;
    }
    else
    {
        VAR9 = VAR2->VAR18;
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
                     :
                     : ""(VAR4 + VAR7), ""(VAR9 + VAR7), ""(VAR6), ""(-2 * VAR7)
                     : "", "");
    }
}