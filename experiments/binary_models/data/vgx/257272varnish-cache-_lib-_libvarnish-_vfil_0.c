static int
FUN1(int VAR1, const char *VAR2, size_t VAR3)
{
ssize_t VAR4;

while (VAR3 > 0) {
VAR4 = write(VAR1, VAR2, VAR3);
if (VAR4 < 0)
return (VAR4);
if (VAR4 == 0)
break;
VAR2 += VAR4;
VAR3 -= VAR4;
}

return (VAR3 == 0 ? 0 : -1);
}