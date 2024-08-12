static inline void FUN1(uint8_t VAR1[], int VAR2, uint8_t VAR3[], int VAR4, int VAR5, int VAR6)
{
    int VAR7;
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
                     "" VAR8 ""
                     "" VAR8 ""
                     ""
                     ""
                     ""
                     ""
                     ""
                     :
                     : ""(VAR3), ""(VAR1), ""(VAR4), ""(VAR2), ""(VAR5 >> 2)
                     : "", "");
        for (VAR7 = 0; VAR7 < VAR5; VAR7++)
            memcpy(&(VAR1[VAR2 * VAR7]), &(VAR3[VAR4 * VAR7]), VAR9);
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
                     ""
                     ""
                     ""
                     ""
                     "" VAR10 ""
                     "" VAR10 ""
                     ""
                     ""
                     ""
                     ""
                     ""
                     :
                     : ""(VAR3), ""(VAR1), ""(VAR4), ""(VAR2), ""(VAR5 >> 2)
                     : "", "");
        for (VAR7 = 0; VAR7 < VAR5; VAR7++)
            memcpy(&(VAR1[VAR2 * VAR7]), &(VAR3[VAR4 * VAR7]), VAR9);
    }
}