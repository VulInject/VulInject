VAR1 FUN1(struct VAR2 *VAR3)
{
if (VAR3->VAR4) {
FUN2(VAR3->VAR5, VAR3->VAR4,
VAR3->VAR6, VAR3->VAR7);
FUN3(VAR8, "",
(unsigned long)VAR3->VAR4,
(unsigned int)VAR3->VAR7,
VAR3->VAR6);
VAR3->VAR4 = 0;
return 0;
} else {
return 1;
}
}