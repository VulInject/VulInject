static void FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
struct VAR5 *VAR6;
struct VAR7 *VAR8;
struct VAR9 *VAR10 = FUN2(VAR2);
struct VAR11 *VAR12;
size_t VAR13;

VAR6 = (struct VAR5 *)((unsigned long)VAR4 +
(VAR4->VAR14 << 3));

if (VAR6->VAR15 != VAR16)
return;

VAR8 = (struct VAR7 *)VAR6->VAR17;

switch (VAR8->VAR18.VAR15) {
case VAR19:

if ((VAR6->VAR20 + sizeof(struct VAR5)
- sizeof(unsigned char))
> sizeof(struct VAR21)) {
FUN3(1);
break;
}

memcpy(&VAR10->VAR22, VAR6,
VAR6->VAR20 + sizeof(struct VAR5) -
sizeof(unsigned char));
FUN4(&VAR10->VAR23);
break;

case VAR24:
FUN3(VAR6->VAR20 < sizeof(struct VAR25));


FUN5(VAR10,
(struct VAR26 *)VAR6->VAR17);
break;
case VAR27:
VAR12 =
(struct VAR11 *)VAR6->VAR17;
if (!VAR10->VAR28)
break;

VAR13 = FUN6(VAR12->VAR18.VAR20,
(VAR29)sizeof(VAR10->VAR30));
memcpy(VAR10->VAR30, VAR12->VAR31, VAR13);
FUN7(VAR10->VAR32, VAR33,
VAR10->VAR30, VAR13, 1);

FUN8(&VAR10->VAR2->VAR2, 0);

break;
default:
FUN9("",
VAR8->VAR18.VAR15, VAR8->VAR18.VAR20);
break;
}

}