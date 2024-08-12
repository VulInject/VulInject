static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR4;
    FUN2(VAR4);
    if (VAR2->VAR5 && !(VAR2->VAR6 ^ VAR2->VAR7))
    {
        VAR4->VAR8[0] += VAR4->VAR9->VAR10.VAR11[0];
        VAR4->VAR8[1] += VAR4->VAR9->VAR10.VAR11[1];
        VAR4->VAR8[2] += VAR4->VAR9->VAR10.VAR11[2];
    }
}