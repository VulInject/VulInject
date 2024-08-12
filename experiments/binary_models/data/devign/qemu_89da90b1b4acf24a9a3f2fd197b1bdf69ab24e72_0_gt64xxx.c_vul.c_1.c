static void FUN1(VAR1 *VAR2)
{
    if ((VAR2->VAR3[VAR4] & 0x7f) <= VAR2->VAR3[VAR5])
    {
        if (VAR2->VAR6)
        {
            FUN2(FUN3(), &VAR2->VAR7);
            FUN4(&VAR2->VAR7);
        }
        VAR2->VAR8 = VAR2->VAR3[VAR4] << 21;
        VAR2->VAR6 = ((VAR2->VAR3[VAR5] + 1) - (VAR2->VAR3[VAR4] & 0x7f)) << 21;
        VAR9 = VAR2->VAR8;
        FUN5(VAR2->VAR8, VAR2->VAR6);
    }
}