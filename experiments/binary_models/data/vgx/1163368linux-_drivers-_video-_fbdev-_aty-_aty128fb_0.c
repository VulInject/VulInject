static int FUN1(u32 VAR1, struct VAR2 *VAR3,
const struct VAR4 *VAR5)
{
const struct aty128_constants VAR6 = VAR5->VAR7;
static const unsigned char VAR8[] = { 1, 2, 4, 8, 3, 6, 12 };
u32 VAR9;
u32 VAR10;        
int VAR11 = 0;
u32 VAR12, VAR13;

VAR10 = 100000000 / VAR1;	


if (VAR10 > VAR6.VAR14)
VAR10 = VAR6.VAR14;
if (VAR10 * 12 < VAR6.VAR15)
VAR10 = VAR6.VAR15/12;


for (VAR11 = 0; VAR11 < FUN2(VAR8); VAR11++) {
VAR9 = VAR8[VAR11] * VAR10;
if (VAR9 >= VAR6.VAR15 && VAR9 <= VAR6.VAR14) {
VAR3->VAR16 = VAR8[VAR11];
break;
}
}

if (VAR11 == FUN2(VAR8))
return -VAR17;


VAR12 = VAR6.VAR18 * VAR9;
VAR13 = VAR6.VAR19;

VAR3->VAR20 = FUN3(VAR12, VAR13);
VAR3->VAR10 = VAR10;

FUN4(""
"", VAR3->VAR16,
VAR3->VAR20, VAR10, VAR9,
VAR6.VAR18, VAR1);

return 0;
}