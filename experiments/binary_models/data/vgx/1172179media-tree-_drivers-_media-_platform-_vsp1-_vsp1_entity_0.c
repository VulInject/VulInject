static int FUN1(const struct VAR1 *VAR2,
const struct VAR1 *VAR3,
u32 VAR4)
{
struct VAR5 *VAR6;

VAR6 = FUN2(VAR3->VAR7);

if (VAR4 & VAR8) {

if (VAR6->VAR9[VAR3->VAR10])
return -VAR11;

VAR6->VAR9[VAR3->VAR10] = VAR2->VAR7;
} else {
VAR6->VAR9[VAR3->VAR10] = NULL;
}

return 0;
}