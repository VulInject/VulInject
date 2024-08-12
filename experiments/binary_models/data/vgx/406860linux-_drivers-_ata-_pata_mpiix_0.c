static void FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
int VAR5 = 0;
int VAR6 = VAR4->VAR7 - VAR8;
struct VAR9 *VAR10 = FUN2(VAR2->VAR11->VAR12);
u16 VAR13;
static const	 
u8 VAR14[][2]	= { { 0, 0 },
{ 0, 0 },
{ 1, 0 },
{ 2, 1 },
{ 2, 3 }, };

FUN3(VAR10, VAR15, &VAR13);


if (VAR4->class == VAR16)
VAR5 |= VAR17;		
if (FUN4(VAR4))
VAR5 |= VAR18;
if (VAR6 > 1)
VAR5 |= VAR19;	


VAR13 &= 0xCCEE;
VAR13 &= ~(0x07  << (4 * VAR4->VAR20));
VAR13 |= VAR5 << (4 * VAR4->VAR20);

VAR13 |= (VAR14[VAR6][0] << 12) | (VAR14[VAR6][1] << 8);
FUN5(VAR10, VAR15, VAR13);


VAR2->VAR21 = VAR4;
}