static __inline int FUN1(struct VAR1 *VAR2, struct VAR1 *VAR3);


FUN2(VAR4, VAR1) VAR5;
FUN3(VAR6, VAR1) VAR7, VAR8, VAR9;
FUN4(VAR4, VAR1, VAR10, VAR11)

struct VAR6 *VAR12 = NULL;
struct VAR6 *VAR13 = NULL;

int VAR14 = 0;
int VAR15 = 0;

struct VAR1 *VAR16 = NULL;


int
FUN5(int VAR17)
{
int VAR18;
static int VAR19 = 0;

if (VAR17 < 0 || VAR19)
return (1);

if (VAR17 == 0) {
VAR16 = NULL;
} else {
VAR16 = FUN6(NULL, VAR17, sizeof(struct VAR1));
if (VAR16 == NULL)
return (1);
}

FUN7(&VAR5);
FUN8(&VAR7);
FUN8(&VAR8);
FUN8(&VAR9);

VAR12 = &VAR7;
VAR13 = &VAR8;

for (VAR18 = 0; VAR18 < VAR17; VAR18++)
FUN9(&VAR9, VAR16 + VAR18, VAR20);

VAR15 = VAR14 = VAR17;
VAR19++;

return (0);
}