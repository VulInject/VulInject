static void FUN1(OutputFormat VAR1, VAR2 *VAR3, VAR2 *VAR4)
{
    switch (VAR1)
    {
    case VAR5:
        if ((VAR3->VAR6 & VAR7) && !(VAR3->VAR6 & VAR8))
        {
            FUN2("");
            FUN3(1);
        }
        if ((VAR3->VAR6 & (VAR7 | VAR9)) == VAR7)
        {
            FUN4("" VAR10 "" VAR10 "" VAR10 "", VAR3->VAR11, VAR3->VAR12, VAR3->VAR13, VAR3->VAR14->VAR15);
        }
        if (VAR4 && (VAR4->VAR6 & (VAR7 | VAR9)) != VAR7)
        {
            VAR4->VAR6 &= ~VAR7;
            VAR4->VAR6 |= VAR9;
        }
        break;
    case VAR16:
        FUN4(""VAR11\"" VAR17 ""VAR12\"" VAR17 ""VAR18\""
               ""VAR19\""VAR20\"",
               (VAR3->VAR11 == 0 ? "" : ""), VAR3->VAR11, VAR3->VAR12, VAR3->VAR18, (VAR3->VAR6 & VAR9) ? "" : "", (VAR3->VAR6 & VAR7) ? "" : "");
        if (VAR3->VAR6 & VAR8)
        {
            FUN4("" VAR17 "", VAR3->VAR13);
        }
        FUN5('');
        if (!VAR4)
        {
            FUN4("");
        }
        break;
    }
}