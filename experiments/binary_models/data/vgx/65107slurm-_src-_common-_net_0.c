extern int FUN1(int VAR1)
{
int VAR2;
socklen_t VAR3;
struct linger VAR4;

if (VAR5.VAR6 == VAR7)
return 0;

VAR3 = sizeof(struct VAR8);
VAR4.VAR9 = 1;
VAR4.VAR10 = VAR5.VAR6;
if (FUN2(VAR1, VAR11, VAR12, &VAR4, VAR3) < 0)
FUN3("");

VAR3 = sizeof(VAR2);
VAR2 = VAR5.VAR6;
if (FUN2(VAR1, VAR11, VAR13, &VAR2, VAR3) < 0) {
FUN3("");
return -1;
}


if (VAR5.VAR14 != VAR7) {
VAR2 = VAR5.VAR14;
if (FUN2(VAR1, VAR15, VAR16,
&VAR2, VAR3) < 0) {
FUN3("");
return -1;
}
}
if (VAR5.VAR17 != VAR7) {
VAR2 = (int) VAR5.VAR17;
if (FUN2(VAR1, VAR15, VAR18,
&VAR2, VAR3) < 0) {
FUN3("");
return -1;
}
}
VAR2 = VAR5.VAR6;
if (FUN2(VAR1, VAR15, VAR19, &VAR2, VAR3) < 0) {
FUN3("");
return -1;
}


VAR4.VAR9 = 0;
VAR4.VAR10 = 0;
VAR3 = sizeof(struct VAR8);
FUN4(VAR1, VAR11, VAR12, &VAR4, &VAR3);
FUN5("", VAR4.VAR9,
VAR4.VAR10, VAR1);

VAR3 = sizeof(VAR3);
FUN4(VAR1, VAR15, VAR16, &VAR2, &VAR3);
FUN5("", VAR2, VAR1);
FUN4(VAR1, VAR15, VAR18, &VAR2, &VAR3);
FUN5("", VAR2, VAR1);
FUN4(VAR1, VAR15, VAR19, &VAR2, &VAR3);
FUN5("", VAR2, VAR1);

return 0;
}