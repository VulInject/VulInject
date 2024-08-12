VAR1 FUN1(
VAR2 *VAR3,
const VAR4 *VAR5,
size_t VAR6)
{
uint8_t VAR7[VAR8];
psa_status_t VAR9 = VAR10;

if (VAR3->VAR11 == 0) {
return VAR12;
}


if (VAR6 > sizeof(VAR7)) {
return VAR13;
}

VAR9 = FUN2(VAR3, VAR7, VAR6);
if (VAR9 != VAR14) {
goto VAR15;
}

if (FUN3(VAR5, VAR7, VAR6) != 0) {
VAR9 = VAR16;
}

VAR15:
FUN4(VAR7, sizeof(VAR7));

return VAR9;
}