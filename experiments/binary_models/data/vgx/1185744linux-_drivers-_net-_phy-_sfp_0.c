static int FUN1(struct VAR1 *VAR1, struct VAR2 *VAR3,
VAR4 *VAR5)
{
unsigned int VAR6, VAR7, VAR8;
int VAR9;

if (VAR3->VAR8 == 0)
return -VAR10;

VAR6 = VAR3->VAR11;
VAR7 = VAR3->VAR11 + VAR3->VAR8;
if (VAR6 < VAR12) {
VAR8 = FUN2(unsigned int, VAR7, VAR12);
VAR8 -= VAR6;

VAR9 = FUN3(VAR1, false, VAR6, VAR5, VAR8);
if (VAR9 < 0)
return VAR9;

VAR6 += VAR8;
VAR5 += VAR8;
}
if (VAR6 < VAR13 && VAR7 > VAR12) {
VAR8 = FUN2(unsigned int, VAR7, VAR13);
VAR8 -= VAR6;
VAR6 -= VAR12;

VAR9 = FUN3(VAR1, true, VAR6, VAR5, VAR8);
if (VAR9 < 0)
return VAR9;
}
return 0;
}