FUN1 (void)
{
FUN2(VAR1+0, 0, 1);
FUN3(VAR1+1, 0, 1);
FUN4(VAR1+2, 1);
FUN5(VAR1+3);

FUN6(VAR1+4, 1);
FUN6(VAR1+5, 4);
FUN6(VAR1+6, 22);
FUN7(VAR1+7, 12);
FUN8(VAR1+8, 7);
FUN9(VAR1+9, 8);
FUN10(VAR1+10, 9);
FUN11(VAR1+11, 7);
}

static long VAR2[12];
static long VAR3[12] = { 0, 0, 0, 1, 0, 0, 0, 0, -1, 0, 0, 0 };
static long VAR4[12] = { 1, 1, 1, 0, 1, 4, 22, -12, 7, 8, 9, 7 };

static void
FUN12 (void)
{
FUN2(VAR2+0, 0, 1);
FUN3(VAR2+1, 0, 1);
FUN4(VAR2+2, 1);
FUN5(VAR2+3);

FUN6(VAR2+4, 1);
FUN6(VAR2+5, 4);
FUN6(VAR2+6, 22);
FUN7(VAR2+7, 12);
FUN8(VAR2+8, 7);
FUN9(VAR2+9, 8);
FUN10(VAR2+10, 9);
FUN11(VAR2+11, 7);
}