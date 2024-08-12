static inline void FUN1(VAR1)(VAR2 *VAR3, VAR4 *VAR5, VAR4 **VAR6, int VAR7, VAR4 *VAR8, VAR4 **VAR9, int VAR10, VAR11 *VAR12, VAR11 *VAR13, VAR11 *VAR14, int VAR15, int VAR16)
{
    if (VAR13 != NULL)
    {
        asm volatile(FUN2(0, VAR17)
                     :
                     : ""(&VAR3->VAR18), ""(VAR13), ""((long)VAR16)
                     : "" VAR19, "" VAR20, "" VAR21);
        asm volatile(FUN2(4096, VAR17)
                     :
                     : ""(&VAR3->VAR18), ""(VAR14), ""((long)VAR16)
                     : "" VAR19, "" VAR20, "" VAR21);
    }
    asm volatile(FUN2(0, VAR22)
                 :
                 : ""(&VAR3->VAR18), ""(VAR12), ""((long)VAR15)
                 : "" VAR19, "" VAR20, "" VAR21);
    FUN3(VAR5, VAR6, VAR7, VAR8, VAR9, VAR10, VAR12, VAR13, VAR14, VAR15, VAR16);
    FUN4(VAR5, VAR6, VAR7, VAR8, VAR9, VAR10, VAR12, VAR13, VAR14, VAR15, VAR16);
}