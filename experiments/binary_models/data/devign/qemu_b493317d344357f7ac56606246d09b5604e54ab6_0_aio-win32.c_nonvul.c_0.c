static bool FUN1(VAR1 *VAR2, HANDLE VAR3)
{
    VAR4 *VAR5;
    bool VAR6 = false;
    VAR5 = FUN2(&VAR2->VAR7);
    while (VAR5)
    {
        VAR4 *VAR8;
        int VAR9 = VAR5->VAR10.VAR9;
        VAR2->VAR11++;
        if (!VAR5->VAR12 && (VAR9 || FUN3(VAR5->VAR13) == VAR3) && VAR5->VAR14)
        {
            VAR5->VAR10.VAR9 = 0;
            VAR5->FUN4(VAR5->VAR13);
            if (VAR5->VAR13 != &VAR2->VAR15)
            {
                VAR6 = true;
            }
        }
        if (!VAR5->VAR12 && (VAR5->VAR16 || VAR5->VAR17))
        {
            VAR5->VAR10.VAR9 = 0;
            if ((VAR9 & VAR18) && VAR5->VAR16)
            {
                VAR5->FUN5(VAR5->VAR19);
                VAR6 = true;
            }
            if ((VAR9 & VAR20) && VAR5->VAR17)
            {
                VAR5->FUN6(VAR5->VAR19);
                VAR6 = true;
            }
            if (VAR3 == FUN3(&VAR2->VAR15))
            {
                WSANETWORKEVENTS VAR21;
                FUN7(VAR5->VAR10.VAR22, VAR3, &VAR21);
                if (VAR21.VAR23)
                {
                    VAR6 = true;
                }
            }
        }
        VAR8 = VAR5;
        VAR5 = FUN8(VAR5, VAR5);
        VAR2->VAR11--;
        if (!VAR2->VAR11 && VAR8->VAR12)
        {
            FUN9(VAR8, VAR5);
            FUN10(VAR8);
        }
    }
    return VAR6;
}