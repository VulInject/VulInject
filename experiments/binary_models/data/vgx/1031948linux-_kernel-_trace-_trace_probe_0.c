int FUN1(struct VAR1 *VAR2, struct VAR1 *VAR3)
{
int VAR4;


if (VAR2->VAR5 < VAR3->VAR5)
return VAR2->VAR5 + 1;
if (VAR2->VAR5 > VAR3->VAR5)
return VAR3->VAR5 + 1;

for (VAR4 = 0; VAR4 < VAR2->VAR5; VAR4++) {
if ((VAR3->VAR5 <= VAR4) ||
((VAR2->VAR6[VAR4].VAR7 != VAR3->VAR6[VAR4].VAR7) ||
(VAR2->VAR6[VAR4].VAR8 != VAR3->VAR6[VAR4].VAR8) ||
strcmp(VAR2->VAR6[VAR4].VAR9, VAR3->VAR6[VAR4].VAR9)))
return VAR4 + 1;
}

return 0;
}