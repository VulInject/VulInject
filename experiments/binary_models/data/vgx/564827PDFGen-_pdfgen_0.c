static int FUN1(struct VAR1 *VAR2, int VAR3, void *VAR4)
{
int VAR5 = FUN2(VAR2, VAR3);
if (VAR5 < 0)
return -VAR6;
if (VAR5 >= VAR2->VAR7) {
void ***VAR8 = (void ***)realloc(VAR2->VAR8, (VAR2->VAR7 + 1) *
sizeof(*VAR2->VAR8));
if (!VAR8)
return -VAR9;
VAR2->VAR7++;
VAR2->VAR8 = VAR8;
VAR2->VAR8[VAR2->VAR7 - 1] =
(void **)calloc(FUN3(VAR2, VAR2->VAR7 - 1),
sizeof(void *));
if (!VAR2->VAR8[VAR2->VAR7 - 1]) {
VAR2->VAR7--;
return -VAR9;
}
}
VAR2->VAR10++;
VAR2->VAR8[VAR5][FUN4(VAR2, VAR5, VAR3)] = VAR4;
return VAR2->VAR10 - 1;
}