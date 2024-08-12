static void FUN1(struct VAR1 *VAR2, void *VAR3)
{
struct VAR4 *VAR5 = VAR3;
unsigned int VAR6;

for (VAR6 = 0; VAR6 < VAR5->VAR7; ++VAR6) {
struct VAR8 *VAR9 = &VAR5->VAR10[VAR6];

FUN2(&VAR9->VAR9);
}

FUN3(VAR5->VAR10);

FUN4(VAR5->VAR5);
}