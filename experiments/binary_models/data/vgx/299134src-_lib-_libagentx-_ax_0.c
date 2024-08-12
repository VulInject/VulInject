const char *
FUN1(struct VAR1 *VAR2, uint8_t VAR3,
uint32_t VAR4)
{
static char VAR5[1024];
char *VAR6;
size_t VAR7, VAR8;
int VAR9;

VAR8 = sizeof(VAR5);
VAR6 = VAR5;
if (VAR2->VAR10 == 0)
(void)FUN2(VAR5, "", sizeof(VAR5));
for (VAR7 = 0; VAR7 < VAR2->VAR10; VAR7++) {
if (VAR3 != 0 && VAR3 - 1 == (VAR11)VAR7)
VAR9 = snprintf(VAR6, VAR8, "", VAR2->VAR12[VAR7],
VAR4);
else
VAR9 = snprintf(VAR6, VAR8, "", VAR2->VAR12[VAR7]);
if ((VAR13) VAR9 >= VAR8) {
snprintf(VAR5, sizeof(VAR5), "");
return VAR5;
}
VAR6 += VAR9;
VAR8 -= (VAR13) VAR9;
}
return VAR5;
}