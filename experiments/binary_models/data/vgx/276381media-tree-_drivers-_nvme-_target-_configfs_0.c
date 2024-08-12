static VAR1 FUN1(struct VAR2 *VAR3,
const char *VAR4, size_t VAR5)
{
struct VAR6 *VAR7 = FUN2(VAR3);

if (VAR7->VAR8) {
FUN3("");
FUN3("");
return -VAR9;
}

if (FUN4(VAR4, "")) {
VAR7->VAR10.VAR11 = VAR12;
} else if (FUN4(VAR4, "")) {
VAR7->VAR10.VAR11 = VAR13;
} else if (FUN4(VAR4, "")) {
VAR7->VAR10.VAR11 = VAR14;
} else {
FUN3("", VAR4);
return -VAR15;
}

return VAR5;
}