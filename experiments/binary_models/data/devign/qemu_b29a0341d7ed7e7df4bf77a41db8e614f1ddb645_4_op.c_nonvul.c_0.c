void FUN1(void)
{
    VAR1->VAR2 = 0x80000000 | (VAR3 & 0x3FFFF000);
    FUN2();
}