static VAR1 FUN1(uint8_t VAR2, bool (*VAR3)(VAR4),
VAR4 *VAR5)
{
uint64_t VAR6 = FUN2(100000);
uint32_t VAR7 = 0;

while (!FUN3(VAR6)) {
VAR7 = FUN4(VAR2, VAR8);
if (VAR7 & VAR9) {
FUN5("");
FUN6(VAR2, VAR8, VAR7 & ~VAR9);
return VAR10;
}
if ((*VAR3)(VAR7)) {
if (VAR5)
*VAR5 = VAR7;
return VAR11;
}
}

return VAR12;
}