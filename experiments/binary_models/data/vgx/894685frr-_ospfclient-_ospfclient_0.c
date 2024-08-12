static void FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4;
struct in_addr VAR5;
struct in_addr VAR6;
uint8_t VAR7;
uint8_t VAR8;
uint32_t VAR9;
void *VAR10;
int VAR11;

static uint32_t VAR12 = 1; 
int VAR13;

VAR4 = FUN2(VAR2);

VAR13 = FUN3(VAR14[5], &VAR5);
if (VAR13 <= 0) {
FUN4("", VAR14[5]);
return;
}

VAR13 = FUN3(VAR14[6], &VAR6);
if (VAR13 <= 0) {
FUN4("", VAR14[6]);
return;
}
VAR7 = FUN5(VAR14[2]);
VAR8 = FUN5(VAR14[3]);
VAR9 = FUN5(VAR14[4]);
VAR10 = &VAR12;
VAR11 = sizeof(VAR15);

FUN4("", VAR12);
VAR13 = FUN6(VAR4, VAR5, VAR6, VAR7,
VAR8, VAR9, VAR10,
VAR11);

FUN4("", VAR13);

VAR12++;
}