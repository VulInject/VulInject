int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4,
VAR5 *VAR6)
{
int VAR7 = 0;
int VAR8 = 0;
int VAR9 = 0;

VAR4->VAR10 = VAR11;
while ((!VAR9 || VAR9 == -VAR12) && VAR8 < VAR4->VAR13) {
VAR9 = FUN2(VAR2, VAR4, VAR7);
if (!VAR9)
VAR6[VAR8++] = VAR7;
VAR7++;
}
return VAR9;
}