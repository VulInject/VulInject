static int FUN1(struct VAR1 * VAR2) {
int VAR3;
VAR2->VAR4 = VAR2->VAR5;
if (VAR2->VAR5 - 1 <= VAR2->VAR6 || VAR2->VAR7[VAR2->VAR5 - 1] >> 5 != 3 || !((266786 >> (VAR2->VAR7[VAR2->VAR5 - 1] & 0x1f)) & 1)) return 0;
VAR3 = FUN2(VAR2, VAR8, 16);
if (!(VAR3)) return 0;
VAR2->VAR9 = VAR2->VAR5;
{   int VAR10 = FUN3(VAR2);
if (VAR10 <= 0) return VAR10;
}
switch (VAR3) {
case 1:
{   int VAR10 = FUN4(VAR2);
if (VAR10 < 0) return VAR10;
}
break;
case 2:
{   int VAR10 = FUN5(VAR2, 1, VAR11);
if (VAR10 < 0) return VAR10;
}
break;
case 3:
{   int VAR10 = FUN5(VAR2, 1, VAR12);
if (VAR10 < 0) return VAR10;
}
break;
case 4:
{   int VAR10 = FUN5(VAR2, 1, VAR13);
if (VAR10 < 0) return VAR10;
}
break;
case 5:
{   int VAR14 = VAR2->VAR15 - VAR2->VAR5; (void)VAR14;
if (!(FUN6(VAR2, 2, VAR16))) goto VAR17;
return 0;
VAR17:
VAR2->VAR5 = VAR2->VAR15 - VAR14;
}
{   int VAR10 = FUN5(VAR2, 1, VAR18);
if (VAR10 < 0) return VAR10;
}
break;
case 6:
{   int VAR10 = FUN5(VAR2, 2, VAR19);
if (VAR10 < 0) return VAR10;
}
break;
case 7:
{   int VAR10 = FUN5(VAR2, 3, VAR20);
if (VAR10 < 0) return VAR10;
}
break;
}
return 1;
}