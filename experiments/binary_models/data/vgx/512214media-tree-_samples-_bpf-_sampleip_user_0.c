static int FUN1(int *VAR1, int VAR2)
{
int VAR3;

struct perf_event_attr VAR4 = {
.VAR5 = VAR6,
.VAR2 = 1,
.VAR7 = VAR2,
.VAR8 = VAR9,
.VAR10 = 1,
};

for (VAR3 = 0; VAR3 < VAR11; VAR3++) {
VAR1[VAR3] = FUN2(&VAR4, -1 , VAR3,
-1 , 0 );
if (VAR1[VAR3] < 0) {
fprintf(VAR12, "");
return 1;
}
assert(FUN3(VAR1[VAR3], VAR13,
VAR14[0]) == 0);
assert(FUN3(VAR1[VAR3], VAR15, 0) == 0);
}

return 0;
}