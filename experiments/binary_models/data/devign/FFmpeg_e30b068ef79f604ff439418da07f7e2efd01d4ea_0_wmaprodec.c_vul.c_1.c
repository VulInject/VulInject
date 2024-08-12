static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6)
{
    int VAR7;
    if (!VAR6)
    {
        VAR2->VAR8 = FUN2(VAR4) & 7;
        VAR2->VAR9 = VAR2->VAR8;
        FUN3(&VAR2->VAR10, VAR2->VAR11, VAR12);
        VAR7 = (VAR2->VAR9 + VAR5 + 8) >> 3;
        if (VAR5 <= 0 || VAR7 > VAR12)
        {
            FUN4(VAR2->VAR13, "");
            VAR2->VAR9 += VAR5;
            if (!VAR6)
            {
                FUN5(&VAR2->VAR10, VAR4->VAR14 + (FUN2(VAR4) >> 3), VAR2->VAR9);
            }
            else
            {
                int VAR15 = 8 - (FUN2(VAR4) & 7);
                VAR15 = FUN6(VAR15, VAR5);
                FUN7(&VAR2->VAR10, VAR15, FUN8(VAR4, VAR15));
                VAR5 -= VAR15;
                FUN5(&VAR2->VAR10, VAR4->VAR14 + (FUN2(VAR4) >> 3), VAR5);
                FUN9(VAR4, VAR5);
                {
                    PutBitContext VAR16 = VAR2->VAR10;
                    FUN10(&VAR16);
                    FUN11(&VAR2->VAR4, VAR2->VAR11, VAR2->VAR9);
                    FUN12(&VAR2->VAR4, VAR2->VAR8)