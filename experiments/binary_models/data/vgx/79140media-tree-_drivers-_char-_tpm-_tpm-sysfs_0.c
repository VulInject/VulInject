static VAR1 FUN1(struct VAR2 *VAR3, struct VAR4 *VAR5,
char *VAR6)
{
cap_t VAR7;
u8 VAR8[VAR9];
ssize_t VAR10;
int VAR11, VAR12, VAR13;
char *VAR14 = VAR6;
struct VAR15 *VAR16 = FUN2(VAR3);

VAR10 = FUN3(VAR16, VAR17, &VAR7,
"",
sizeof(VAR7.VAR13));
if (VAR10)
return 0;

VAR13 = FUN4(VAR7.VAR13);
for (VAR11 = 0; VAR11 < VAR13; VAR11++) {
VAR10 = FUN5(VAR16, VAR11, VAR8);
if (VAR10)
break;
VAR14 += sprintf(VAR14, "", VAR11);
for (VAR12 = 0; VAR12 < VAR9; VAR12++)
VAR14 += sprintf(VAR14, "", VAR8[VAR12]);
VAR14 += sprintf(VAR14, "");
}
return VAR14 - VAR6;
}