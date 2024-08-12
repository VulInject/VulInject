static struct VAR1 FUN1(
struct VAR2 *VAR3,
uint8_t VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR3);
struct graphics_object_id VAR7 = FUN3(
0, VAR8, VAR9);
uint16_t VAR10;

uint32_t VAR11 = VAR6->VAR12
+ FUN4(VAR6->VAR13.VAR14->VAR15);

VAR16 *VAR17 = ((VAR16 *) FUN5(&VAR6->VAR18,
VAR11,
FUN6(VAR17, VAR19, 1)));

if (!VAR17) {
FUN7("");
return VAR7;
}

if (VAR17->VAR20 <= VAR4) {
FUN7("",
VAR4, VAR17->VAR20);
return VAR7;
}

VAR10 = FUN4(VAR17->VAR19[VAR4].VAR21);
VAR7 = FUN8(VAR10);
return VAR7;
}