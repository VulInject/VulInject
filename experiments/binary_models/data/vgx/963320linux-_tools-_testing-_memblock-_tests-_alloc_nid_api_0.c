static int FUN1(void)
{
int VAR1 = 0;
struct VAR2 *VAR3 = &VAR4.VAR5.VAR6[0];
struct VAR2 *VAR7 = &VAR4.VAR8.VAR6[2];
struct VAR2 *VAR9 = &VAR4.VAR8.VAR6[5];
void *VAR10 = NULL;
phys_addr_t VAR11 = VAR12;
phys_addr_t VAR13;
phys_addr_t VAR14;

FUN2();
FUN3(VAR15);

VAR14 = VAR7->VAR16;
VAR13 = FUN4(VAR9);

VAR10 = FUN5(VAR11, VAR17,
VAR14, VAR13, VAR1);

FUN6(VAR10, NULL);
FUN7(VAR10, VAR11, VAR18);

FUN8(VAR3->VAR11, VAR11);
FUN8(VAR3->VAR16, VAR13 - VAR11);
FUN9(VAR9->VAR16, VAR3->VAR16);

FUN8(VAR4.VAR5.VAR19, 1);
FUN8(VAR4.VAR5.VAR20, VAR11);

FUN10();

return 0;
}