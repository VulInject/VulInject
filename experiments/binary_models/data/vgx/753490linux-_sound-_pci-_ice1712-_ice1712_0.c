static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR2);
static const unsigned char VAR7[16] = {
9, 6, 3, 1, 7, 4, 0, 12, 8, 5, 2, 11, 255, 255, 255, 10
};
unsigned char VAR8;

FUN3(&VAR6->VAR9);
if (FUN4(VAR6)) {
VAR4->VAR10.VAR11.VAR12[0] = 13;
} else {
VAR8 = VAR7[FUN5(FUN6(VAR6, VAR13)) & 15];
if (VAR8 == 255) {
FUN7();
VAR8 = 0;
}
VAR4->VAR10.VAR11.VAR12[0] = VAR8;
}
FUN8(&VAR6->VAR9);
return 0;
}