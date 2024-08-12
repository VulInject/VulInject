static void
FUN1(struct VAR1 *VAR2, socklen_t VAR3,
int VAR4, const char *VAR5, const char *VAR6,
int VAR7, time_t VAR8, time_t VAR9)
{
char VAR10[VAR11 + 16 + 9];
int VAR12;

switch(VAR4) {
case VAR13:
sendto(VAR14, "", 9, 0, VAR2, VAR3);
break;
case VAR15:
VAR12 = snprintf(VAR10, sizeof(VAR10), "",
VAR5, VAR6, VAR7,
(VAR16)VAR8, (VAR16)VAR9);
sendto(VAR14, VAR10, VAR12, 0, VAR2, VAR3);
break;
case VAR17:
sendto(VAR14,"", 8, 0, VAR2, VAR3);
break;
}
}