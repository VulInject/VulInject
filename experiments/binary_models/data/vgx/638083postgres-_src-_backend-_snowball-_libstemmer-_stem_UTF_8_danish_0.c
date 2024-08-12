static int FUN1(struct VAR1 * VAR2) {
{   int VAR3 = VAR2->VAR4 - VAR2->VAR5;

{   int VAR6;
if (VAR2->VAR5 < VAR2->VAR7[1]) return 0;
VAR6 = VAR2->VAR8; VAR2->VAR8 = VAR2->VAR7[1];
VAR2->VAR9 = VAR2->VAR5;
if (VAR2->VAR5 - 1 <= VAR2->VAR8 || (VAR2->VAR10[VAR2->VAR5 - 1] != 100 && VAR2->VAR10[VAR2->VAR5 - 1] != 116)) { VAR2->VAR8 = VAR6; return 0; }
if (!(FUN2(VAR2, VAR11, 4))) { VAR2->VAR8 = VAR6; return 0; }
VAR2->VAR12 = VAR2->VAR5;
VAR2->VAR8 = VAR6;
}
VAR2->VAR5 = VAR2->VAR4 - VAR3;
}
{   int VAR13 = FUN3(VAR2->VAR10, VAR2->VAR5, VAR2->VAR8, 1);
if (VAR13 < 0) return 0;
VAR2->VAR5 = VAR13;
}
VAR2->VAR12 = VAR2->VAR5;
{   int VAR13 = FUN4(VAR2);
if (VAR13 < 0) return VAR13;
}
return 1;
}