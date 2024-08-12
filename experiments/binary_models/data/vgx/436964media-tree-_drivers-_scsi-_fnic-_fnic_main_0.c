static int FUN1(struct VAR1 *VAR2,
int (*VAR3)(struct VAR1 *, int),
int (*VAR4)(struct VAR1 *, int *),
int VAR5)
{
unsigned long VAR6;
int VAR7;
int VAR8;
int VAR9;

VAR9 = 0;

VAR8 = FUN2(VAR2, VAR5);
if (VAR8)
return VAR8;


VAR6 = VAR10 + (VAR11 * 2);
do {
VAR8 = FUN3(VAR2, &VAR7);
VAR9++;
if (VAR8)
return VAR8;
if (VAR7)
return 0;
FUN4(VAR11 / 10);
} while (FUN5(VAR6, VAR10) || (VAR9 < 3));

return -VAR12;
}