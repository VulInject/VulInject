static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = VAR2->VAR4;
uint32_t VAR5 = 0;
unsigned VAR6;
int VAR7;

FUN2(VAR8, 0xCAFEDEAD);
VAR7 = FUN3(VAR2, 3);
if (VAR7)
return VAR7;

FUN4(VAR2, FUN5(VAR8, 0));
FUN4(VAR2, 0xDEADBEEF);
FUN6(VAR2);
for (VAR6 = 0; VAR6 < VAR4->VAR9; VAR6++) {
VAR5 = FUN7(VAR8);
if (VAR5 == 0xDEADBEEF)
break;
FUN8(1);
}

if (VAR6 >= VAR4->VAR9)
VAR7 = -VAR10;

return VAR7;
}