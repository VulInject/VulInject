static int FUN1(unsigned VAR1, unsigned VAR2, unsigned VAR3,
unsigned VAR4, unsigned VAR5,
struct VAR6 *VAR6)
{


if (VAR1 >= VAR6->VAR7.VAR8)
return 1;

if (VAR6->VAR9.VAR10 <= 8) {
switch (VAR6->VAR9.VAR10) {
case 1:

break;
case 2:
case 4:
case 8:
if (VAR11)
FUN2(VAR1, VAR2 >> 8, VAR3 >> 8,
VAR4 >> 8, VAR6);
else
return 1;
break;
}
} else if (VAR1 < 16) {
switch (VAR6->VAR9.VAR10) {
case 16:
if (VAR6->VAR9.VAR2.VAR12 == 10) {

((VAR13*) (VAR6->VAR14))[VAR1] =
((VAR2   & 0xf800) >>  1) |
((VAR3 & 0xf800) >>  6) |
((VAR4  & 0xf800) >> 11) |
((VAR5 != 0) << 15);
} else {

((VAR13*) (VAR6->VAR14))[VAR1] =
((VAR2   & 0xf800) >>  0) |
((VAR3 & 0xfc00) >>  5) |
((VAR4  & 0xf800) >> 11);
}
break;

case 24:
case 32:
VAR2   >>= 8;
VAR3 >>= 8;
VAR4  >>= 8;
((VAR13 *)(VAR6->VAR14))[VAR1] =
(VAR2   << VAR6->VAR9.VAR2.VAR12) |
(VAR3 << VAR6->VAR9.VAR3.VAR12) |
(VAR4  << VAR6->VAR9.VAR4.VAR12);
break;
}
}

return 0;
}