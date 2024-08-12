void FUN1(const VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    const VAR1 *VAR6;
    VAR3 *VAR7;
    VAR6 = VAR2;
    VAR7 = VAR4;
    VAR8 volatile(""
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
                     : ""(VAR7), ""((VAR9)VAR5), ""((VAR9)VAR5 * 3), ""(*VAR6)
                     : "");
    VAR7 += VAR5 * 4;
    VAR6 += 32;
    VAR8 volatile(""
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
                     : ""(VAR7), ""((VAR9)VAR5), ""((VAR9)VAR5 * 3), ""(VAR6)
                     : "");
}