struct VAR1 {
int VAR2;
};

struct VAR1 *VAR2;
struct VAR1 *VAR3;
struct VAR1 *VAR4;
struct VAR1 *VAR5;

static void FUN1 (void)
{
struct VAR1 *VAR6;
int VAR7 = 0;
int VAR8 = 1;

VAR6->VAR2 = 1;

if (VAR2) {
VAR2->VAR2 = 1;
}
VAR2->VAR2 = 1;

if (VAR2 && VAR3) {
VAR3->VAR2 = 1;
}

if (VAR2 || VAR3) {
VAR3->VAR2 = 1;
}

if (VAR4) {
VAR7 = 1;
}

if (VAR7) {
VAR4->VAR2 = 1;
}
}