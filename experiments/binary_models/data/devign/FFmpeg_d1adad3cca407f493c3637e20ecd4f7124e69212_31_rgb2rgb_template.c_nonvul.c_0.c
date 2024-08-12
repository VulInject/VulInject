static void FUN1(VAR1)(const VAR2 *VAR3, VAR2 *VAR4, VAR2 *VAR5, x86_reg VAR6)
{
    VAR4 += VAR6;
    VAR5 += VAR6;
    VAR3 += 4 * VAR6;
    VAR6 = -VAR6;
    if (VAR6 <= -8)
    {
        VAR6 += 7;
        VAR7 volatile(""
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
                         "" VAR8 "" VAR8 ""
                         ""
                         ""
                         : ""(VAR6)
                         : ""(VAR3), ""(VAR4), ""(VAR5));
        VAR6 -= 7;
    }
    VAR3++;
    while (VAR6 < 0)
    {
        VAR4[VAR6] = VAR3[4 * VAR6 + 0];
        VAR5[VAR6] = VAR3[4 * VAR6 + 2];
        VAR6++;
    }
}