static int FUN1(struct VAR1 *VAR2, void *VAR3,
enum kfd_preempt_type VAR4,
unsigned int VAR5, uint32_t VAR6,
uint32_t VAR7)
{
enum hqd_dequeue_request_type VAR8;
unsigned long VAR9;
uint32_t VAR10;
struct VAR11 *VAR12 = FUN2(VAR3);

FUN3(VAR2, VAR6, VAR7);

if (VAR12->VAR13 == 0)
FUN4(VAR14, 0, VAR15, VAR16, 0);

switch (VAR4) {
case VAR17:
VAR8 = VAR18;
break;
case VAR19:
VAR8 = VAR20;
break;
default:
VAR8 = VAR18;
break;
}

FUN5(FUN6(VAR14, 0, VAR21), VAR8);

VAR9 = (VAR5 * VAR22 / 1000) + VAR23;
while (true) {
VAR10 = FUN7(FUN6(VAR14, 0, VAR24));
if (!(VAR10 & VAR25))
break;
if (FUN8(VAR23, VAR9)) {
FUN9("",
VAR6, VAR7);
FUN10(VAR2);
return -VAR26;
}
FUN11(500, 1000);
}

FUN10(VAR2);
return 0;
}