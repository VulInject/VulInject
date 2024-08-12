static void FUN1(struct VAR1 *VAR1)
{
struct VAR2 *VAR2 = (struct VAR2 *) VAR1;

if (VAR2->VAR3 == VAR4) {
u8 VAR5[] =		
{0xc1, 0x6e, 0x16, 0x00, 0x40, 0x00, 0x00, 0x10};


VAR5[3] = VAR2->VAR6->VAR7 * 2;
VAR5[5] = VAR2->VAR8->VAR7 * 2;
FUN2(VAR1, VAR5);
return;
}
FUN3(VAR1, 0x05, VAR2->VAR6->VAR7);

FUN3(VAR1, 0x06, VAR2->VAR8->VAR7);
}