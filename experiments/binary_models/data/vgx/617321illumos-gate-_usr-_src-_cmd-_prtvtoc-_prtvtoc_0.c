static void
FUN1(struct VAR1 *VAR2, VAR3 *VAR4)
{
VAR3 *VAR5;
ushort_t VAR6;
int VAR7 = 0;

for (VAR5 = VAR4; VAR5->VAR8; ++VAR5)
VAR7++;

(void) FUN2("",
VAR4->VAR9, VAR4->VAR8, VAR7);

for (VAR6 = 0; VAR6 < VAR2->VAR10; ++VAR6) {
if (VAR2->VAR11[VAR6].VAR12 == 0 && VAR6 != 2)
(void) FUN2("", VAR6);
}
(void) FUN2("");
}