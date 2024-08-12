static int FUN1(VAR1 *VAR2, uint16_t VAR3, VAR4 *VAR5)
{
    VTD_IRTE VAR6 = {0};
    int VAR7 = 0;
    VAR7 = FUN2(VAR2, VAR3, &VAR6);
    if (VAR7)
    {
        return VAR7;
    }
    VAR5->VAR8 = VAR6.VAR8;
    VAR5->VAR9 = VAR6.VAR9;
    VAR5->VAR10 = VAR6.VAR10;
    VAR5->VAR11 = (FUN3(VAR6.VAR12) & VAR13) >> VAR14;
    VAR5->VAR15 = VAR6.VAR15;
    VAR5->VAR16 = VAR6.VAR16;
    FUN4(VAR17, ""
                    "",
                VAR3, VAR5->VAR8, VAR5->VAR9, VAR5->VAR10, VAR5->VAR11, VAR5->VAR15);
    return 0;
}