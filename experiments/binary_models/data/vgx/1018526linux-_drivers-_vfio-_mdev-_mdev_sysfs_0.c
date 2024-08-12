int FUN1(struct VAR1 *VAR2)
{
int VAR3, VAR4;

VAR2->VAR5 = FUN2("",
NULL, &VAR2->VAR6->VAR7);
if (!VAR2->VAR5)
return -VAR8;

for (VAR4 = 0; VAR4 < VAR2->VAR9; VAR4++) {
VAR3 = FUN3(VAR2, VAR2->VAR10[VAR4]);
if (VAR3)
goto VAR11;
}
return 0;

VAR11:
while (--VAR4 >= 0)
FUN4(VAR2->VAR10[VAR4]);
return 0;
}