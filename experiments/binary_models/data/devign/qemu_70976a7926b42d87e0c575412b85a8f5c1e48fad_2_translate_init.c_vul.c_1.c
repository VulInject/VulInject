static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    if (VAR5 < 32)
    {
        VAR2->VAR6[VAR5].VAR7[0] = FUN2(VAR4);
        VAR2->VAR6[VAR5].VAR7[1] = FUN2(VAR4 + 8);
        VAR2->VAR6[VAR5].VAR7[1] = FUN2(VAR4);
        VAR2->VAR6[VAR5].VAR7[0] = FUN2(VAR4 + 8);
        return 16;
    }
    if (VAR5 == 33)
    {
        VAR2->VAR8 = FUN3(VAR4);
        return 4;
    }
    if (VAR5 == 34)
    {
        VAR2->VAR9[VAR10] = (VAR11)FUN3(VAR4);
        return 4;
    }
    return 0;
}