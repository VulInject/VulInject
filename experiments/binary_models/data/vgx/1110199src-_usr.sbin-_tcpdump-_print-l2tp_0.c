static void
FUN1(const VAR1 *VAR2, u_int VAR3)
{
u_int VAR4;
const VAR5 *VAR6 = (VAR5 *)VAR2;
int VAR7 = VAR8;

FUN2("");
if (VAR3 > 0 && (VAR9 - VAR2) >= 2) {

if ((VAR4 = (FUN3(*VAR6) & VAR10)) <=
(VAR9 - VAR2)) {
if (FUN3(*VAR6) & VAR11) {
FUN2("");
}
if (FUN3(*VAR6) & VAR12) {
VAR7 = VAR13;
FUN2("");
}
} else {
FUN2("");
return;
}
VAR6++;

if (FUN3(*VAR6)) {	
FUN2("", FUN3(*VAR6));
}
VAR6++;

if (FUN3(*VAR6) < VAR14) {
FUN2("", VAR15[FUN3(*VAR6)].VAR16);
FUN2("");
if (!VAR7 && VAR4 >= 6) {
(VAR15[FUN3(*VAR6)].VAR17)
((VAR1 *)VAR6+2, VAR4-6);
} else {
FUN2("");
}
FUN2("");
} else {
FUN2("", FUN3(*VAR6));
}

if (VAR3 >= VAR4 && VAR4 > 0)
FUN1(VAR2 + VAR4, VAR3 - VAR4);
} else if (VAR3 == 0) {
return;
} else {
FUN2("");
}
}