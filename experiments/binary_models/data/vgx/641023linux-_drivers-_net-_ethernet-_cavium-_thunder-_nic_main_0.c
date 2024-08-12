static int FUN1(struct VAR1 *VAR2)
{
u16 VAR3 = ~0x00;

FUN2(VAR2, VAR4, 0x01);

while (VAR3) {
if (FUN3(VAR2, VAR5) & 0x1)
break;
VAR3--;
}
FUN2(VAR2, VAR4, 0x00);
if (!VAR3) {
FUN4(&VAR2->VAR6->VAR7, "");
return 1;
}
return 0;
}