static int FUN1(struct VAR1 *VAR2, void VAR3 *VAR4)
{
int VAR5 = 0;
u32 VAR6;

do {
if (FUN2(VAR2, VAR7))
return -VAR8;

VAR6 = FUN3(VAR4);
if (VAR6 == 0xffffffff)
return -1;

VAR6 &= VAR9;
if (VAR6)
break;

if (VAR5 > 4000) {
FUN4(&VAR2->VAR10->VAR11, "");
FUN5(VAR2, VAR12);
FUN6(VAR2);
return -1;
}

FUN7(1);
VAR5++;
} while (true);

return 0;
}