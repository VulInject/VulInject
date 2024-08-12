static void FUN1(struct VAR1 *VAR2, int VAR3, int VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR2);
struct blk_plug VAR7;
int VAR8, VAR9;
nid_t VAR10;

FUN3(&VAR7);


VAR9 = VAR3 + VAR4;
VAR9 = FUN4(VAR9, VAR11);
for (VAR8 = VAR3; VAR8 < VAR9; VAR8++) {
VAR10 = FUN5(VAR2, VAR8, false);
FUN6(VAR6, VAR10);
}

FUN7(&VAR7);
}