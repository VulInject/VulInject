static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    VAR4 *VAR5 = VAR3->VAR6.VAR7;
    VAR5[0x58] = 0;
    VAR5[0x59] = 0;
    VAR5[0x5a] = 0;
    VAR5[0x5b] = 0;
    if (FUN2())
    {
        VAR5[0x5B] = 0x02;
    }
}