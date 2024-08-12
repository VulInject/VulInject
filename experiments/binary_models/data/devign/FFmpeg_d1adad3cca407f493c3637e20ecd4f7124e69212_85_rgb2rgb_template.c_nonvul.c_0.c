static void FUN1(VAR1)(const VAR2 *VAR3, VAR2 *VAR4, x86_reg VAR5)
{
    VAR4 += VAR5;
    VAR3 += 2 * VAR5;
    VAR5 = -VAR5;
    if (VAR5 <= -16)
    {
        VAR5 += 15;
        VAR6 volatile(""
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
                         "" VAR7 "" VAR7 ""
                         ""
                         ""
                         : ""(VAR5)
                         : ""(VAR3), ""(VAR4));
        VAR5 -= 15;
    }
    while (VAR5 < 0)
    {
        VAR4[VAR5] = VAR3[2 * VAR5];
        VAR5++;
    }
}