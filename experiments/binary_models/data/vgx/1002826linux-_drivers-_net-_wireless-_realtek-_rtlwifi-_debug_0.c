FUN1(VAR1, 0x0f00);
FUN1(18, 0x1800);
FUN1(19, 0x1900);
FUN1(1a, 0x1a00);
FUN1(1b, 0x1b00);
FUN1(1c, 0x1c00);
FUN1(1d, 0x1d00);
FUN1(1e, 0x1e00);
FUN1(1f, 0x1f00);

static int FUN2(struct VAR2 *VAR3, void *VAR4)
{
struct VAR5 *VAR6 = VAR3->private;
struct VAR7 *VAR8 = VAR6->VAR8;
struct VAR9 *VAR10 = VAR8->VAR10;
enum radio_path VAR11 = VAR6->VAR12;
int VAR13, VAR14;
int VAR15 = 0x40;

if (FUN3(VAR8))
VAR15 = 0xff;

FUN4(VAR3, "", VAR11);

for (VAR14 = 0; VAR14 <= VAR15; ) {
FUN4(VAR3, "", VAR14);
for (VAR13 = 0; VAR13 < 4 && VAR14 <= VAR15; VAR14 += 1, VAR13++)
FUN4(VAR3, "",
FUN5(VAR10, VAR11, VAR14, 0xffffffff));
}
FUN6(VAR3, "");
return 0;
}