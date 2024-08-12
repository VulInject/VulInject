int
FUN1(int VAR1, caddr_t VAR2, VAR3 *VAR4)
{
char VAR5;
int VAR6;
char VAR7[VAR8 + 1];
int VAR9 = 0;
int VAR10 = 0;
int VAR11 = 0;
int VAR12 = 0;

if ((VAR6 = FUN2(VAR1, VAR2,
VAR4->VAR13->VAR14, VAR4->VAR13->VAR15)) < 0) {
return (VAR6);
}

if ((FUN3(VAR1, 1)) != 0) {
(void) fprintf(VAR16,
FUN4(""));
syslog(VAR17,
"");
return (VAR18);
}




(void) memset(VAR7, 0, VAR8 + 1);
while (VAR10 < VAR8) {
(void) signal(VAR19, VAR20);
(void) FUN5(2);
VAR21 = 0;
VAR9 = read(VAR1, &VAR5, 1);
(void) FUN5(0);
if (VAR21 == VAR22) {
if (VAR11 == 0) {
FUN6(VAR23,
FUN4("" \
""));
VAR11++;
}



if (VAR12++ >= VAR24) {
syslog(VAR17, "");
break;
}
} else {
if ((VAR7[VAR10++] = VAR5) == '' || (VAR9 == 0))
break;
}
}
if (VAR10 > 1)
syslog(VAR17, "",
VAR7);

if (VAR11 && (VAR12 < VAR24)) {
(void) fprintf(VAR16, FUN4(""));
FUN6(VAR25, "");
}

return (VAR26);
}