static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    int VAR4 = FUN2(VAR3->VAR5);
    VAR3->VAR6 = 0xfee00000 | (VAR4 ? VAR7 : 0) | VAR8;
    FUN3(VAR3->VAR5);
    FUN4(VAR3->VAR5);
    if (VAR4)
    {
        VAR3->VAR9[VAR10] = 0x700;
    }
}