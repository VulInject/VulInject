static int FUN1(struct VAR1 *VAR2)
{
int VAR3;

for (VAR3 = 0; VAR3 < VAR4; VAR3++) {
struct VAR5 *VAR6 = &VAR2->VAR7[VAR3];

VAR6->VAR8 = VAR3;
VAR6->VAR9 = VAR2->VAR9;
VAR6->VAR10 = FUN2(0, VAR11);
if (!VAR6->VAR10)
goto VAR12;
}

return 0;
VAR12:
FUN3(VAR2);
return -VAR13;
}