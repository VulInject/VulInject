static VAR1
FUN1(VAR2 *VAR3)
{
int		VAR4, VAR5;
boolean_t	VAR6[VAR7];
boolean_t	VAR8;

for (VAR5 = 0; VAR5 < VAR7; VAR5++)
VAR6[VAR5] = VAR9;

for (VAR4 = 0; VAR4 < VAR3->VAR10; VAR4++) {
VAR8 = VAR9;
for (VAR5 = 0; VAR5 < VAR7; VAR5++) {
if (strcmp(VAR3->VAR11[VAR4].VAR12,
VAR13[VAR5].VAR14) == 0) {
if (VAR6[VAR5])
return (VAR15);
else
VAR6[VAR5] = VAR16;
VAR8 = VAR16;
}
}

if (!VAR8)
return (VAR17);
}
return (VAR18);
}