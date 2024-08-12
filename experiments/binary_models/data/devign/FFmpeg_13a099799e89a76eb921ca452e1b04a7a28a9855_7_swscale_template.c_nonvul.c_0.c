static void FUN1(VAR1)(VAR2 *VAR3, const VAR4 *VAR5, const VAR4 *VAR6, const VAR4 *VAR7, const VAR4 *VAR8, VAR9 *VAR10[4], int VAR11, int VAR12)
{
    int VAR13 = 4;
    const VAR4 *VAR14[4] = {VAR5 + VAR11, VAR6 + VAR12, VAR7 + VAR12, VAR8 + VAR11};
    x86_reg VAR15[4] = {VAR11, VAR12, VAR12, VAR11};
    while (VAR13--)
    {
        if (VAR10[VAR13])
        {
            VAR16 volatile("" VAR17 ""
                             ""
                             ""
                             ""
                             ""
                             ""
                             "" VAR17 ""
                             "" VAR17 ""
                             ""
                             ""
                             ""
                             ""
                             "" FUN2(% % VAR18, (% 1, % % VAR19)) "" VAR17 ""
                                                                                                          ""
                             :
                             : ""(VAR14[VAR13]), ""(VAR10[VAR13] + VAR15[VAR13]), ""(-VAR15[VAR13])
                             : "" VAR17);
        }
    }
}