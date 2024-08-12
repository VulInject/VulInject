static void FUN1(struct VAR1 *VAR2, int VAR3)
{
int VAR4;
VAR5 *VAR6;
VAR7 *VAR8;


if (!VAR2->VAR9->VAR6)
return;

if (VAR3 == 8) {
VAR6 = VAR2->VAR9->VAR6;
for (VAR4 = 0; VAR4 < VAR2->VAR10; VAR4++)
*VAR6++ = VAR2->VAR11[VAR4] & 0xFF;
} else {
VAR8 = VAR2->VAR9->VAR6;
for (VAR4 = 0; VAR4 < VAR2->VAR10; VAR4++)
*VAR8++ = VAR2->VAR11[VAR4];
}
}