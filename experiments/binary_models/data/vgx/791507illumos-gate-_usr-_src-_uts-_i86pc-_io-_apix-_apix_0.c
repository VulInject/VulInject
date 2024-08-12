static void
FUN1(void)
{
int	VAR1, VAR2, VAR3;

if (!VAR4)
return;

if (++VAR5 == VAR6) {

VAR5 = 0;
}
VAR3 = 0;
for (VAR1 = 0; VAR1 < VAR7; VAR1++) {
if (!FUN2(VAR1))
continue;

if (((VAR2 = VAR8[VAR1].VAR9) != 0) &&
(VAR8[VAR1].VAR10 & (1 << VAR2))) {

int	VAR11;
VAR8[VAR1].VAR12++;
VAR11 = VAR8[VAR1].VAR13[VAR2];
VAR14[VAR1]->VAR15[VAR11]->VAR16++;
}

if (!VAR5 &&
(VAR8[VAR1].VAR12 > VAR3))
VAR3 = VAR8[VAR1].VAR12;
}
if (!VAR5) {
if (VAR3 > VAR17) {

FUN3();
VAR18 = 0;
} else
VAR18++;
}
}