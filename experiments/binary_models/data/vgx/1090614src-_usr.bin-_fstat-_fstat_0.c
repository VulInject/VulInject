void
FUN1(struct VAR1 *VAR2)
{
struct in_addr VAR3, VAR4;

memcpy(&VAR3, VAR2->VAR5, sizeof(VAR3));
memcpy(&VAR4, VAR2->VAR6, sizeof(VAR4));
if (VAR2->VAR7 == VAR8) {
FUN2("");
FUN3((void *)(VAR9)VAR2->VAR10);
FUN2("", VAR3.VAR11 == VAR12 ? "" :
FUN4(VAR3), FUN5(VAR2->VAR13));
if (VAR2->VAR14) {
if (VAR2->VAR15 & VAR16)
FUN2("");
else
FUN2("");
FUN2("",
VAR4.VAR11 == VAR12 ? "" :
FUN4(VAR4), FUN5(VAR2->VAR14));
}
} else if (VAR2->VAR7 == VAR17) {
FUN2("", VAR3.VAR11 == VAR12 ? "" :
FUN4(VAR3), FUN5(VAR2->VAR13));
if (VAR2->VAR14) {
FUN2("",
VAR4.VAR11 == VAR12 ? "" :
FUN4(VAR4), FUN5(VAR2->VAR14));
}
} else if (VAR2->VAR18) {
FUN2("");
FUN3((void *)(VAR9)VAR2->VAR18);
}
}