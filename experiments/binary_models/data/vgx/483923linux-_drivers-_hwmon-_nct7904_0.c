static int FUN1(struct VAR1 *VAR2,
unsigned int VAR3, unsigned int VAR4)
{
struct VAR5 *VAR6 = VAR2->VAR6;
int VAR7, VAR8;

VAR7 = FUN2(VAR2, VAR3);
if (VAR7 == 0) {
VAR7 = FUN3(VAR6, VAR4);
if (VAR7 >= 0) {
VAR8 = VAR7;
VAR7 = FUN3(VAR6, VAR4 + 1);
if (VAR7 >= 0)
VAR7 |= VAR8 << 8;
}
}

FUN4(VAR2);
return VAR7;
}