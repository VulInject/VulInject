static void
FUN1()
{
uint32_t	VAR1;
uint8_t		VAR2;

FUN2(&VAR3);
do {
VAR1 = FUN3(0, VAR4, 0, VAR5);
} while (VAR1 != 0x84c48086UL);


do {

VAR1 = FUN3(0, VAR4, 0, VAR6);
} while (VAR1 == 0x84c48086UL);

VAR2 = FUN4(0, VAR4, 0, VAR6);
VAR2 &= ~0x01;
FUN5(0, VAR4, 0, VAR6, VAR2);
}