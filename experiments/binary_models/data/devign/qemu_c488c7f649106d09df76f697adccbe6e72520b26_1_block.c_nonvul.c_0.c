static VAR1 *FUN1(VAR2 *VAR3)
{
    VAR1 *VAR4;
    VAR5 *VAR6;
    VAR4 = FUN2(""
                             "" VAR7 ""
                             "" VAR7 ""
                             "" VAR7 ""
                             "" VAR7 ""
                             "" VAR7 ""
                             "" VAR7 ""
                             "" VAR7 ""
                             "" VAR7 ""
                             "" VAR7 "",
                             VAR3->VAR8[VAR9], VAR3->VAR8[VAR10], VAR3->VAR11[VAR9], VAR3->VAR11[VAR10], VAR3->VAR12 * (VAR13)VAR14, VAR3->VAR11[VAR15], VAR3->VAR16[VAR10], VAR3->VAR16[VAR9], VAR3->VAR16[VAR15]);
    VAR6 = FUN3(VAR4);
    if (*VAR3->VAR17)
    {
        FUN4(VAR6, "", FUN5(VAR3->VAR17));
    }
    if (VAR3->VAR18)
    {
        VAR1 *VAR19 = FUN1(VAR3->VAR18);
        FUN6(VAR6, "", VAR19);
    }
    return VAR4;
}