static inline int FUN1(int VAR1)
{
unsigned long VAR2 = FUN2(VAR1);


VAR2 &= ~(VAR3 | VAR4);
FUN3(VAR1, VAR2);

VAR2 |= VAR5;
FUN3(VAR1, VAR2);


if ((FUN2(VAR1) & (VAR4 | VAR3))) {
FUN4(VAR6 "");
return -VAR7;
}

return 0;
}