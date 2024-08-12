struct VAR1 *FUN1(struct VAR2 *VAR2,
struct VAR1 *VAR3)
{
static int VAR4;

if (!VAR2 || !VAR2->VAR5)
return NULL;

if (!VAR3) {
VAR4 = 0;
return VAR2->VAR5[0];
}

if (VAR4 < VAR2->VAR6 && VAR3 == VAR2->VAR5[VAR4]) {
VAR4++;
if (VAR4 == VAR2->VAR6)
return NULL;
return VAR2->VAR5[VAR4];
}

for (VAR4 = 1; VAR4 < VAR2->VAR6; VAR4++) {
if (VAR3 == VAR2->VAR5[VAR4 - 1])
return VAR2->VAR5[VAR4];
}
return NULL;
}

struct VAR7 {
const char *VAR8;
unsigned long long VAR9;
};