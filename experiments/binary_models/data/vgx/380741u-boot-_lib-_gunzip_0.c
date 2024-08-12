int FUN1(const unsigned char *VAR1, unsigned long VAR2)
{
int VAR3, VAR4;


VAR3 = 10;
VAR4 = VAR1[3];
if (VAR1[2] != VAR5 || (VAR4 & VAR6) != 0) {
FUN2 ("");
return (-1);
}
if ((VAR4 & VAR7) != 0)
VAR3 = 12 + VAR1[10] + (VAR1[11] << 8);
if ((VAR4 & VAR8) != 0)
while (VAR1[VAR3++] != 0)
;
if ((VAR4 & VAR9) != 0)
while (VAR1[VAR3++] != 0)
;
if ((VAR4 & VAR10) != 0)
VAR3 += 2;
if (VAR3 >= VAR2) {
FUN2 ("");
return (-1);
}
return VAR3;
}