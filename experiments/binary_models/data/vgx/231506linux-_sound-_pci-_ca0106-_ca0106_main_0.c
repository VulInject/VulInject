int FUN1(struct VAR1 *VAR2,
u32 VAR3,
u32 VAR4)
{
u32 VAR5;
int VAR6 = 0;
int VAR7;
int VAR8;
if ((VAR3 > 0x7f) || (VAR4 > 0x1ff)) {
FUN2(VAR2->VAR9->VAR10, "");
return -VAR11;
}

VAR5 = VAR3 << 25 | VAR4 << 16;





FUN3(VAR2, VAR12, 0, VAR5);

for (VAR8 = 0; VAR8 < 10; VAR8++) {



VAR5 = 0;
VAR5 = VAR5 | (VAR13|VAR14|VAR15);
FUN3(VAR2, VAR16, 0, VAR5);


while (1) {
VAR7 = FUN4(VAR2, VAR16, 0);

VAR6++;
if ((VAR7 & VAR14) == 0)
break;

if (VAR6 > 1000)
break;
}

if ((VAR7 & VAR17) == 0)
break;
}

if (VAR8 == 10) {
FUN2(VAR2->VAR9->VAR10, "");
return -VAR11;
}

return 0;
}