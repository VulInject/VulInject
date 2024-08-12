static int FUN1(VAR1 *VAR2, IDEDriveKind VAR3)
{
    VAR4 *VAR5 = FUN2(VAR4, VAR6, VAR2->VAR7.VAR8);
    VAR9 *VAR10 = VAR5->VAR11 + VAR2->VAR12;
    VAR13 *VAR14 = NULL;
    if (VAR2->VAR15.VAR16 == -1)
    {
        VAR2->VAR15.VAR16 = 512;
    }
    else if (VAR2->VAR15.VAR16 && VAR2->VAR15.VAR16 != 512)
    {
        FUN3("");
        FUN4(&VAR2->VAR15, &VAR2->VAR17);
        if (VAR3 != VAR18)
        {
            FUN5(&VAR2->VAR15, &VAR2->VAR19, 65536, 16, 255, &VAR14);
            if (VAR14)
            {
                FUN3("", FUN6(VAR14));
                FUN7(VAR14);
                if (FUN8(VAR10, VAR2->VAR15.VAR20, VAR3, VAR2->VAR21, VAR2->VAR17, VAR2->VAR22, VAR2->VAR23, VAR2->VAR15.VAR24, VAR2->VAR15.VAR25, VAR2->VAR15.VAR26, VAR2->VAR19) < 0)
                {
                    if (!VAR2->VAR21)
                    {
                        VAR2->VAR21 = FUN9(VAR10->VAR21);
                        if (!VAR2->VAR17)
                        {
                            VAR2->VAR17 = FUN9(VAR10->VAR27);
                            FUN10(VAR2->VAR15.VAR28, &VAR2->VAR7, VAR2->VAR12 ? "" : "");
                            return 0