static VAR1 *FUN1(VAR2 *VAR3, const VAR4 *VAR5) {
VAR1 *VAR6 = NULL;

FUN2(VAR3->VAR7);
VAR6 = VAR3->VAR7->VAR6;
while (VAR6) {
if (!strcmp(VAR6->VAR5, VAR5))
return VAR6;
VAR6 = VAR6->VAR8;
}
return VAR6;
}