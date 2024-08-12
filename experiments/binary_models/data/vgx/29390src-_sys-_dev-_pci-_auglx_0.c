int
FUN1(void *VAR1, u_int8_t VAR2, VAR3 *VAR4)
{
struct VAR5 *VAR6 = VAR1;
u_int32_t VAR7, VAR8;
int VAR9;

VAR7 = VAR10 | ((VAR11)VAR2 << 24) | VAR12;
FUN2(VAR6->VAR13, VAR6->VAR14, VAR15, VAR7);

for (VAR9 = VAR16; VAR9; VAR9--) {
VAR7 = FUN3(VAR6->VAR13, VAR6->VAR14,
VAR15);
if (!(VAR7 & VAR12))
break;
FUN4(1);
}
if (VAR7 & VAR12) {
FUN5("",
VAR6->VAR17.VAR18);
return -1;
}

for (VAR9 = VAR16; VAR9; VAR9--) {
VAR8 = FUN3(VAR6->VAR13, VAR6->VAR14,
VAR19);
if ((VAR8 & VAR20) && (VAR8 >> 24 == VAR2))
break;
FUN4(10);
}
if (VAR9 == 0) {
FUN5("",
VAR6->VAR17.VAR18, VAR8);
return -1;
}

*VAR4 = VAR8 & 0xffff;
FUN6(VAR21, ("",
VAR6->VAR17.VAR18, VAR2, *VAR4));
return 0;
}