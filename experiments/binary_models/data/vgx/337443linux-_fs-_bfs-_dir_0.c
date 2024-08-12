static struct VAR1 *FUN1(struct VAR2 *VAR3,
const struct VAR4 *VAR5,
struct VAR6 **VAR7)
{
unsigned long VAR8 = 0, VAR9 = 0;
struct VAR1 *VAR10 = NULL;
struct VAR6 *VAR11;
const unsigned char *VAR12 = VAR5->VAR12;
int VAR13 = VAR5->VAR14;

*VAR7 = NULL;
if (VAR13 > VAR15)
return NULL;

while (VAR8 * VAR16 + VAR9 < VAR3->VAR17) {
if (!VAR10) {
VAR10 = FUN2(VAR3->VAR18, FUN3(VAR3)->VAR19 + VAR8);
if (!VAR10) {
VAR8++;
continue;
}
}
VAR11 = (struct VAR6 *)(VAR10->VAR20 + VAR9);
VAR9 += VAR21;
if (FUN4(VAR11->VAR22) &&
FUN5(VAR13, VAR12, VAR11->VAR12)) {
*VAR7 = VAR11;
return VAR10;
}
if (VAR9 < VAR10->VAR23)
continue;
FUN6(VAR10);
VAR10 = NULL;
VAR9 = 0;
VAR8++;
}
FUN6(VAR10);
return NULL;
}