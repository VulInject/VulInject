static int FUN1(struct VAR1 *VAR2)
{
int VAR3;

if (!FUN2(VAR2))

FUN3(VAR2);

FUN4(VAR2, VAR4);


FUN5(VAR2);


FUN6(1);


VAR3 = 10;
while (FUN2(VAR2)) {
if (VAR3) {
VAR3--;
} else {
FUN7(VAR2->VAR5, "");
return -VAR6;
}
FUN6(5);
}


FUN8(VAR2, VAR7);

FUN4(VAR2, VAR8);

return 0;
}