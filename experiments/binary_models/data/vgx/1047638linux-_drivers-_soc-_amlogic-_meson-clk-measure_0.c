static int FUN1(struct VAR1 *VAR2,
unsigned int *VAR3)
{
unsigned int VAR4 = VAR5;
int VAR6;


do {
VAR6 = FUN2(VAR2, VAR4);
if (VAR6 >= 0)
*VAR3 = (2 * 1000000) / VAR4;
else
VAR4 -= VAR7;
} while (VAR4 >= VAR8 && VAR6 == -VAR9);

return VAR6;
}