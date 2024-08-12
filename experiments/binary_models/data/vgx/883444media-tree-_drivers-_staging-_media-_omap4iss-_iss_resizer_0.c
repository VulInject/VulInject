static void
FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4, unsigned int VAR5,
struct VAR6 *VAR7,
enum v4l2_subdev_format_whence VAR8)
{
u32 VAR9;
struct VAR6 *VAR10;
unsigned int VAR11 = VAR7->VAR11;
unsigned int VAR12 = VAR7->VAR12;
unsigned int VAR13;

switch (VAR5) {
case VAR14:
for (VAR13 = 0; VAR13 < FUN2(VAR15); VAR13++) {
if (VAR7->VAR16 == VAR15[VAR13])
break;
}


if (VAR13 >= FUN2(VAR15))
VAR7->VAR16 = VAR17;


VAR7->VAR11 = FUN3(VAR18, VAR11, 1, 8192);
VAR7->VAR12 = FUN3(VAR18, VAR12, 1, 8192);
break;

case VAR19:
VAR9 = VAR7->VAR16;
VAR10 = FUN4(VAR2, VAR4, VAR14,
VAR8);
memcpy(VAR7, VAR10, sizeof(*VAR7));

if ((VAR9 == VAR20) &&
(VAR7->VAR16 == VAR17))
VAR7->VAR16 = VAR9;


VAR7->VAR11 = FUN3(VAR18, VAR11, 32, (VAR7->VAR11 + 15) & ~15);
VAR7->VAR11 &= ~15;
VAR7->VAR12 = FUN3(VAR18, VAR12, 32, VAR7->VAR12);
break;
}

VAR7->VAR21 = VAR22;
VAR7->VAR23 = VAR24;
}