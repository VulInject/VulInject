FUN1(VAR1, int, 0644);
FUN2(VAR1, "");

static int VAR2;
FUN1(VAR2, int, 0644);
FUN2(VAR2, "");

static int VAR3;
FUN1(VAR3, int, 0644);
FUN2(VAR3, "");

static int VAR4 = 0;
FUN1(VAR4, int, 0644);
FUN2(VAR4, "");

void FUN3(struct VAR5 *VAR6, u32 VAR7, u32 VAR8)
{
FUN4(2, VAR1, &VAR6->VAR9,
"", VAR10, VAR7, VAR8);
FUN5(VAR7, VAR6->VAR11 + VAR8);
}