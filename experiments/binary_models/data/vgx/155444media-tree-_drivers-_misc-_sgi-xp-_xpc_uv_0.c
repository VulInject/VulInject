static enum VAR1
FUN1(struct VAR2 *VAR3)
{
struct VAR4 *VAR5;
int VAR6;

for (VAR6 = 0; VAR6 < VAR3->VAR7; VAR6++) {
VAR5 = &VAR3->VAR8[VAR6].VAR9.VAR10;

FUN2(&VAR5->VAR11);
FUN2(&VAR5->VAR12);
}

return VAR13;
}