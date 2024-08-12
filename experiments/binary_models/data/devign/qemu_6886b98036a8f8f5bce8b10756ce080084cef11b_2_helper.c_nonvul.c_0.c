void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = &VAR4->VAR6;
    if (VAR2->VAR7)
    {
        if (VAR2->VAR7->VAR8 & VAR9)
        {
            uint32_t VAR10;
            VAR2->VAR7 = NULL;
            VAR10 = FUN3(VAR6);
            if (VAR10)
            {
                FUN4(VAR6, VAR10);
            }
            FUN5(VAR2);
        }
    }
}