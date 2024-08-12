int
FUN1(VAR1 *VAR2, char *VAR3, char *VAR4,
struct VAR5 *VAR6, u_longlong_t VAR7)
{
int VAR8;
ulong_t VAR9;
VAR10 *VAR11;
VAR12 *VAR13;

if (!VAR2) {
VAR8 = -1;
FUN2(VAR14, "");
} else if (!VAR2->VAR15) {
VAR8 = -1;
FUN2(VAR14, "");
} else if (!VAR3) {
VAR8 = -1;
FUN2(VAR14, "");
} else if (!VAR4) {
VAR8 = -1;
FUN2(VAR14, "");
} else if (!VAR6) {
VAR8 = -1;
FUN2(VAR14, "");
} else if (!(VAR11 = FUN3(VAR2->VAR15))) {
VAR8 = -1;
FUN2(VAR14, "");
} else {
VAR8 = 0;
}

if (VAR8 != 0)
return (0);

FUN2(VAR14, "", VAR3, VAR4);

VAR8 = 0;
if (FUN4(VAR11, VAR16)) {
if (!FUN4(VAR11, VAR17))
VAR7 = 0LL;
if (VAR6->VAR18 == VAR11->VAR19) {
VAR9 = VAR20;
FUN2(VAR14,
"", VAR6->VAR18, VAR20);
} else
VAR9 = VAR6->VAR18;

VAR13 = VAR11->VAR21;
if (!VAR13 || !VAR13->VAR22)
VAR8 = -1;
else if ((VAR8 = (*VAR13->VAR22)(VAR2->
VAR15, VAR9, VAR6, VAR7)) < 0)
FUN2(VAR14, ""%VAR23/%VAR23\"", VAR3, VAR4, VAR8);
}

return (VAR8);
}