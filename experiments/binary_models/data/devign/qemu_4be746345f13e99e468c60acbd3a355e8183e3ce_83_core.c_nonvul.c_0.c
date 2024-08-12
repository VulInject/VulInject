static bool FUN1(VAR1 *VAR2, uint8_t VAR3)
{
    if (VAR2->VAR4 && VAR2->VAR5 != VAR6)
    {
        if (VAR2->VAR5 != VAR7)
        {
            FUN2(VAR2);
        }
        else
        {
            FUN3(VAR2);
        }
        VAR2->VAR8 = VAR9 | VAR10;
        FUN4(VAR2, VAR2->VAR11, 512, VAR12);
        FUN5(VAR2->VAR13);
        return false;
    }
    else
    {
        if (VAR2->VAR5 == VAR6)
        {
            FUN6(VAR2);
        }
        FUN7(VAR2);
    }
    return true;
}