static struct VAR1 *
FUN1(struct VAR2 *VAR3)
{
unsigned int VAR4, VAR5;
short *VAR6;
struct VAR1 *VAR7;
unsigned int VAR8;
VAR9 *VAR10;

assert(VAR3);

VAR6 = VAR3->VAR11.VAR12;
VAR8 = VAR3->VAR11.VAR13 * VAR3->VAR11.VAR14 *
sizeof(VAR15);

VAR7 = FUN2(VAR8);

if (!VAR7)
return NULL;

VAR10 = (VAR15 *)VAR7->VAR16;

for (VAR4 = 0; VAR4 < VAR3->VAR11.VAR13; VAR4++) {
for (VAR5 = 0;
VAR5 < VAR3->VAR11.VAR14;
VAR5 += 4, VAR6 += 4, VAR10++) {
int VAR12 = VAR6[0] << 0 |
VAR6[1] << 7 |
VAR6[2] << 16 |
VAR6[3] << 23;
*VAR10 = VAR12;
}
}
return VAR7;
}