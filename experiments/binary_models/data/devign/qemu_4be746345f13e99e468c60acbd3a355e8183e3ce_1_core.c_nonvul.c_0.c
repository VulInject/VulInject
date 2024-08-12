static void FUN1(VAR1 *VAR2)
{
    VAR2->VAR3 &= 0xf0;
    VAR2->VAR4 = 1;
    VAR2->VAR5 = 1;
    if (VAR2->VAR6 == VAR7)
    {
        VAR2->VAR8 = 0x14;
        VAR2->VAR9 = 0xeb;
    }
    else if (VAR2->VAR10)
    {
        VAR2->VAR8 = 0;
        VAR2->VAR9 = 0;
    }
    else
    {
        VAR2->VAR8 = 0xff;
        VAR2->VAR9 = 0xff;
    }
}