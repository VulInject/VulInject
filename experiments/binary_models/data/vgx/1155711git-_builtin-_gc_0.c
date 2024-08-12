static int FUN1(int VAR1, int VAR2)
{
if (VAR1)
return FUN2();
else
return FUN3();
}

enum VAR3 {
VAR4 = -1,
VAR5,
VAR6,
VAR7,
VAR8,
VAR9,
};

static const struct {
const char *VAR10;
int (*VAR11)(void);
int (*VAR12)(int VAR1, int VAR2);
} VAR13[] = {