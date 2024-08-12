void FUN1(int VAR1, int VAR2, int VAR3, unsigned int VAR4, int VAR5)
{
    {
        extern VAR6 *VAR7;
        static int VAR8;
        if (VAR9->VAR10[0] & VAR11)
        {
            fprintf(VAR7, "", VAR8, VAR1, VAR3, VAR2);
            VAR8++;
        }
    }
    if ((VAR9->VAR10[0] & VAR11) && VAR1 == 0x10)
    {
        FUN2(VAR9);
        FUN3(VAR12);
    }
    if (VAR13)
    {
        static int VAR8;
        fprintf(VAR14, "", VAR8, VAR1, VAR3, VAR2);
        FUN4(VAR9, VAR14, VAR15);
        {
            int VAR16;
            VAR17 *VAR18;
            fprintf(VAR14, "");
            VAR18 = VAR9->VAR19[VAR20].VAR21 + VAR9->VAR22;
            for (VAR16 = 0; VAR16 < 16; VAR16++)
            {
                fprintf(VAR14, "", FUN5(VAR18 + VAR16));
            }
            fprintf(VAR14, "");
        }
        VAR8++;
    }
    if (VAR9->VAR10[0] & VAR11)
    {
        FUN6(VAR1, VAR2, VAR3, VAR4, VAR5);
    }
    else
    {
        FUN7(VAR1, VAR2, VAR3, VAR4);
    }
}