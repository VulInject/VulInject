static int
FUN1(struct VAR1 *VAR2,
struct bnxt_tc_stats_batch VAR3[],
int *VAR4)
{
struct VAR5 *VAR6 = VAR2->VAR6;
struct VAR7 *VAR8 = &VAR6->VAR8;
void *VAR9;
int VAR10, VAR11;

FUN2(VAR8);

VAR10 = 0;
for (VAR11 = 0; VAR11 < VAR12; VAR11++) {
VAR9 = FUN3(VAR8);
if (FUN4(VAR9)) {
VAR11 = 0;
if (FUN5(VAR9) == -VAR13) {
continue;
} else {
VAR10 = FUN5(VAR9);
goto VAR14;
}
}


if (!VAR9)
goto VAR14;

VAR3[VAR11].VAR9 = VAR9;
}
VAR14:
FUN6(VAR8);
*VAR4 = VAR11;
return VAR10;
}