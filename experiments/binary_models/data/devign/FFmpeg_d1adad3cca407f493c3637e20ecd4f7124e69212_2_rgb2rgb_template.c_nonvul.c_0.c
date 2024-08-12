static void FUN1(VAR1)(const VAR2 *VAR3, const VAR2 *VAR4, VAR2 *VAR5, VAR2 *VAR6, x86_reg VAR7)
{
    VAR5 += VAR7;
    VAR6 += VAR7;
    VAR3 += 4 * VAR7;
    VAR4 += 4 * VAR7;
    VAR7 = -VAR7;
    if (VAR7 <= -8)
    {
        VAR7 += 7;
        VAR8 volatile(""
                         ""
                         ""
                         ""
                         ""
                         ""
                         "" VAR9 "" VAR9 "" VAR9 "" VAR9 ""
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
                         "" VAR10 "" VAR10 ""
                         ""
                         ""
                         : ""(VAR7)
                         : ""(VAR3), ""(VAR4), ""(VAR5), ""(VAR6));
        VAR7 -= 7;
    }
    VAR3++;
    VAR4++;
    while (VAR7 < 0)
    {
        VAR5[VAR7] = (VAR3[4 * VAR7 + 0] + VAR4[4 * VAR7 + 0]) >> 1;
        VAR6[VAR7] = (VAR3[4 * VAR7 + 2] + VAR4[4 * VAR7 + 2]) >> 1;
        VAR7++;
    }
}