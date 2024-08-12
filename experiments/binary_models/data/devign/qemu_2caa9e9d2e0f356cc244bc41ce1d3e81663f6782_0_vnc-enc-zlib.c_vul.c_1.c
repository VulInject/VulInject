static int FUN1(VAR1 *VAR2)
{
    z_streamp VAR3 = &VAR2->VAR4.VAR5;
    int VAR6;
    VAR2->VAR4.VAR4 = VAR2->VAR7;
    VAR2->VAR7 = VAR2->VAR4.VAR8;
    if (VAR3->VAR9 != VAR2)
    {
        int VAR10;
        FUN2("");
        FUN2("", VAR3->VAR9, VAR2);
        VAR3->VAR11 = VAR12;
        VAR3->VAR13 = VAR14;
        VAR10 = FUN3(VAR3, VAR2->VAR15.VAR16, VAR17, VAR18, VAR19, VAR20);
        if (VAR10 != VAR21)
        {
            fprintf(VAR22, "");
            return -1;
        }
        VAR2->VAR4.VAR23 = VAR2->VAR15.VAR16;
        VAR3->VAR9 = VAR2;
    }
    if (VAR2->VAR15.VAR16 != VAR2->VAR4.VAR23)
    {
        if (FUN4(VAR3, VAR2->VAR15.VAR16, VAR20) != VAR21)
        {
            return -1;
        }
        VAR2->VAR4.VAR23 = VAR2->VAR15.VAR16;
    }
    FUN5(&VAR2->VAR7, VAR2->VAR4.VAR4.VAR24 + 64);
    VAR3->VAR25 = VAR2->VAR4.VAR4.VAR26;
    VAR3->VAR27 = VAR2->VAR4.VAR4.VAR24;
    VAR3->VAR28 = VAR2->VAR7.VAR26 + VAR2->VAR7.VAR24;
    VAR3->VAR29 = VAR2->VAR7.VAR30 - VAR2->VAR7.VAR24;
    VAR3->VAR31 = VAR32;
    VAR6 = VAR3->VAR33;
    if (FUN6(VAR3, VAR34) != VAR21)
    {
        fprintf(VAR22, "");
        return -1;
    }
    VAR2->VAR7.VAR24 = VAR2->VAR7.VAR30 - VAR3->VAR29;
    return VAR3->VAR33 - VAR6;
}