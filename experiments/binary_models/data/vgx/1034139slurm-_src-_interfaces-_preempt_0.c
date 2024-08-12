extern VAR1 FUN1(VAR2 *VAR3,
VAR2 *VAR4,
uint16_t VAR5, bool VAR6)
{
int VAR7 = VAR8;

if (FUN2(VAR3, VAR4))
return VAR8;

if (VAR9) {
if (VAR3->VAR10)
(void)FUN3(VAR3->VAR10,
VAR11,
&VAR6);
else
FUN4(VAR3, VAR6);
}

if (VAR5 == VAR12) {
if (VAR3->VAR10)
VAR7 = FUN5(VAR3, VAR13, 0, 0, true);
else
VAR7 = FUN6(VAR3, VAR13, 0, 0, true);
if (VAR7 == VAR14) {
FUN7("",
VAR3, VAR4);
}
} else if (VAR5 == VAR15) {

VAR7 = FUN8(0, VAR3->VAR16,
NULL, true, 0);
if (VAR7 == VAR14) {
FUN7("",
VAR3, VAR4);
}
}

if (VAR7 != VAR14) {
if (VAR3->VAR10)
VAR7 = FUN5(VAR3, VAR13, 0, 0, true);
else
VAR7 = FUN6(VAR3, VAR13, 0, 0, true);
if (VAR7 == VAR14) {
FUN7("",
VAR17, VAR3);
} else {
FUN7("",
VAR17, VAR3, FUN9(VAR7));
}
}

return VAR7;
}