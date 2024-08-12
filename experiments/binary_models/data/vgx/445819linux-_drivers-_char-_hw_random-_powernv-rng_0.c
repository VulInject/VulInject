static int FUN1(struct VAR1 *VAR2, void *VAR3, size_t VAR4, bool VAR5)
{
unsigned long *VAR6;
int VAR7, VAR8;


VAR8 = VAR4 / sizeof(unsigned long);

VAR6 = (unsigned long *)VAR3;

for (VAR7 = 0; VAR7 < VAR8; VAR7++)
FUN2(VAR6++);

return VAR8 * sizeof(unsigned long);
}

static struct hwrng VAR9 = {
.VAR10 = "",
.read = VAR11,
};