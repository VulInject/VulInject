void FUN1(void)
{
    VAR1->VAR2 = VAR1->VAR3->VAR4;
    VAR1->VAR5 = VAR1->VAR3->VAR6;
    FUN2(VAR1, VAR1->VAR3->VAR7 >> 32);
    VAR1->VAR8 = (VAR1->VAR3->VAR7 >> 24) & 0xff;
    FUN3((VAR1->VAR3->VAR7 >> 8) & 0xf3f);
    FUN4(VAR1, VAR1->VAR3->VAR7 & 0xff);
    VAR1->VAR9--;
    VAR1->VAR3 = &VAR1->VAR10[VAR1->VAR9 & VAR11];
}