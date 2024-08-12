void
FUN1(char *VAR1,
struct VAR2 *VAR3,
u32 VAR4,
const union VAR5 *VAR6)
{
u32 VAR7;
u32 VAR8;

if (!VAR6) {

if (VAR3->VAR9 != VAR10) {
if (VAR4) {
FUN2((VAR11, VAR1,
VAR12,
"",
VAR4,
VAR13
(VAR3->VAR9)));
}

return;
}


VAR7 = VAR3->VAR14->VAR15.VAR16;

if (VAR4 < VAR7) {
FUN3((VAR11, VAR1,
VAR12,
""
"",
VAR4,
VAR7));
} else if (VAR4 > VAR7) {
FUN2((VAR11, VAR1,
VAR12,
""
"",
VAR4,
VAR7));
}

return;
}


VAR8 =
FUN4(VAR6->VAR17.VAR18);

if (VAR4 < VAR8) {
FUN3((VAR11, VAR1, VAR12,
""
"",
VAR4, VAR8));
} else if ((VAR4 > VAR8) &&
!(VAR6->VAR17.VAR18 & VAR19)) {
FUN2((VAR11, VAR1, VAR12,
""
"",
VAR4, VAR8));
}
}