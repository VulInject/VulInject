static struct VAR1 *FUN1(struct VAR1 *VAR2,
struct VAR1 *VAR3)
{
struct VAR1 *VAR4 = VAR2, *VAR5 = VAR3,
**VAR6 = &VAR2;

if (!VAR4)
return VAR5;
if (!VAR5)
return VAR4;

if (VAR4->VAR7 <= VAR5->VAR7) {
do {
VAR6 = &VAR4->VAR8;
if (!(VAR4 = *VAR6)) {
*VAR6 = VAR5;
return VAR2;
}
} while (VAR4->VAR7 <= VAR5->VAR7);
}
for (;;) {
*VAR6 = VAR5;
do {
VAR6 = &VAR5->VAR8;
if (!(VAR5 = *VAR6))  {
*VAR6 = VAR4;
return VAR2;
}
} while (VAR4->VAR7 > VAR5->VAR7);
*VAR6 = VAR4;
do {
VAR6 = &VAR4->VAR8;
if (!(VAR4 = *VAR6)) {
*VAR6 = VAR5;
return VAR2;
}
} while (VAR4->VAR7 <= VAR5->VAR7);
}
}