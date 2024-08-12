extern int FUN1(struct VAR1 * VAR2) {
{   int VAR3 = VAR2->VAR4;
{   int VAR5 = FUN2(VAR2);
if (VAR5 < 0) return VAR5;
}
VAR2->VAR4 = VAR3;
}

{   int VAR5 = FUN3(VAR2);
if (VAR5 < 0) return VAR5;
}
VAR2->VAR6 = VAR2->VAR4; VAR2->VAR4 = VAR2->VAR7;

{   int VAR8 = VAR2->VAR7 - VAR2->VAR4; (void)VAR8;
{   int VAR5 = FUN4(VAR2);
if (VAR5 < 0) return VAR5;
}
VAR2->VAR4 = VAR2->VAR7 - VAR8;
}
{   int VAR9 = VAR2->VAR7 - VAR2->VAR4; (void)VAR9;
{   int VAR5 = FUN5(VAR2);
if (VAR5 < 0) return VAR5;
}
VAR2->VAR4 = VAR2->VAR7 - VAR9;
}
{   int VAR10 = VAR2->VAR7 - VAR2->VAR4; (void)VAR10;
{   int VAR11 = VAR2->VAR7 - VAR2->VAR4; (void)VAR11;
if (!(VAR2->VAR12[3])) goto VAR13;
goto VAR14;
VAR13:
VAR2->VAR4 = VAR2->VAR7 - VAR11;
{   int VAR5 = FUN6(VAR2);
if (VAR5 == 0) goto VAR15;
if (VAR5 < 0) return VAR5;
}
}
VAR14:
VAR15:
VAR2->VAR4 = VAR2->VAR7 - VAR10;
}
{   int VAR16 = VAR2->VAR7 - VAR2->VAR4; (void)VAR16;
{   int VAR5 = FUN7(VAR2);
if (VAR5 < 0) return VAR5;
}
VAR2->VAR4 = VAR2->VAR7 - VAR16;
}
VAR2->VAR4 = VAR2->VAR6;
{   int VAR17 = VAR2->VAR4;
{   int VAR5 = FUN8(VAR2);
if (VAR5 < 0) return VAR5;
}
VAR2->VAR4 = VAR17;
}
return 1;
}