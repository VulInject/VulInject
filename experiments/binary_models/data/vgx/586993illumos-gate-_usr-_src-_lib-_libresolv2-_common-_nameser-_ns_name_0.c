VAR1
FUN1(ns_nname_ct VAR2, size_t VAR3) {
ns_nname_ct VAR4 = VAR2;
u_int VAR5;

while (VAR3-- > 0 && (VAR5 = *VAR2++) != 0) {
if ((VAR5 & VAR6) != 0) {
VAR7 = VAR8;
return (-1);
}
if (VAR5 > VAR3) {
VAR7 = VAR9;
return (-1);
}
VAR2 += VAR5;
VAR3 -= VAR5;
}
return (VAR2 - VAR4);
}