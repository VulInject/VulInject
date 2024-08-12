void
FUN1(bus_space_tag_t VAR1, void *VAR2)
{
u_long VAR3, VAR4, VAR5;
int VAR6, VAR7;


for (VAR6 = 0; VAR6 < VAR8; VAR6++) {
VAR4 = VAR9[VAR6].VAR4;
VAR3 = VAR9[VAR6].VAR3 & ~VAR10;
VAR5 = VAR9[VAR6].VAR4 + VAR3;

if (VAR4 <= VAR11 && VAR5 >= VAR12) {

if (VAR4 < VAR11) {
VAR7 = FUN2(FUN3(VAR2),
VAR4, (VAR11 - VAR4),
VAR13 |
(FUN4(VAR2) ? VAR14 : 0));
if (VAR7) {
FUN5(""
""
"", VAR6,
VAR4, (VAR15) VAR11 - 1);
}
}
if (VAR5 > VAR12) {
VAR7 = FUN2(FUN3(VAR2),
VAR12, (VAR5 - VAR12),
VAR13 |
(FUN4(VAR2) ? VAR14 : 0));
if (VAR7) {
FUN5(""
""
"", VAR6,
(VAR15) VAR12, VAR5 - 1);
}
}
} else {
VAR7 = FUN2(FUN3(VAR2),
VAR4, VAR3,
VAR13 |
(FUN4(VAR2) ? VAR14 : 0));
if (VAR7) {
FUN5(""
"", VAR6, VAR4,
VAR4 + (VAR3 - 1));
}
}
}
}