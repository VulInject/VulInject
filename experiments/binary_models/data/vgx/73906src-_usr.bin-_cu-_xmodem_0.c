int
FUN1(char *VAR1)
{
for (;;) {
switch (read(VAR2, VAR1, 1)) {
case -1:
if (VAR3 == VAR4 && !VAR5)
continue;
return (-1);
case 0:
VAR3 = VAR6;
return (-1);
case 1:
return (0);
}
}
}