VAR1 FUN1(struct VAR2 *VAR3, const char *VAR4,
void **VAR5, VAR6 *VAR7)
{
struct VAR8 *VAR9;
char *VAR10;
errcode_t VAR11;

FUN2(VAR3, VAR12);
for (VAR9 = VAR3->VAR13; VAR9 < VAR3->VAR13 + VAR3->VAR14; VAR9++) {
if (strcmp(VAR9->VAR15, VAR4))
continue;

if (!(VAR3->VAR16 & VAR17) &&
((strcmp(VAR4, "") == 0) ||
(strcmp(VAR4, "") == 0))) {
VAR11 = FUN3(VAR9->VAR5, VAR9->VAR7,
VAR5, VAR7);
return VAR11;
} else {
VAR11 = FUN4(VAR9->VAR7, &VAR10);
if (VAR11)
return VAR11;
memcpy(VAR10, VAR9->VAR5, VAR9->VAR7);
*VAR5 = VAR10;
*VAR7 = VAR9->VAR7;
return 0;
}
}

return VAR18;
}