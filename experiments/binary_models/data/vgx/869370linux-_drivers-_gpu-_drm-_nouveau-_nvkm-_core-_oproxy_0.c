static void *
FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
if (VAR4->VAR5->VAR6[0])
VAR4->VAR5->VAR6[0](VAR4);
FUN3(&VAR4->VAR2);
if (VAR4->VAR5->VAR6[1])
VAR4->VAR5->VAR6[1](VAR4);
return VAR4;
}