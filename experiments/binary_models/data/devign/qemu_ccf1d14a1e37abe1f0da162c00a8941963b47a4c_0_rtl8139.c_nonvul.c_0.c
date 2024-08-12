static void FUN1(VAR1 *VAR2, const void *VAR3, int VAR4)
{
    if (VAR2->VAR5 + VAR4 > VAR2->VAR6)
    {
        int VAR7 = FUN2(VAR2->VAR5 + VAR4, VAR2->VAR6);
        if (VAR7 && !(VAR2->VAR6 < 65536 && FUN3(VAR2)))
        {
            FUN4(("", VAR4 - VAR7));
            if (VAR4 > VAR7)
            {
                FUN5(VAR2->VAR8 + VAR2->VAR5, VAR3, VAR4 - VAR7);
            }
            VAR2->VAR5 = 0;
            FUN5(VAR2->VAR8 + VAR2->VAR5, VAR3 + (VAR4 - VAR7), VAR7);
            VAR2->VAR5 = VAR7;
            return;
        }
    }
    FUN5(VAR2->VAR8 + VAR2->VAR5, VAR3, VAR4);
    VAR2->VAR5 += VAR4;
}