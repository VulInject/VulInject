VAR1
FUN1(int64_t VAR2,
VAR3 *VAR4)
{
struct priority_group_cbarg VAR5;

VAR5.VAR2 = VAR2;
VAR5.VAR6 = VAR7;
VAR5.VAR8 = VAR9;

(void) FUN2(VAR10,
VAR11, &VAR5);

if (VAR5.VAR8) {
FUN3(VAR12, ""
"",
VAR2, VAR5.VAR6);
*VAR4 = VAR5.VAR6;
return (VAR13);
} else {
FUN3(VAR12, ""
"", VAR2);
return (VAR9);
}
}