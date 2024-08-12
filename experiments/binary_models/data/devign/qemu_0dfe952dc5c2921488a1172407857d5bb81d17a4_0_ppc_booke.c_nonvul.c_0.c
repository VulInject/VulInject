static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    VAR4 *VAR5 = &VAR3->VAR5;
    VAR5->VAR6[VAR7] |= VAR8;
    FUN2(VAR3);
    if (VAR5->VAR6[VAR9] & VAR10)
    {
        if (VAR5->VAR6[VAR11] != 0)
        {
            FUN3(VAR5, VAR5->VAR6[VAR11]);
        }
    }
}