static inline void FUN1(VAR1)(VAR2 *VAR3, const VAR4 *VAR5, const VAR4 *VAR6, const VAR4 *VAR7, const VAR4 *VAR8, VAR9 *VAR10, VAR9 *VAR11, VAR9 *VAR12, VAR9 *VAR13, int VAR14, int VAR15)
{
    int VAR16 = 4;
    const VAR4 *VAR17[4] = {VAR8 + VAR14, VAR5 + VAR14, VAR6 + VAR15, VAR7 + VAR15};
    VAR9 *VAR18[4] = {VAR13, VAR10, VAR11, VAR12};
    x86_reg VAR19[4] = {VAR14, VAR14, VAR15, VAR15};
    while (VAR16--)
    {
        if (VAR18[VAR16])
        {
            VAR20 volatile("" VAR21 ""
                             ""
                             ""
                             ""
                             ""
                             ""
                             "" VAR21 ""
                             "" VAR21 ""
                             ""
                             ""
                             ""
                             ""
                             "" FUN2(% % VAR22, (% 1, % % VAR23)) "" VAR21 ""
                                                                                                          ""
                             :
                             : ""(VAR17[VAR16]), ""(VAR18[VAR16] + VAR19[VAR16]), ""(-VAR19[VAR16])
                             : "" VAR21);
        }
    }
}