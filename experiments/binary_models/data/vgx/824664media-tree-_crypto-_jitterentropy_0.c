static void FUN1(struct VAR1 *VAR2)
{
unsigned int VAR3 = 0;


FUN2(VAR2);

while (1) {
__u64 VAR4 = 0;

if (VAR2->VAR5 == 1)
VAR4 = FUN2(VAR2);
else
VAR4 = FUN3(VAR2);


if (VAR2->VAR6) {

VAR2->VAR4 ^= VAR4;
VAR2->VAR6 = 0;
continue;
}


VAR2->VAR4 ^= VAR4;
VAR2->VAR4 ^= ((VAR2->VAR4 >> 63) & 1);
VAR2->VAR4 ^= ((VAR2->VAR4 >> 60) & 1);
VAR2->VAR4 ^= ((VAR2->VAR4 >> 55) & 1);
VAR2->VAR4 ^= ((VAR2->VAR4 >> 30) & 1);
VAR2->VAR4 ^= ((VAR2->VAR4 >> 27) & 1);
VAR2->VAR4 ^= ((VAR2->VAR4 >> 22) & 1);
VAR2->VAR4 = FUN4(VAR2->VAR4, 1);


if (++VAR3 >= (VAR7 * VAR2->VAR8))
break;
}
if (VAR2->VAR9)
FUN5(VAR2);
}