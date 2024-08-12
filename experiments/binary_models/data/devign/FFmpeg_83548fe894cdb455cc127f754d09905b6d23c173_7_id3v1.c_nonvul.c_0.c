void FUN1(VAR1 *VAR2)
{
    int VAR3;
    uint8_t VAR4[VAR5];
    int64_t VAR6, VAR7 = FUN2(VAR2->VAR8);
    if (VAR2->VAR8->VAR9 & VAR10)
    {
        VAR6 = FUN3(VAR2->VAR8);
        if (VAR6 > 128)
        {
            FUN4(VAR2->VAR8, VAR6 - 128, VAR11);
            VAR3 = FUN5(VAR2->VAR8, VAR4, VAR5);
            if (VAR3 == VAR5)
            {
                FUN6(VAR2, VAR4);
            }
            FUN4(VAR2->VAR8, VAR7, VAR11);
        }
    }
}