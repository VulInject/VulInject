static int FUN1(struct VAR1 *VAR2)
{
unsigned int VAR3, VAR4, VAR5, VAR6;

if (FUN2(VAR2)) {

VAR6 = FUN3(VAR2);
VAR3 = VAR7;
} else {

VAR6 = 1;
VAR3 = FUN3(VAR2) * VAR7;
}

for (VAR5 = 0; VAR5 < VAR6; VAR5++) {
struct VAR8 *VAR9 = &VAR2->VAR10[VAR5];

for (VAR4 = 0; VAR4 < 2; VAR4++)
VAR9->VAR11[VAR4].VAR12 = VAR3;
}

return 0;
}