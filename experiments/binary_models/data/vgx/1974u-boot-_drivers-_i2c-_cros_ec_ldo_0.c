static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4,
int VAR5)
{
bool VAR6 = VAR5 > 1;
int VAR7, VAR8;


if (!VAR5 || !VAR4->VAR9 || (VAR4->VAR10 & VAR11)) {
FUN2("", VAR12);
goto VAR13;
}

VAR7 = VAR4->VAR14[0] - VAR15;
if (VAR7 < 1 || VAR7 > VAR16) {
FUN2("", VAR12, VAR7);
goto VAR13;
}

if (VAR6) {
uint8_t VAR17;

VAR8 = FUN3(VAR2->VAR18, VAR7, &VAR17);
if (!VAR8)
VAR4[1].VAR14[0] = VAR17 ?
VAR19 | VAR20 : 0;
} else {
bool VAR21 = VAR4->VAR14[1] & VAR19;

VAR8 = FUN4(VAR2->VAR18, VAR7, VAR21);
}

return VAR8;

VAR13:

return -VAR22;
}