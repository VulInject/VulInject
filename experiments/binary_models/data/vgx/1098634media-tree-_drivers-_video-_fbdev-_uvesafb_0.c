static int FUN1(unsigned VAR1, unsigned VAR2, unsigned VAR3,
unsigned VAR4, unsigned VAR5,
struct VAR6 *VAR7)
{
struct uvesafb_pal_entry VAR8;
int VAR9 = 16 - VAR10;
int VAR11 = 0;

if (VAR1 >= VAR7->VAR12.VAR13)
return -VAR14;

if (VAR7->VAR15.VAR16 == 8) {
VAR8.VAR2   = VAR2   >> VAR9;
VAR8.VAR3 = VAR3 >> VAR9;
VAR8.VAR4  = VAR4  >> VAR9;
VAR8.VAR17   = 0;

VAR11 = FUN2(&VAR8, 1, VAR1, VAR7);
} else if (VAR1 < 16) {
switch (VAR7->VAR15.VAR16) {
case 16:
if (VAR7->VAR15.VAR2.VAR18 == 10) {

((VAR19 *) (VAR7->VAR20))[VAR1] =
((VAR2   & 0xf800) >>  1) |
((VAR3 & 0xf800) >>  6) |
((VAR4  & 0xf800) >> 11);
} else {

((VAR19 *) (VAR7->VAR20))[VAR1] =
((VAR2   & 0xf800)      ) |
((VAR3 & 0xfc00) >>  5) |
((VAR4  & 0xf800) >> 11);
}
break;

case 24:
case 32:
VAR2   >>= 8;
VAR3 >>= 8;
VAR4  >>= 8;
((VAR19 *)(VAR7->VAR20))[VAR1] =
(VAR2   << VAR7->VAR15.VAR2.VAR18)   |
(VAR3 << VAR7->VAR15.VAR3.VAR18) |
(VAR4  << VAR7->VAR15.VAR4.VAR18);
break;
}
}
return VAR11;
}