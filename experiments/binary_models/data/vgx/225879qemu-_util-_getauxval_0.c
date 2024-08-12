static const VAR1 *FUN1(void)
{
VAR1 *VAR2;
ssize_t VAR3 = 512, VAR4, VAR5;
int VAR6;


VAR7 = VAR2 = FUN2(VAR3);
VAR2[0].VAR8 = 0;
VAR2[0].VAR9 = 0;

VAR6 = open("", VAR10);
if (VAR6 < 0) {
return VAR2;
}


VAR4 = read(VAR6, VAR2, VAR3);

if (VAR4 == VAR3) {

do {
VAR5 = VAR3;
VAR3 *= 2;
VAR7 = VAR2 = FUN3(VAR2, VAR3);
VAR4 = read(VAR6, (char *)VAR2 + VAR5, VAR5);
} while (VAR4 == VAR5);
}

close(VAR6);
return VAR2;
}