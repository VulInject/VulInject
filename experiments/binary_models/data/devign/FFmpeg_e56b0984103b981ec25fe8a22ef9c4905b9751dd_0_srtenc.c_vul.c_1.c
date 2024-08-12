static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    int VAR8 = VAR2->VAR9[0]->VAR10->VAR11 != VAR12;
    VAR6->VAR13++;
    if (VAR8)
    {
        int64_t VAR14 = VAR4->VAR15, VAR16, VAR17 = VAR4->VAR18;
        if (VAR17 <= 0)
            VAR17 = VAR4->VAR19;
        if (VAR14 == VAR20 || VAR17 < 0)
        {
            FUN2(VAR2, VAR21, "");
            return FUN3(VAR22);
        }
        VAR16 = VAR14 + VAR17;
        FUN4(VAR2->VAR23, "", VAR6->VAR13, (int)(VAR14 / 3600000), (int)(VAR14 / 60000) % 60, (int)(VAR14 / 1000) % 60, (int)(VAR14 % 1000), (int)(VAR16 / 3600000), (int)(VAR16 / 60000) % 60, (int)(VAR16 / 1000) % 60, (int)(VAR16 % 1000));
    }
    FUN5(VAR2->VAR23, VAR4->VAR24, VAR4->VAR25);
    if (VAR8)
        FUN5(VAR2->VAR23, "", 2);
    FUN6(VAR2->VAR23);
    return 0;
}