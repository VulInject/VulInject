static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
int VAR5;
unsigned char VAR6 = 0;

if (FUN2(VAR7))
return -VAR8;

for (VAR5 = VAR2->VAR9->VAR10 - 1; VAR5 >= 0; VAR5--) {
struct VAR11 *VAR12 = FUN3(VAR2->VAR9->VAR9[VAR5]);

if (VAR12)
VAR6 = FUN4(VAR6,
FUN5(VAR12)->VAR13);
}
if (FUN6(VAR6 > VAR14))
return -VAR8;


FUN7(VAR4).VAR9 = FUN8(VAR2->VAR9);
if (!FUN7(VAR4).VAR9)
return -VAR15;

for (VAR5 = VAR2->VAR9->VAR10 - 1; VAR5 >= 0; VAR5--)
FUN9(VAR2->VAR9->VAR16, VAR2->VAR9->VAR9[VAR5]);
return VAR6;
}