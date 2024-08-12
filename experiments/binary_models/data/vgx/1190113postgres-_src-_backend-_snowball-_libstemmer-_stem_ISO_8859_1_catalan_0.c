static int FUN1(struct VAR1 * VAR2) {
VAR2->VAR3 = VAR2->VAR4;
if (VAR2->VAR4 - 1 <= VAR2->VAR5 || VAR2->VAR6[VAR2->VAR4 - 1] >> 5 != 3 || !((1634850 >> (VAR2->VAR6[VAR2->VAR4 - 1] & 0x1f)) & 1)) return 0;
if (!(FUN2(VAR2, VAR7, 39))) return 0;
VAR2->VAR8 = VAR2->VAR4;
{   int VAR9 = FUN3(VAR2);
if (VAR9 <= 0) return VAR9;
}
{   int VAR9 = FUN4(VAR2);
if (VAR9 < 0) return VAR9;
}
return 1;
}