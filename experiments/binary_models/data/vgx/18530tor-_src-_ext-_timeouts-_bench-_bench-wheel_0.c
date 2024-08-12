static void *FUN1(struct VAR1 *VAR1, size_t VAR2, int VAR3) {
struct VAR4 *VAR5;
size_t VAR6;
int VAR7;

VAR5 = FUN2(VAR8, &VAR7);

for (VAR6 = 0; VAR6 < VAR2; VAR6++) {
FUN3(&VAR1[VAR6], 0);
}

VAR9 = VAR3;

return VAR5;
}