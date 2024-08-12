static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR3, VAR5, VAR2);
    int VAR6;
    VAR7 *VAR8;
    if (!VAR4->VAR5.VAR9.VAR10)
    {
        FUN3("");
        VAR4->VAR10 = VAR4->VAR5.VAR9.VAR10;
        VAR6 = FUN4(VAR4->VAR10) == VAR11;
        if (FUN5(VAR4->VAR10, 1) != VAR12)
        {
            FUN3("");
            if (!VAR4->VAR13)
            {
                VAR8 = FUN6(VAR4->VAR10);
                VAR4->VAR13 = FUN7(*VAR8->VAR13 ? VAR8->VAR13 : "");
                if (!VAR4->VAR14)
                {
                    VAR4->VAR14 = FUN7(VAR15);
                    if (FUN8(VAR4->VAR10))
                    {
                        FUN3("");
                        if (VAR6)
                        {
                            VAR4->VAR5.VAR16 = 2048;
                        }
                        else
                        {
                            VAR4->VAR5.VAR16 = VAR4->VAR5.VAR9.VAR17;
                            VAR4->VAR18 = VAR4->VAR5.VAR16 / 512;
                            VAR4->VAR5.VAR19 = VAR20;
                            FUN9(VAR21, VAR4);
                            FUN10(VAR4->VAR10, VAR6);
                            return 0