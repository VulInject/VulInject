static void FUN1(VAR1 *VAR2, VAR1 *VAR3, VAR4 *VAR5, int VAR6, int VAR7, const VAR4 *VAR8)
{
    intptr_t VAR9;
    if (VAR6 & 3)
    {
        VAR9 = VAR6 & ~3;
        FUN2(VAR2 + VAR9, VAR3 + VAR9, VAR5 + VAR9 / 2, VAR6 - VAR9, VAR7, VAR8);
        VAR6 = VAR9;
    }
    VAR9 = -VAR6;
    VAR10 volatile(""
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
                     : ""(VAR9)
                     : ""(VAR2 + VAR6), ""(VAR3 + VAR6), ""(VAR5 + VAR6 / 2), ""(VAR7), ""(*VAR8), ""(*VAR11)
                     : "");
}