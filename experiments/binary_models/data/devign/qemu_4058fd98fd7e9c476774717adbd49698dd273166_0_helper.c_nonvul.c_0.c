FUN1(VAR1 *VAR2, VAR3 *VAR4, fprintf_function VAR5, const char *VAR6, struct VAR7 *VAR8)
{
    if (VAR2->VAR9 & VAR10)
    {
        FUN2(VAR4, "" VAR11 "", VAR6, VAR8->VAR12, VAR8->VAR13, VAR8->VAR14, VAR8->VAR15 & 0x00ffff00);
    }
    else
    {
        FUN2(VAR4, "", VAR6, VAR8->VAR12, (VAR16)VAR8->VAR13, VAR8->VAR14, VAR8->VAR15 & 0x00ffff00);
    }
    if (!(VAR2->VAR9 & VAR17) || !(VAR8->VAR15 & VAR18))
        goto VAR19;
    FUN2(VAR4, "", (VAR8->VAR15 & VAR20) >> VAR21);
    if (VAR8->VAR15 & VAR22)
    {
        if (VAR8->VAR15 & VAR23)
        {
            FUN2(VAR4, (VAR8->VAR15 & VAR24) ? "" : ((VAR8->VAR15 & VAR25) ? "" : ""));
            FUN2(VAR4, "", (VAR8->VAR15 & VAR26) ? '' : '', (VAR8->VAR15 & VAR27) ? '' : '');
        }
        else
        {
            FUN2(VAR4, (VAR8->VAR15 & VAR25) ? "" : "");
            FUN2(VAR4, "", (VAR8->VAR15 & VAR28) ? '' : '', (VAR8->VAR15 & VAR29) ? '' : '');
        }
        FUN2(VAR4, "", (VAR8->VAR15 & VAR30) ? '' : '');
    }
    else
    {
        static const char *VAR31[2][16] = {{"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""}, {"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""}};
        FUN2(VAR4, "", VAR31[(VAR2->VAR9 & VAR32) ? 1 : 0][(VAR8->VAR15 & VAR33) >> VAR34]);
    }
VAR19:
    FUN2(VAR4, "");
}