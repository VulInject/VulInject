static void FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4, union VAR5 *VAR6)
{
unsigned char VAR7[VAR8];
struct VAR9 *VAR10 = &VAR2->VAR11.VAR12.VAR4.VAR10;
struct VAR13 *VAR14 = (struct VAR13 *) VAR4;
struct VAR15 *VAR16 = (struct VAR15 *) VAR4;

if (FUN2(VAR4)) {
memset(VAR6, 0, sizeof *VAR6);
} else if ((VAR4->VAR17 == VAR18) &&
((FUN3(VAR16->VAR19.VAR20[0]) & 0xFFF0FFFF) ==
0xFF10A01B)) {

memcpy(VAR6, &VAR16->VAR19, sizeof *VAR6);
} else if (VAR4->VAR17 == VAR21) {
memcpy(VAR6, &((struct VAR22 *) VAR4)->VAR23, sizeof *VAR6);
} else if (VAR4->VAR17 == VAR18) {
FUN4(&VAR16->VAR19, VAR10->VAR24, VAR7);
if (VAR2->VAR11.VAR25 == VAR26)
VAR7[7] = 0x01;	
*VAR6 = *(union VAR5 *) (VAR7 + 4);
} else {
FUN5(VAR14->VAR27.VAR28, VAR10->VAR24, VAR7);
if (VAR2->VAR11.VAR25 == VAR26)
VAR7[7] = 0x01;	
*VAR6 = *(union VAR5 *) (VAR7 + 4);
}
}