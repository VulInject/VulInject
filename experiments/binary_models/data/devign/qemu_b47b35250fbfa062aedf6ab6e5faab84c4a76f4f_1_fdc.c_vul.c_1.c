static int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4;
    static int VAR5 = 0;
    if (!VAR5)
    {
        VAR5 = 1;
        for (VAR3 = FUN2(VAR6) - 1; VAR3 >= 0; VAR3--)
        {
            for (VAR4 = 0; VAR4 < sizeof(VAR7); VAR4++)
            {
                if ((VAR4 & VAR6[VAR3].VAR8) == VAR6[VAR3].VAR9)
                {
                    VAR7[VAR4] = VAR3;
                }
            }
        }
    }
    FUN3("");
    VAR2->VAR10 = FUN4(512, VAR11);
    VAR2->VAR12 = 512;
    VAR2->VAR13 = FUN5(VAR14, VAR15, VAR2);
    VAR2->VAR16 = 0x90;
    VAR2->VAR17 = VAR18 | VAR19;
    VAR2->VAR20 = VAR21;
    if (VAR2->VAR22 != -1)
        FUN6(VAR2->VAR22, &VAR23, VAR2);
    FUN7(VAR2);
    return 0;
}