static int FUN1(struct VAR1 *VAR2, unsigned long VAR3,
const char *VAR4, size_t VAR5)
{
u_char VAR6[17];
size_t VAR7, VAR8;
int VAR9;


VAR6[0] = 0xff;

while (VAR5 > 0) {
VAR8 = FUN2(VAR10, VAR5 + 1, 17);
VAR9 = FUN3(VAR2, VAR3, VAR8, &VAR7, VAR6);
if (VAR9 < 0)
return VAR9;
VAR7--;
if (memcmp(VAR6, VAR4, VAR7) != 0)
return 0;
VAR6[0] = VAR6[VAR7];
VAR5 -= VAR7;
VAR3 += VAR7;
VAR4 += VAR7;
}


if (VAR6[0])
return 0;

return 1;
}