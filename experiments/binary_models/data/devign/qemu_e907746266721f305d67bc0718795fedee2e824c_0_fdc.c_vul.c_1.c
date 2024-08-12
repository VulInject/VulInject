static void FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = FUN2(VAR2);
    if (VAR2->VAR6[VAR2->VAR7 - 1] & 0x80)
    {
        if (VAR2->VAR6[VAR2->VAR7 - 1] & 0x40)
        {
            VAR2->VAR6[0] = VAR2->VAR6[1];
            VAR2->VAR6[2] = 0;
            VAR2->VAR6[3] = 0;
            FUN3(VAR2, 4);
        }
        else
        {
            FUN4(VAR2);
        }
    }
    else if (VAR2->VAR8 > 7)
    {
        VAR2->VAR6[0] = 0x80 | (VAR5->VAR9 << 2) | FUN5(VAR2);
        FUN3(VAR2, 1);
    }
}