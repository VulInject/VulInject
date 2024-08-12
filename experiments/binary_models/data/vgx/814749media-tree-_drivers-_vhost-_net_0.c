static int FUN1(struct VAR1 *VAR2)
{
bool VAR3;
int VAR4;

for (VAR4 = 0; VAR4 < VAR5; ++VAR4) {
VAR3 = VAR6 & (0x1 << VAR4);
if (!VAR3)
continue;
VAR2->VAR7[VAR4].VAR8 = FUN2(sizeof(*VAR2->VAR7[VAR4].VAR8) *
VAR9, VAR10);
if  (!VAR2->VAR7[VAR4].VAR8)
goto VAR11;
}
return 0;

VAR11:
FUN3(VAR2);
return -VAR12;
}