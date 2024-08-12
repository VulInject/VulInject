int FUN1(VAR1 *VAR2, uint8_t VAR3)
{
    VAR4 *VAR5 = FUN2(VAR2);
    FUN3(VAR2, VAR3);
    if (FUN4(VAR2, VAR6))
    {
        if (!(VAR2->VAR7 & VAR8) && VAR3 & VAR8)
        {
            int VAR9 = FUN5(VAR2);
            if (VAR9)
            {
                return VAR9;
            }
        }
    }
    if (VAR5->VAR10)
    {
        VAR5->FUN6(VAR2, VAR3);
    }
    VAR2->VAR7 = VAR3;
    return 0;
}