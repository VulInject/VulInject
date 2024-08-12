static void FUN1(struct VAR1 *VAR2,
struct VAR1 *VAR3)
{
int VAR4, VAR5;

for (VAR4=0; VAR4<VAR3->VAR6; VAR4++) {
if (VAR7)
goto VAR8;
for (VAR5=0; VAR5<VAR2->VAR6; VAR5++) {
if (strcmp(VAR3->VAR9[VAR4], VAR2->VAR9[VAR5]))
continue;
FUN2(VAR2->VAR10[VAR5]);
if (VAR2->VAR11)
VAR2->VAR11[VAR5] = 0;
VAR2->VAR10[VAR5] = VAR3->VAR10[VAR4];
VAR3->VAR10[VAR4] = NULL;
break;
}
if (VAR5 < VAR2->VAR6)
continue;	
VAR8:

VAR2->VAR6++;
xrealloc(VAR2->VAR9,
(sizeof(char *) * VAR2->VAR6));
xrealloc(VAR2->VAR10,
(sizeof(char *) * VAR2->VAR6));
VAR2->VAR9[VAR2->VAR6-1] = VAR3->VAR9[VAR4];
VAR2->VAR10[VAR2->VAR6-1] =
VAR3->VAR10[VAR4];
VAR3->VAR9[VAR4] = NULL;
VAR3->VAR10[VAR4] = NULL;
}
if (VAR2->VAR11) {
xrealloc(VAR2->VAR11,
(sizeof(VAR12) * VAR2->VAR6));
}
}