void FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2, struct VAR3,
VAR5);
u8  VAR6 = 0x00, VAR7 = 0x00;
unsigned long VAR8;

VAR6 = FUN3(VAR4, 0x117);
VAR7 = VAR6 & 0xfe;
FUN4(VAR4, 0x117, VAR7);

FUN5(&VAR4->VAR9, VAR8);
VAR4->VAR10 = 1;
FUN6(&VAR4->VAR9, VAR8);
do {
FUN7(100);
} while (VAR4->VAR10 == 1);
FUN4(VAR4, 0x117, VAR6);
}