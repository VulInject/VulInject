static int
FUN1(VAR1 *VAR2)
{
bpf_u_int32 VAR3;
struct strioctl VAR4;
u_int VAR5 = 0;
struct timeval VAR6;

if (VAR2->VAR7.VAR8) {

VAR4.VAR9 = VAR10;
VAR4.VAR11 = sizeof(VAR5);
VAR4.VAR12 = (char *)&VAR5;
if (FUN2(VAR2->VAR13, VAR14, (char *)&VAR4) < 0) {
FUN3(VAR2->VAR15, VAR16,
VAR17, "");
return (-1);
}
}
VAR4.VAR18 = VAR19;
if (VAR2->VAR7.VAR6 != 0) {
VAR6.VAR20 = VAR2->VAR7.VAR6 / 1000;
VAR6.VAR21 = (VAR2->VAR7.VAR6 * 1000) % 1000000;
VAR4.VAR9 = VAR22;
VAR4.VAR11 = sizeof(VAR6);
VAR4.VAR12 = (char *)&VAR6;
if (FUN2(VAR2->VAR13, VAR14, (char *)&VAR4) < 0) {
FUN3(VAR2->VAR15, VAR16,
VAR17, "");
return (-1);
}
}
VAR3 = VAR23 | VAR24 | VAR25;
if (VAR2->VAR7.VAR26)
VAR3 |= VAR27;
VAR4.VAR9 = VAR28;
VAR4.VAR11 = sizeof(VAR3);
VAR4.VAR12 = (char *)&VAR3;
if (FUN2(VAR2->VAR13, VAR14, (char *)&VAR4) < 0) {
FUN3(VAR2->VAR15, VAR16,
VAR17, "");
return (-1);
}
return (0);
}