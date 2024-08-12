int
FUN1(nl_catd VAR1)
{
if (VAR1 &&
VAR1 != (VAR2)-1) {
if (VAR1->VAR3) {
(void) FUN2(VAR1->VAR3, VAR1->VAR4);
VAR1->VAR3 = NULL;
}
VAR1->VAR4 = 0;
VAR1->VAR5 = 0;
FUN3(VAR1);
}
return (0);
}