static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
struct VAR5 *VAR6 =
(struct VAR5 *)VAR2->VAR7;
struct VAR8 *VAR9 = FUN2(VAR2);
struct VAR10 *VAR11 = FUN3(VAR9);
unsigned char *VAR12 = (unsigned char *)&VAR11->VAR13;
int VAR14 = VAR6->VAR14;
int VAR15 = VAR4->VAR15.VAR16.VAR15[0];

if (VAR15 == VAR12[VAR14])
return 0;

if (VAR15 >= 0 && VAR15 <= 255) {

VAR12[VAR14] = VAR15;
if (VAR14 > 31)
VAR11->VAR17[1] |= (1 << (VAR14 - 32));
else
VAR11->VAR17[0] |= (1 << VAR14);
} else {

VAR12[VAR14] = 0;
if (VAR14 > 31)
VAR11->VAR17[1] &= ~(1 << (VAR14 - 32));
else
VAR11->VAR17[0] &= ~(1 << VAR14);
}

return 1;
}