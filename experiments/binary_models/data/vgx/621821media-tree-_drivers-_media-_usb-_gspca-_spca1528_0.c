static void FUN1(struct VAR1 *VAR1,
VAR2 *VAR3,
int VAR4)
{
int VAR5;

VAR5 = 0;
do {
if (VAR3[VAR5] == 0xff) {
FUN2(VAR1, VAR6,
VAR3, VAR5 + 1);
VAR4 -= VAR5;
VAR3 += VAR5;
*VAR3 = 0x00;
VAR5 = 0;
}
} while (++VAR5 < VAR4);
FUN2(VAR1, VAR6, VAR3, VAR4);
}