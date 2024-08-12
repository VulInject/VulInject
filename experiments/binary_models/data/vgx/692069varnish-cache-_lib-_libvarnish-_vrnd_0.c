int
FUN1(void *VAR1, size_t VAR2)
{
int VAR3;
char *VAR4 = VAR1;
ssize_t VAR5;

FUN2(VAR1);
VAR3 = open("", VAR6);
if (VAR3 < 0)
return (-1);
while (VAR2 > 0) {
VAR5 = read(VAR3, VAR4, VAR2);
if (VAR5 < 0)
break;
VAR4 += VAR5;
VAR2 -= VAR5;
}
FUN3(&VAR3);
return (VAR2 == 0 ? 0 : -1);
}