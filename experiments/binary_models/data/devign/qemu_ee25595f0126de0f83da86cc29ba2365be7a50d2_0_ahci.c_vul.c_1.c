static void FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = &VAR2->VAR6[VAR3].VAR7;
    int VAR8;
    if ((VAR5->VAR9 & VAR10) && VAR5->VAR11)
    {
        for (VAR8 = 0; (VAR8 < 32) && VAR5->VAR11; VAR8++)
        {
            if ((VAR5->VAR11 & (1 << VAR8)) && !FUN2(VAR2, VAR3, VAR8))
            {
                VAR5->VAR11 &= ~(1 << VAR8);
            }
        }
    }
}