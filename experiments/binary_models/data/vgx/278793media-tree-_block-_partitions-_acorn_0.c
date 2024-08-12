static int FUN1(struct VAR1 *VAR2,
unsigned long VAR3)
{
Sector VAR4;
unsigned char *VAR5 = FUN2(VAR2, VAR3, &VAR4);
int VAR6 = 0;

if (VAR5) {
if (memcmp(VAR5, "", 9) == 0)
VAR6 = 1;
FUN3(VAR4);
}

return VAR6;
}