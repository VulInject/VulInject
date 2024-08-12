static int FUN1(struct VAR1 *VAR1, int VAR2)
{
struct VAR3 *VAR4 = FUN2(&VAR1->VAR5);
static const struct v4l2_control VAR6[] = {
{ VAR7,	 0 },
{ VAR8,	 1 },
{ VAR9, 2 },
{ VAR10,	 3 },
{ VAR11, 4 },
{ VAR12,	 5 },
};
int VAR13;

for (VAR13 = 0; VAR13 < FUN3(VAR6); VAR13++) {
if (VAR6[VAR13].VAR14 == VAR2)
return FUN4(VAR4, VAR15,
VAR6[VAR13].VAR16);
}
return -VAR17;
}