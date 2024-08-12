static VAR1 FUN1(
struct VAR2 *VAR3, const char *VAR4, int VAR5)
{
struct VAR6 *VAR7 = VAR3->VAR7;
unsigned long long VAR8;
int VAR9;
int VAR10 = 0;

if (FUN2(VAR4, "", 5) == 0) {
if (VAR7->VAR11->VAR12) {
FUN3(VAR7, VAR3);
FUN4(VAR7->VAR13.VAR14, "");
}
} else {
if (VAR5 > 10 && VAR4[1] == '') {
if (VAR4[0] == '')
VAR10 = 1;
else if (VAR4[0] == '')
VAR10 = -1;
else
return -VAR15;
VAR4 += 2;
}
VAR9 = FUN5(VAR4, 10, &VAR8);
if (VAR9 < 0)
return VAR9;
if (VAR10 && VAR7->VAR11->VAR16) {
FUN6(VAR7, VAR3, VAR10 * VAR8);
FUN4(VAR7->VAR13.VAR14,
"",
VAR10 * VAR8);
} else if (VAR7->VAR11->VAR17) {
if (VAR10)
VAR8 = FUN7(VAR7, VAR3) +
VAR10 * VAR8;
FUN8(VAR7, VAR3, VAR8);
FUN4(VAR7->VAR13.VAR14,
"", VAR8);
}
}

FUN9(VAR7, VAR3);
return VAR5;
}