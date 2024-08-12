static int
FUN1(VAR1 *VAR2)
{
VAR3 *VAR4 = VAR2->VAR5;
int VAR6;

if ((VAR4->VAR7 & VAR8) || VAR4->VAR9 > 1) {

if (VAR4->VAR7 & VAR8)
FUN2("", VAR4->VAR10);
VAR6 = 0;
} else {
FUN2("", VAR4->VAR11, VAR4->VAR10);
VAR6 = (*VAR4->VAR12->VAR13)(VAR2);
}

if (VAR6) {
VAR14 = VAR6; 
FUN2("", VAR4->VAR11);
}

return VAR6;
}