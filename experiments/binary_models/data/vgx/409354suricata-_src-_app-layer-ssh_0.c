static int FUN1(void)
{
Flow VAR1;
uint8_t VAR2[] = "";
uint32_t VAR3 = sizeof(VAR2) - 1;
TcpSession VAR4;
VAR5 *VAR6 = FUN2();
FUN3(VAR6);

memset(&VAR1, 0, sizeof(VAR1));
memset(&VAR4, 0, sizeof(VAR4));
FUN4(&VAR1);
VAR1.VAR7 = (void *)&VAR4;
VAR1.VAR8 = VAR9;

FUN5(true);

int VAR10 = FUN6(NULL, VAR6, &VAR1, VAR9,
VAR11 | VAR12, VAR2, VAR3);
FUN7(VAR10 != -1);

void *VAR13 = VAR1.VAR14;
FUN3(VAR13);
void * VAR15 = FUN8(VAR13, 0);
FUN7( FUN9(VAR15, VAR11) == VAR16 );
const VAR17 *VAR18 = NULL;
uint32_t VAR19 = 0;
FUN7 (FUN10(VAR15, &VAR18, &VAR19, VAR20) != 0);

FUN11(VAR6);
FUN12(true);
FUN13(&VAR1);
VAR21;
}