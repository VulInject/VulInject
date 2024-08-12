struct VAR1 *
FUN1(const struct VAR2 *VAR2,
struct VAR3 *VAR4)
{
size_t VAR5;
size_t VAR6;

VAR5 = VAR4->VAR5;
for (VAR6 = VAR4->VAR7; VAR6 <= VAR2->VAR8; VAR6++) {
struct VAR1 *VAR9;
size_t VAR10;

for (VAR10 = 0, VAR9 = VAR2->VAR11[VAR6]; VAR9 != NULL;
VAR10++, VAR9 = VAR9->VAR12) {
if (VAR10 == VAR5) {
if (VAR9->VAR12) {
VAR4->VAR7 = VAR9->VAR13 & VAR2->VAR8;
VAR4->VAR5 = VAR5 + 1;
} else {
VAR4->VAR7 = (VAR9->VAR13 & VAR2->VAR8) + 1;
VAR4->VAR5 = 0;
}
return VAR9;
}
}
VAR5 = 0;
}

VAR4->VAR7 = 0;
VAR4->VAR5 = 0;
return NULL;
}